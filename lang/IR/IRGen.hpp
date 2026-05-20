#include "../MattyVisitor.h"
#include "../MattyParser.h"
#include <stdlib.h>
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/NoFolder.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

using namespace std;
using namespace llvm;

unique_ptr<LLVMContext> Context;
unique_ptr<Module> Executable;
unique_ptr<IRBuilder<ConstantFolder>> Builder;
map<string, map<string, AllocaInst *>> symbolTable;
string lastVar;

class IRGen : public MattyVisitor
{
private:
    Value *cPrint;
    Value *cScanf;
    BasicBlock *currentBlock;
    Function *currentFunction;
    string currentVar;
    map<string, int> currentVarSize;
    Value *dPrint;
    Value *dScanf;
    Value *fPrint;
    Value *fScanf;
    Value *fracPrint;
    FunctionCallee Input;
    FunctionCallee Print;
    Value *sPrint;
    Value *sScanf;
    StructType *FractionType;

public:
    IRGen(MattyParser::ProgramaContext *tree)
    {
        Context = make_unique<LLVMContext>();
        Executable = make_unique<Module>("MattyModule", *Context);
        Builder = make_unique<IRBuilder<ConstantFolder>>(*Context);

        Executable->setDataLayout(DataLayout("e-m:e-i64:64-f80:128-n8:16:32:64-S128"));
        Executable->setModuleIdentifier("Executável");
        Executable->setTargetTriple("x86_64-unknown-linux-gnu");

        FunctionType *MAIN = FunctionType::get(Type::getInt32Ty(*Context), false);
        currentFunction = Function::Create(MAIN, Function::ExternalLinkage, "main", Executable.get());
        currentBlock = BasicBlock::Create(*Context, "entrada", currentFunction);
        Builder->SetInsertPoint(currentBlock);

        dPrint = Builder->CreateGlobalStringPtr("%d\n", "dPrint");
        fPrint = Builder->CreateGlobalStringPtr("%f\n", "fPrint");
        cPrint = Builder->CreateGlobalStringPtr("%c\n", "cPrint");
        sPrint = Builder->CreateGlobalStringPtr("%s\n", "sPrint");

        dScanf = Builder->CreateGlobalStringPtr("%d", "dScanf");
        fScanf = Builder->CreateGlobalStringPtr("%f", "fScanf");
        cScanf = Builder->CreateGlobalStringPtr("%c", "cScanf");
        sScanf = Builder->CreateGlobalStringPtr("%s", "sScanf");

        Print = Executable->getOrInsertFunction("printf",
                                                FunctionType::get(IntegerType::getInt32Ty(*Context), {PointerType::get(Type::getInt8Ty(*Context), 0)}, true));

        Input = Executable->getOrInsertFunction("scanf",
                                                FunctionType::get(IntegerType::getInt32Ty(*Context), {PointerType::get(Type::getInt8Ty(*Context), 0)}, true));

        FractionType = StructType::create(*Context, "Fraction");
        FractionType->setBody({Type::getInt32Ty(*Context), Type::getInt32Ty(*Context)});

        fracPrint = Builder->CreateGlobalStringPtr("%d///%d\n", "fracPrint");

        visitPrograma(tree);

        Builder->CreateRet(ConstantInt::get(Type::getInt32Ty(*Context), 0));

        verifyFunction(*currentFunction);
        Executable->print(outs(), nullptr);

        error_code errorCode;
        raw_fd_ostream out("executavel.ll", errorCode);
        Executable->print(out, nullptr);
        out.flush();
    }

    llvm::Value *convertToDecimal(llvm::Value *val)
    {
        if (val->getType()->isIntegerTy())
            return Builder->CreateSIToFP(val, Type::getDoubleTy(*Context));

        Type *fracPtrTy = PointerType::getUnqual(FractionType);
        if (val->getType() == fracPtrTy)
        {
            Value *numGEP = Builder->CreateStructGEP(FractionType, val, 0);
            Value *denGEP = Builder->CreateStructGEP(FractionType, val, 1);
            Value *num = Builder->CreateLoad(Type::getInt32Ty(*Context), numGEP);
            Value *den = Builder->CreateLoad(Type::getInt32Ty(*Context), denGEP);
            Value *numF = Builder->CreateSIToFP(num, Type::getDoubleTy(*Context));
            Value *denF = Builder->CreateSIToFP(den, Type::getDoubleTy(*Context));
            return Builder->CreateFDiv(numF, denF);
        }

        return val;
    }

    bool isFraction(Value *v)
    {
        Type *fracPtrTy = PointerType::getUnqual(FractionType);
        return v->getType() == fracPtrTy;
    }

    Value *makeFraction(Value *num, Value *den)
    {
        AllocaInst *alloca = Builder->CreateAlloca(FractionType, nullptr, "frac_tmp");

        Type *i32 = Type::getInt32Ty(*Context);
        AllocaInst *origNumAlloca = Builder->CreateAlloca(i32, nullptr, "orig_num");
        AllocaInst *origDenAlloca = Builder->CreateAlloca(i32, nullptr, "orig_den");
        Value *numI32 = Builder->CreateIntCast(num, i32, true);
        Value *denI32 = Builder->CreateIntCast(den, i32, true);
        Builder->CreateStore(numI32, origNumAlloca);
        Builder->CreateStore(denI32, origDenAlloca);

        AllocaInst *aAlloca = Builder->CreateAlloca(i32, nullptr, "gcd_a");
        AllocaInst *bAlloca = Builder->CreateAlloca(i32, nullptr, "gcd_b");
        Value *numLoaded = Builder->CreateLoad(i32, origNumAlloca);
        Value *denLoaded = Builder->CreateLoad(i32, origDenAlloca);
        Value *zero = ConstantInt::get(i32, 0);
        Value *negNum = Builder->CreateNeg(numLoaded);
        Value *negDen = Builder->CreateNeg(denLoaded);
        Value *absNum = Builder->CreateSelect(Builder->CreateICmpSLT(numLoaded, zero), negNum, numLoaded);
        Value *absDen = Builder->CreateSelect(Builder->CreateICmpSLT(denLoaded, zero), negDen, denLoaded);
        Builder->CreateStore(absNum, aAlloca);
        Builder->CreateStore(absDen, bAlloca);

        Function *func = Builder->GetInsertBlock()->getParent();
        BasicBlock *gcdCond = BasicBlock::Create(*Context, "gcd.cond", func);
        BasicBlock *gcdBody = BasicBlock::Create(*Context, "gcd.body", func);
        BasicBlock *gcdEnd = BasicBlock::Create(*Context, "gcd.end", func);

        Builder->CreateBr(gcdCond);

        Builder->SetInsertPoint(gcdCond);
        Value *bVal = Builder->CreateLoad(i32, bAlloca);
        Value *cmp = Builder->CreateICmpNE(bVal, ConstantInt::get(i32, 0));
        Builder->CreateCondBr(cmp, gcdBody, gcdEnd);

        Builder->SetInsertPoint(gcdBody);
        Value *aVal = Builder->CreateLoad(i32, aAlloca);
        bVal = Builder->CreateLoad(i32, bAlloca);
        Value *rem = Builder->CreateSRem(aVal, bVal);
        Builder->CreateStore(bVal, aAlloca);
        Builder->CreateStore(rem, bAlloca);
        Builder->CreateBr(gcdCond);

        Builder->SetInsertPoint(gcdEnd);
        Value *g = Builder->CreateLoad(i32, aAlloca);
        Value *gNonZero = Builder->CreateSelect(Builder->CreateICmpEQ(g, ConstantInt::get(i32, 0)), ConstantInt::get(i32, 1), g);

        Value *finalNum = Builder->CreateSDiv(Builder->CreateLoad(i32, origNumAlloca), gNonZero);
        Value *finalDen = Builder->CreateSDiv(Builder->CreateLoad(i32, origDenAlloca), gNonZero);

        Value *denNeg = Builder->CreateICmpSLT(finalDen, zero);
        Value *negFinalNum = Builder->CreateNeg(finalNum);
        Value *negFinalDen = Builder->CreateNeg(finalDen);
        Value *storeNum = Builder->CreateSelect(denNeg, negFinalNum, finalNum);
        Value *storeDen = Builder->CreateSelect(denNeg, negFinalDen, finalDen);

        Value *numGEP = Builder->CreateStructGEP(FractionType, alloca, 0);
        Value *denGEP = Builder->CreateStructGEP(FractionType, alloca, 1);
        Builder->CreateStore(storeNum, numGEP);
        Builder->CreateStore(storeDen, denGEP);

        return alloca;
    }

    std::string *getValueOrX();

    string getExecutable()
    {
        string irString;
        raw_string_ostream rso(irString);
        Executable->print(rso, nullptr);
        return rso.str();
    }

    virtual std::any visitPrograma(MattyParser::ProgramaContext *ctx) override
    {
        for (MattyParser::ComandoContext *comando : ctx->comando())
            visitComando(comando);

        return {};
    }

    virtual std::any visitComando(MattyParser::ComandoContext *ctx)
    {
        if (auto *atribuicao = dynamic_cast<MattyParser::AtribuicaoContext *>(ctx))
            return visitAtribuicao(atribuicao);
        else if (auto *escolha = dynamic_cast<MattyParser::EscolhaContext *>(ctx))
            return visitEscolha(escolha);
        else if (auto *loopFor = dynamic_cast<MattyParser::LoopForContext *>(ctx))
            return visitLoopFor(loopFor);
        else if (auto *se = dynamic_cast<MattyParser::SeContext *>(ctx))
            return visitSe(se);
        else if (auto *exiba = dynamic_cast<MattyParser::ExibaContext *>(ctx))
            return visitExiba(exiba);
        else if (auto *repita = dynamic_cast<MattyParser::RepitaContext *>(ctx))
            return visitRepita(repita);
        else if (auto *loopWhile = dynamic_cast<MattyParser::LoopWhileContext *>(ctx))
            return visitLoopWhile(loopWhile);
        else if (auto *bloco = dynamic_cast<MattyParser::BlocoContext *>(ctx))
            return visitBloco(bloco);
        else
            throw runtime_error("Comando desconhecido");

        return {};
    }

    virtual std::any visitAtribuicao(MattyParser::AtribuicaoContext *ctx) override
    {
        if (ctx->ID().size() != ctx->valor().size())
            throw runtime_error("Número de variáveis e valores não correspondem");
        for (size_t i = 0; i < ctx->ID().size(); i++)
        {
            string var = ctx->ID(i)->getText();
            std::any value = visitValor(ctx->valor(i));
            Value *val = std::any_cast<Value *>(value);
            string funcName = currentFunction->getName().str();
            if (symbolTable[funcName].find(var) == symbolTable[funcName].end())
            {
                AllocaInst *alloca = Builder->CreateAlloca(val->getType(), nullptr, var);
                Builder->CreateStore(val, alloca);
                symbolTable[funcName][var] = alloca;
            }
            else
            {
                Builder->CreateStore(val, symbolTable[funcName][var]);
            }
        }

        return {};
    }

    virtual std::any visitEscolha(MattyParser::EscolhaContext *ctx) override
    {
        Value *cond = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Function *func = Builder->GetInsertBlock()->getParent();
        BasicBlock *endBlock = BasicBlock::Create(*Context, "end", func);
        BasicBlock *defaultBlock = BasicBlock::Create(*Context, "default", func);

        vector<pair<Value *, BasicBlock *>> cases;
        for (size_t i = 1; i < ctx->expressao().size(); i++)
        {
            Value *caseCond = std::any_cast<Value *>(visit(ctx->expressao(i)));
            BasicBlock *caseBlock = BasicBlock::Create(*Context, "case", func);
            cases.emplace_back(caseCond, caseBlock);
        }

        BasicBlock *currentCheckBlock = BasicBlock::Create(*Context, "check0", func);
        Builder->CreateBr(currentCheckBlock);

        for (size_t i = 0; i < cases.size(); i++)
        {
            Builder->SetInsertPoint(currentCheckBlock);
            Value *cmp = Builder->CreateICmpEQ(cond, cases[i].first);
            BasicBlock *nextBlock = (i == cases.size() - 1) ? defaultBlock : BasicBlock::Create(*Context, "check" + to_string(i + 1), func);
            Builder->CreateCondBr(cmp, cases[i].second, nextBlock);
            Builder->SetInsertPoint(cases[i].second);
            visit(ctx->comando(i));
            Builder->CreateBr(endBlock);

            currentCheckBlock = nextBlock;
        }

        Builder->SetInsertPoint(defaultBlock);
        visit(ctx->comando(ctx->comando().size() - 1));
        Builder->CreateBr(endBlock);

        Builder->SetInsertPoint(endBlock);

        return {};
    }

    virtual std::any visitSe(MattyParser::SeContext *ctx) override
    {
        Function *func = Builder->GetInsertBlock()->getParent();
        BasicBlock *endBlock = BasicBlock::Create(*Context, "if.end", func);
        BasicBlock *elseBlock = BasicBlock::Create(*Context, "if.else", func);
        BasicBlock *currentCheckBlock = BasicBlock::Create(*Context, "if.check0", func);

        Builder->CreateBr(currentCheckBlock);

        for (size_t i = 0; i < ctx->booleano().size(); i++)
        {
            Builder->SetInsertPoint(currentCheckBlock);
            Value *cond = std::any_cast<Value *>(visit(ctx->booleano(i)));
            BasicBlock *thenBlock = BasicBlock::Create(*Context, "if.then" + to_string(i), func);
            BasicBlock *nextCheckBlock = (i + 1 == ctx->booleano().size())
                                             ? elseBlock
                                             : BasicBlock::Create(*Context, "if.check" + to_string(i + 1), func);

            Builder->CreateCondBr(cond, thenBlock, nextCheckBlock);

            Builder->SetInsertPoint(thenBlock);
            visit(ctx->comando(i));
            Builder->CreateBr(endBlock);

            currentCheckBlock = nextCheckBlock;
        }

        Builder->SetInsertPoint(elseBlock);
        visit(ctx->comando(ctx->comando().size() - 1));
        Builder->CreateBr(endBlock);

        Builder->SetInsertPoint(endBlock);

        return {};
    }

    virtual std::any visitExiba(MattyParser::ExibaContext *ctx) override
    {
        for (MattyParser::ValorContext *valCtx : ctx->valor())
        {
            Value *val = std::any_cast<Value *>(visitValor(valCtx));
            if (isFraction(val))
            {
                Value *numGEP = Builder->CreateStructGEP(FractionType, val, 0);
                Value *denGEP = Builder->CreateStructGEP(FractionType, val, 1);
                Value *num = Builder->CreateLoad(Type::getInt32Ty(*Context), numGEP);
                Value *den = Builder->CreateLoad(Type::getInt32Ty(*Context), denGEP);
                Builder->CreateCall(Print, {fracPrint, Builder->CreateIntCast(num, Type::getInt32Ty(*Context), true), Builder->CreateIntCast(den, Type::getInt32Ty(*Context), true)});
                continue;
            }
            if (val->getType()->isIntegerTy(1))
            {
                Value *boolVal = Builder->CreateSelect(val, Builder->CreateGlobalStringPtr("true"), Builder->CreateGlobalStringPtr("false"));
                Builder->CreateCall(Print, {sPrint, boolVal});
            }
            else if (val->getType()->isIntegerTy(8))
                Builder->CreateCall(Print, {cPrint, Builder->CreateIntCast(val, Type::getInt32Ty(*Context), false)});
            else if (val->getType()->isIntegerTy())
                Builder->CreateCall(Print, {dPrint, val});
            else if (val->getType()->isFloatingPointTy())
                Builder->CreateCall(Print, {fPrint, convertToDecimal(val)});
            else if (val->getType()->isPointerTy())
                Builder->CreateCall(Print, {sPrint, val});
            else
                throw runtime_error("Tipo de dado não suportado para exibição");
        }

        return {};
    }

    virtual std::any visitRepita(MattyParser::RepitaContext *ctx) override
    {
        Value *timesVal = std::any_cast<Value *>(visit(ctx->expressao()));

        Value *timesI32 = nullptr;
        if (timesVal->getType()->isIntegerTy())
            timesI32 = Builder->CreateIntCast(timesVal, Type::getInt32Ty(*Context), true);
        else if (timesVal->getType()->isFloatingPointTy())
            timesI32 = Builder->CreateFPToSI(timesVal, Type::getInt32Ty(*Context));
        else
            throw runtime_error("Tipo inválido para 'repita' (esperado inteiro)");

        Function *func = Builder->GetInsertBlock()->getParent();

        BasicBlock *condBr = BasicBlock::Create(*Context, "repita.cond", func);
        BasicBlock *bodyBr = BasicBlock::Create(*Context, "repita.body", func);
        BasicBlock *endBr = BasicBlock::Create(*Context, "repita.end", func);

        AllocaInst *counter = Builder->CreateAlloca(Type::getInt32Ty(*Context), nullptr, "rep_i");
        Builder->CreateStore(ConstantInt::get(Type::getInt32Ty(*Context), 0), counter);
        Builder->CreateBr(condBr);

        Builder->SetInsertPoint(condBr);
        Value *cur = Builder->CreateLoad(Type::getInt32Ty(*Context), counter);
        Value *cmp = Builder->CreateICmpSLT(cur, timesI32);
        Builder->CreateCondBr(cmp, bodyBr, endBr);

        Builder->SetInsertPoint(bodyBr);
        visit(ctx->comando());
        Value *next = Builder->CreateAdd(cur, ConstantInt::get(Type::getInt32Ty(*Context), 1));
        Builder->CreateStore(next, counter);
        Builder->CreateBr(condBr);

        Builder->SetInsertPoint(endBr);

        return {};
    }

    virtual std::any visitLoopWhile(MattyParser::LoopWhileContext *ctx) override
    {
        Function *func = Builder->GetInsertBlock()->getParent();

        BasicBlock *condBr = BasicBlock::Create(*Context, "loop.cond", func);
        BasicBlock *bodyBr = BasicBlock::Create(*Context, "loop.body", func);
        BasicBlock *endBr = BasicBlock::Create(*Context, "loop.end", func);

        Builder->CreateBr(condBr);

        Builder->SetInsertPoint(condBr);
        Value *cond = std::any_cast<Value *>(visit(ctx->booleano()));
        Builder->CreateCondBr(cond, bodyBr, endBr);

        Builder->SetInsertPoint(bodyBr);
        visit(ctx->comando());
        Builder->CreateBr(condBr);

        Builder->SetInsertPoint(endBr);

        return {};
    }

    virtual std::any visitLoopFor(MattyParser::LoopForContext *ctx) override
    {
        string varName = ctx->ID()->getText();
        Value *startVal = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *endVal = std::any_cast<Value *>(visit(ctx->expressao(1)));

        Function *func = Builder->GetInsertBlock()->getParent();

        BasicBlock *condBr = BasicBlock::Create(*Context, "for.cond", func);
        BasicBlock *bodyBr = BasicBlock::Create(*Context, "for.body", func);
        BasicBlock *endBr = BasicBlock::Create(*Context, "for.end", func);

        AllocaInst *varAlloca = Builder->CreateAlloca(startVal->getType(), nullptr, varName);
        Builder->CreateStore(startVal, varAlloca);
        symbolTable[func->getName().str()][varName] = varAlloca;
        Builder->CreateBr(condBr);

        Builder->SetInsertPoint(condBr);
        Value *curVal = Builder->CreateLoad(startVal->getType(), varAlloca);
        Value *cmp = Builder->CreateICmpSLE(curVal, endVal);
        Builder->CreateCondBr(cmp, bodyBr, endBr);

        Builder->SetInsertPoint(bodyBr);
        visit(ctx->comando());
        Value *nextVal = Builder->CreateAdd(curVal, ConstantInt::get(startVal->getType(), 1));
        Builder->CreateStore(nextVal, varAlloca);
        Builder->CreateBr(condBr);

        Builder->SetInsertPoint(endBr);

        return {};
    }

    virtual std::any visitBloco(MattyParser::BlocoContext *ctx) override
    {
        for (MattyParser::ComandoContext *comando : ctx->comando())
            visitComando(comando);
        return {};
    }

    virtual std::any visitValor(MattyParser::ValorContext *ctx) override
    {
        if (ctx->booleano())
            return visitBooleano(ctx->booleano());
        else if (ctx->expressao())
            return visitExpressao(ctx->expressao());
        else if (ctx->STRING())
            return static_cast<Value *>(Builder->CreateGlobalStringPtr(ctx->STRING()->getText().substr(1, ctx->STRING()->getText().size() - 2)));
        else
            throw runtime_error("Valor desconhecido");

        return {};
    }

    virtual std::any visitExpressao(MattyParser::ExpressaoContext *ctx)
    {
        if (auto *decimal = dynamic_cast<MattyParser::DecimalContext *>(ctx))
            return visitDecimal(decimal);

        else if (auto *fracao = dynamic_cast<MattyParser::FracaoContext *>(ctx))
            return visitFracao(fracao);

        else if (auto *id = dynamic_cast<MattyParser::IdContext *>(ctx))
            return visitId(id);

        else if (auto *inteiro = dynamic_cast<MattyParser::InteiroContext *>(ctx))
            return visitInteiro(inteiro);

        else if (auto *leia = dynamic_cast<MattyParser::LeiaContext *>(ctx))
            return visitLeia(leia);

        else if (auto *logaritmo = dynamic_cast<MattyParser::LogaritmoContext *>(ctx))
            return visitLogaritmo(logaritmo);

        else if (auto *multiplicacaoOuDivisao = dynamic_cast<MattyParser::MultiplicacaoOuDivisaoContext *>(ctx))
            return visitMultiplicacaoOuDivisao(multiplicacaoOuDivisao);

        else if (auto *potenciacao = dynamic_cast<MattyParser::PotenciacaoContext *>(ctx))
            return visitPotenciacao(potenciacao);

        else if (auto *prioridade = dynamic_cast<MattyParser::PrioridadeDeOperacoesContext *>(ctx))
            return visitPrioridadeDeOperacoes(prioridade);

        else if (auto *raiz = dynamic_cast<MattyParser::RaizContext *>(ctx))
            return visitRaiz(raiz);

        else if (auto *regraDeTres = dynamic_cast<MattyParser::RegraDeTresContext *>(ctx))
            return visitRegraDeTres(regraDeTres);

        else if (auto *somaOuSubtracao = dynamic_cast<MattyParser::SomaOuSubtracaoContext *>(ctx))
            return visitSomaOuSubtracao(somaOuSubtracao);

        else
            throw runtime_error("Expressão desconhecida");
    }

    virtual std::any visitBooleano(MattyParser::BooleanoContext *ctx)
    {
        if (auto *boolean = dynamic_cast<MattyParser::BoolContext *>(ctx))
            return visitBool(boolean);

        else if (auto *diferente = dynamic_cast<MattyParser::DiferenteContext *>(ctx))
            return visitDiferente(diferente);

        else if (auto *eLogico = dynamic_cast<MattyParser::ELogicoContext *>(ctx))
            return visitELogico(eLogico);

        else if (auto *igual = dynamic_cast<MattyParser::IgualContext *>(ctx))
            return visitIgual(igual);

        else if (auto *maior = dynamic_cast<MattyParser::MaiorContext *>(ctx))
            return visitMaior(maior);

        else if (auto *maiorOuIgual = dynamic_cast<MattyParser::MaiorOuIgualContext *>(ctx))
            return visitMaiorOuIgual(maiorOuIgual);

        else if (auto *menor = dynamic_cast<MattyParser::MenorContext *>(ctx))
            return visitMenor(menor);

        else if (auto *menorOuIgual = dynamic_cast<MattyParser::MenorOuIgualContext *>(ctx))
            return visitMenorOuIgual(menorOuIgual);

        else if (auto *naoLogico = dynamic_cast<MattyParser::NaoLogicoContext *>(ctx))
            return visitNaoLogico(naoLogico);

        else if (auto *ouExclusivoLogico = dynamic_cast<MattyParser::OuExclusivoLogicoContext *>(ctx))
            return visitOuExclusivoLogico(ouExclusivoLogico);

        else if (auto *ouLogico = dynamic_cast<MattyParser::OuLogicoContext *>(ctx))
            return visitOuLogico(ouLogico);

        else if (auto *prioridade = dynamic_cast<MattyParser::PrioridadeDeOperacoesLogicasContext *>(ctx))
            return visitPrioridadeDeOperacoesLogicas(prioridade);

        else
            throw runtime_error("Valor booleano desconhecido");
    }

    virtual std::any visitSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        std::string op = ctx->children[1]->getText();

        if (isFraction(left) && isFraction(right))
        {
            Value *l_num_g = Builder->CreateStructGEP(FractionType, left, 0);
            Value *l_den_g = Builder->CreateStructGEP(FractionType, left, 1);
            Value *r_num_g = Builder->CreateStructGEP(FractionType, right, 0);
            Value *r_den_g = Builder->CreateStructGEP(FractionType, right, 1);
            Value *l_num = Builder->CreateLoad(Type::getInt32Ty(*Context), l_num_g);
            Value *l_den = Builder->CreateLoad(Type::getInt32Ty(*Context), l_den_g);
            Value *r_num = Builder->CreateLoad(Type::getInt32Ty(*Context), r_num_g);
            Value *r_den = Builder->CreateLoad(Type::getInt32Ty(*Context), r_den_g);

            if (op == "+")
            {
                Value *n1 = Builder->CreateMul(l_num, r_den);
                Value *n2 = Builder->CreateMul(r_num, l_den);
                Value *num = Builder->CreateAdd(n1, n2);
                Value *den = Builder->CreateMul(l_den, r_den);
                return makeFraction(num, den);
            }
            else if (op == "-")
            {
                Value *n1 = Builder->CreateMul(l_num, r_den);
                Value *n2 = Builder->CreateMul(r_num, l_den);
                Value *num = Builder->CreateSub(n1, n2);
                Value *den = Builder->CreateMul(l_den, r_den);
                return makeFraction(num, den);
            }
        }

        if (isFraction(left) && right->getType()->isIntegerTy())
        {
            Value *l_num_g = Builder->CreateStructGEP(FractionType, left, 0);
            Value *l_den_g = Builder->CreateStructGEP(FractionType, left, 1);
            Value *l_num = Builder->CreateLoad(Type::getInt32Ty(*Context), l_num_g);
            Value *l_den = Builder->CreateLoad(Type::getInt32Ty(*Context), l_den_g);
            Value *r_num = Builder->CreateIntCast(right, Type::getInt32Ty(*Context), true);
            if (op == "+")
            {
                Value *num = Builder->CreateAdd(l_num, Builder->CreateMul(r_num, l_den));
                return makeFraction(num, l_den);
            }
            else if (op == "-")
            {
                Value *num = Builder->CreateSub(l_num, Builder->CreateMul(r_num, l_den));
                return makeFraction(num, l_den);
            }
        }

        if (left->getType()->isIntegerTy() && isFraction(right))
        {
            Value *r_num_g = Builder->CreateStructGEP(FractionType, right, 0);
            Value *r_den_g = Builder->CreateStructGEP(FractionType, right, 1);
            Value *r_num = Builder->CreateLoad(Type::getInt32Ty(*Context), r_num_g);
            Value *r_den = Builder->CreateLoad(Type::getInt32Ty(*Context), r_den_g);
            Value *l_num = Builder->CreateIntCast(left, Type::getInt32Ty(*Context), true);
            if (op == "+")
            {
                Value *num = Builder->CreateAdd(Builder->CreateMul(l_num, r_den), r_num);
                return makeFraction(num, r_den);
            }
            else if (op == "-")
            {
                Value *num = Builder->CreateSub(Builder->CreateMul(l_num, r_den), r_num);
                return makeFraction(num, r_den);
            }
        }

        bool useFloatingPoint = left->getType()->isFloatingPointTy() || right->getType()->isFloatingPointTy() || isFraction(left) || isFraction(right);

        if (op == "+")
        {
            if (useFloatingPoint)
                return Builder->CreateFAdd(convertToDecimal(left), convertToDecimal(right));

            if (left->getType()->isIntegerTy() && right->getType()->isIntegerTy())
                return Builder->CreateAdd(left, right);

            throw runtime_error("Tipos incompatíveis para adição");
        }

        if (op == "-")
        {
            if (useFloatingPoint)
                return Builder->CreateFSub(convertToDecimal(left), convertToDecimal(right));

            if (left->getType()->isIntegerTy() && right->getType()->isIntegerTy())
                return Builder->CreateSub(left, right);

            throw runtime_error("Tipos incompatíveis para subtração");
        }

        throw runtime_error("Operador desconhecido em soma/subtração");
    }

    virtual std::any visitPrioridadeDeOperacoesLogicas(MattyParser::PrioridadeDeOperacoesLogicasContext *ctx) override
    {
        return visitBooleano(ctx->booleano());
    }

    virtual std::any visitOuLogico(MattyParser::OuLogicoContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->booleano(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->booleano(1)));
        return Builder->CreateOr(left, right);
    }

    virtual std::any visitOuExclusivoLogico(MattyParser::OuExclusivoLogicoContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->booleano(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->booleano(1)));
        return Builder->CreateXor(left, right);
    }

    virtual std::any visitNaoLogico(MattyParser::NaoLogicoContext *ctx) override
    {
        Value *operand = std::any_cast<Value *>(visit(ctx->booleano()));
        return Builder->CreateNot(operand);
    }

    virtual std::any visitMenorOuIgual(MattyParser::MenorOuIgualContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        return Builder->CreateICmpSLE(left, right);
    }

    virtual std::any visitMenor(MattyParser::MenorContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        return Builder->CreateICmpSLT(left, right);
    }

    virtual std::any visitMaiorOuIgual(MattyParser::MaiorOuIgualContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        return Builder->CreateICmpSGE(left, right);
    }

    virtual std::any visitMaior(MattyParser::MaiorContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        return Builder->CreateICmpSGT(left, right);
    }

    virtual std::any visitIgual(MattyParser::IgualContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        return Builder->CreateICmpEQ(left, right);
    }

    virtual std::any visitELogico(MattyParser::ELogicoContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->booleano(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->booleano(1)));
        return Builder->CreateAnd(left, right);
    }

    virtual std::any visitDiferente(MattyParser::DiferenteContext *ctx) override
    {
        Value *left = std::any_cast<Value *>(visit(ctx->expressao(0)));
        Value *right = std::any_cast<Value *>(visit(ctx->expressao(1)));
        return Builder->CreateICmpNE(left, right);
    }

    virtual std::any visitBool(MattyParser::BoolContext *ctx) override
    {
        return static_cast<Value *>(ctx->BOOLEANO()->getText() == "true" ? ConstantInt::getTrue(*Context) : ConstantInt::getFalse(*Context));
    }

    virtual std::any visitRegraDeTres(MattyParser::RegraDeTresContext *ctx) override
    {
        string text = ctx->getText();
        if (count(text.begin(), text.end(), 'x') != 1)
            throw runtime_error("Regra de três deve conter exatamente uma incógnita 'x'");
        bool isDirectlyProportional = ctx->children[4]->getText() == "-";
        string exp1 = ctx->children[1]->getText();
        string exp2 = ctx->children[3]->getText();
        string exp3 = ctx->children[5]->getText();
        string exp4 = ctx->children[7]->getText();

        if (exp1 == "x")
        {
            Value *b = any_cast<Value *>(visit(ctx->expressao(1)));
            Value *c = any_cast<Value *>(visit(ctx->expressao(2)));
            Value *d = any_cast<Value *>(visit(ctx->expressao(3)));
            Value *numeratorValue = isDirectlyProportional ? c : d;
            if (isDirectlyProportional)
            {
                Value *numerator = Builder->CreateMul(b, c);
                return Builder->CreateFDiv(numerator, d);
            }
            else
            {
                Value *numerator = Builder->CreateMul(b, d);
                return Builder->CreateFDiv(numerator, c);
            }
        }
        else if (exp2 == "x")
        {
            Value *a = any_cast<Value *>(visit(ctx->expressao(0)));
            Value *c = any_cast<Value *>(visit(ctx->expressao(2)));
            Value *d = any_cast<Value *>(visit(ctx->expressao(3)));
            bool useFloatingPoint = a->getType()->isFloatingPointTy() || c->getType()->isFloatingPointTy() || d->getType()->isFloatingPointTy();
            if (isDirectlyProportional)
            {
                Value *numerator = Builder->CreateMul(a, d);
                return Builder->CreateFDiv(numerator, c);
            }
            else
            {
                Value *numerator = Builder->CreateMul(a, c);
                return Builder->CreateFDiv(numerator, d);
            }
        }
        else if (exp3 == "x")
        {
            Value *a = any_cast<Value *>(visit(ctx->expressao(0)));
            Value *b = any_cast<Value *>(visit(ctx->expressao(1)));
            Value *d = any_cast<Value *>(visit(ctx->expressao(3)));
            bool useFloatingPoint = a->getType()->isFloatingPointTy() || b->getType()->isFloatingPointTy() || d->getType()->isFloatingPointTy();
            if (isDirectlyProportional)
            {
                Value *numerator = Builder->CreateMul(a, d);
                return useFloatingPoint ? Builder->CreateFDiv(numerator, b) : Builder->CreateSDiv(numerator, b);
            }
            else
            {
                Value *numerator = Builder->CreateMul(b, d);
                return useFloatingPoint ? Builder->CreateFDiv(numerator, a) : Builder->CreateSDiv(numerator, a);
            }
        }
        else
        {
            Value *a = any_cast<Value *>(visit(ctx->expressao(0)));
            Value *b = any_cast<Value *>(visit(ctx->expressao(1)));
            Value *c = any_cast<Value *>(visit(ctx->expressao(2)));
            bool useFloatingPoint = a->getType()->isFloatingPointTy() || b->getType()->isFloatingPointTy() || c->getType()->isFloatingPointTy();
            if (isDirectlyProportional)
            {
                Value *numerator = Builder->CreateMul(b, c);
                return useFloatingPoint ? Builder->CreateFDiv(numerator, a) : Builder->CreateSDiv(numerator, a);
            }
            else
            {
                Value *numerator = Builder->CreateMul(a, c);
                return useFloatingPoint ? Builder->CreateFDiv(numerator, b) : Builder->CreateSDiv(numerator, b);
            }
        }

        throw runtime_error("Regra de três inválida");
    }

    virtual std::any visitRaiz(MattyParser::RaizContext *ctx) override
    {
        Value *index = convertToDecimal(ctx->expressao(0) ? std::any_cast<Value *>(visit(ctx->expressao(0))) : ConstantInt::get(Type::getInt32Ty(*Context), 2));
        Value *radicand = convertToDecimal(std::any_cast<Value *>(visit(ctx->expressao(1))));

        Value *one = ConstantFP::get(Type::getDoubleTy(*Context), 1.0);
        Value *exponent = Builder->CreateFDiv(one, index);
        return Builder->CreateCall(Intrinsic::getDeclaration(Executable.get(), Intrinsic::pow, {Type::getDoubleTy(*Context)}), {radicand, exponent});
    }

    virtual std::any visitPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext *ctx) override
    {
        return visit(ctx->expressao());
    }

    virtual std::any visitPotenciacao(MattyParser::PotenciacaoContext *ctx) override
    {
        Value *base = convertToDecimal(any_cast<Value *>(visit(ctx->expressao(0))));
        Value *exponent = convertToDecimal(any_cast<Value *>(visit(ctx->expressao(1))));
        return Builder->CreateCall(Intrinsic::getDeclaration(Executable.get(), Intrinsic::pow, {Type::getDoubleTy(*Context)}), {base, exponent});
    }

    virtual std::any visitMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext *ctx) override
    {
        string op = ctx->children[1]->getText();
        Value *leftRaw = any_cast<Value *>(visit(ctx->expressao(0)));
        Value *rightRaw = any_cast<Value *>(visit(ctx->expressao(1)));

        if (isFraction(leftRaw) && isFraction(rightRaw))
        {
            Value *l_num_g = Builder->CreateStructGEP(FractionType, leftRaw, 0);
            Value *l_den_g = Builder->CreateStructGEP(FractionType, leftRaw, 1);
            Value *r_num_g = Builder->CreateStructGEP(FractionType, rightRaw, 0);
            Value *r_den_g = Builder->CreateStructGEP(FractionType, rightRaw, 1);
            Value *l_num = Builder->CreateLoad(Type::getInt32Ty(*Context), l_num_g);
            Value *l_den = Builder->CreateLoad(Type::getInt32Ty(*Context), l_den_g);
            Value *r_num = Builder->CreateLoad(Type::getInt32Ty(*Context), r_num_g);
            Value *r_den = Builder->CreateLoad(Type::getInt32Ty(*Context), r_den_g);

            if (op == "*")
            {
                Value *num = Builder->CreateMul(l_num, r_num);
                Value *den = Builder->CreateMul(l_den, r_den);
                return makeFraction(num, den);
            }
            else if (op == "/")
            {
                Value *num = Builder->CreateMul(l_num, r_den);
                Value *den = Builder->CreateMul(l_den, r_num);
                return makeFraction(num, den);
            }
        }

        if (isFraction(leftRaw) && rightRaw->getType()->isIntegerTy())
        {
            Value *l_num_g = Builder->CreateStructGEP(FractionType, leftRaw, 0);
            Value *l_den_g = Builder->CreateStructGEP(FractionType, leftRaw, 1);
            Value *l_num = Builder->CreateLoad(Type::getInt32Ty(*Context), l_num_g);
            Value *l_den = Builder->CreateLoad(Type::getInt32Ty(*Context), l_den_g);
            Value *r_num = Builder->CreateIntCast(rightRaw, Type::getInt32Ty(*Context), true);
            if (op == "*")
                return makeFraction(Builder->CreateMul(l_num, r_num), l_den);
            else if (op == "/")
                return makeFraction(l_num, Builder->CreateMul(l_den, r_num));
        }

        if (leftRaw->getType()->isIntegerTy() && isFraction(rightRaw))
        {
            Value *r_num_g = Builder->CreateStructGEP(FractionType, rightRaw, 0);
            Value *r_den_g = Builder->CreateStructGEP(FractionType, rightRaw, 1);
            Value *r_num = Builder->CreateLoad(Type::getInt32Ty(*Context), r_num_g);
            Value *r_den = Builder->CreateLoad(Type::getInt32Ty(*Context), r_den_g);
            Value *l_num = Builder->CreateIntCast(leftRaw, Type::getInt32Ty(*Context), true);
            if (op == "*")
                return makeFraction(Builder->CreateMul(l_num, r_num), r_den);
            else if (op == "/")
                return makeFraction(Builder->CreateMul(l_num, r_den), r_num);
        }

        Value *left = convertToDecimal(leftRaw);
        Value *right = convertToDecimal(rightRaw);
        bool useFloatingPoint = left->getType()->isFloatingPointTy() || right->getType()->isFloatingPointTy();
        if (op == "*")
        {
            return useFloatingPoint ? Builder->CreateFMul(left, right) : Builder->CreateMul(left, right);
        }
        else if (op == "/")
        {
            return Builder->CreateFDiv(left, right);
        }
        else if (op == "//")
        {
            return Builder->CreateSDiv(Builder->CreateFPToSI(left, Type::getInt32Ty(*Context)), Builder->CreateFPToSI(right, Type::getInt32Ty(*Context)));
        }
        else
        {
            throw runtime_error("Operador desconhecido em multiplicação/divisão");
        }
    }

    virtual std::any visitLogaritmo(MattyParser::LogaritmoContext *ctx) override
    {
        Value *value = convertToDecimal(any_cast<Value *>(visit(ctx->expressao(0))));
        Value *base = ctx->expressao(1) ? convertToDecimal(any_cast<Value *>(visit(ctx->expressao(1)))) : ConstantFP::get(Type::getDoubleTy(*Context), 10.0);
        Value *lnValue = Builder->CreateCall(Intrinsic::getDeclaration(Executable.get(), Intrinsic::log, {Type::getDoubleTy(*Context)}), {value});
        Value *lnBase = Builder->CreateCall(Intrinsic::getDeclaration(Executable.get(), Intrinsic::log, {Type::getDoubleTy(*Context)}), {base});
        return Builder->CreateFDiv(lnValue, lnBase);
    }

    virtual std::any visitLeia(MattyParser::LeiaContext *ctx) override
    {
        Type *varType = Type::getInt32Ty(*Context);
        AllocaInst *alloca = Builder->CreateAlloca(varType, nullptr, "leia_tmp");
        Builder->CreateCall(Input, {dScanf, Builder->CreateBitCast(alloca, PointerType::get(Type::getInt8Ty(*Context), 0))});
        return Builder->CreateLoad(varType, alloca);
    }

    virtual std::any visitInteiro(MattyParser::InteiroContext *ctx) override
    {
        return static_cast<Value *>(ConstantInt::get(Type::getInt32Ty(*Context), stoi(ctx->getText())));
    }

    virtual std::any visitId(MattyParser::IdContext *ctx) override
    {
        string var = ctx->ID()->getText();
        string funcName = currentFunction->getName().str();
        if (symbolTable[funcName].find(var) == symbolTable[funcName].end())
            throw runtime_error("Variável '" + var + "' não declarada");

        return static_cast<Value *>(Builder->CreateLoad(symbolTable[funcName][var]->getAllocatedType(), symbolTable[funcName][var]));
    }

    virtual std::any visitFracao(MattyParser::FracaoContext *ctx) override
    {
        string text = ctx->FRACTION()->getText();
        size_t separator = text.find("///");
        if (separator == string::npos)
            throw runtime_error("Fração inválida");

        int num = stoi(text.substr(0, separator));
        int den = stoi(text.substr(separator + 3));
        if (den == 0)
            throw runtime_error("Divisão por zero em FRACTION");
        Value *numV = ConstantInt::get(Type::getInt32Ty(*Context), num);
        Value *denV = ConstantInt::get(Type::getInt32Ty(*Context), den);
        return static_cast<Value *>(makeFraction(numV, denV));
    }

    virtual std::any visitDecimal(MattyParser::DecimalContext *ctx) override
    {
        return static_cast<Value *>(ConstantFP::get(Type::getDoubleTy(*Context), stod(ctx->getText())));
    }

    virtual std::any visitSkip(MattyParser::SkipContext *ctx) override
    {
        return {};
    }
};