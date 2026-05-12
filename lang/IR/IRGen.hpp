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
    Value *sPrint;
    Value *sScanf;

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

        FunctionCallee Print = Executable->getOrInsertFunction("printf",
                                                               FunctionType::get(IntegerType::getInt32Ty(*Context), {PointerType::get(Type::getInt8Ty(*Context), 0)}, true));

        FunctionCallee Input = Executable->getOrInsertFunction("scanf",
                                                               FunctionType::get(IntegerType::getInt32Ty(*Context), {PointerType::get(Type::getInt8Ty(*Context), 0)}, true));

        visitPrograma(tree);

        Builder->CreateRet(ConstantInt::get(Type::getInt32Ty(*Context), 0));

        verifyFunction(*currentFunction);
        Executable->print(outs(), nullptr);

        error_code errorCode;
        raw_fd_ostream out("executavel.ll", errorCode);
        Executable->print(out, nullptr);
        out.flush();
    }

    string getExecutable()
    {
        string irString;
        raw_string_ostream rso(irString);
        Executable->print(rso, nullptr);
        return rso.str();
    }

    virtual std::any visitPrograma(MattyParser::ProgramaContext *ctx) override
    {
        for (MattyParser::SeqComandoContext *comando : ctx->seqComando())
            visitSeqComando(comando);
    }

    virtual std::any visitSeqComando(MattyParser::SeqComandoContext *ctx) override
    {
        if (auto *atribuicao = dynamic_cast<MattyParser::AtribuicaoContext *>(ctx))
            return visitAtribuicao(atribuicao);
        else if (auto *escolha = dynamic_cast<MattyParser::EscolhaContext *>(ctx))
            return visitEscolha(escolha);
        else if (auto *se = dynamic_cast<MattyParser::SeContext *>(ctx))
            return visitSe(se);
        else if (auto *exiba = dynamic_cast<MattyParser::ExibaContext *>(ctx))
            return visitExiba(exiba);
        else if (auto *repita = dynamic_cast<MattyParser::RepitaContext *>(ctx))
            return visitRepita(repita);
        else if (auto *loop = dynamic_cast<MattyParser::LoopContext *>(ctx))
            return visitLoop(loop);
        else if (auto *bloco = dynamic_cast<MattyParser::BlocoContext *>(ctx))
            return visitBloco(bloco);
        else
            throw runtime_error("Comando desconhecido");
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
    }
    virtual std::any visitSe(MattyParser::SeContext *ctx) override
    {
        Value *cond = std::any_cast<Value *>(visit(ctx->booleano(0)));
        Function *func = Builder->GetInsertBlock()->getParent();
        BasicBlock *elseBlock = BasicBlock::Create(*Context, "else", func);
        BasicBlock *endBlock = BasicBlock::Create(*Context, "end", func);

        Builder->CreateCondBr(cond, elseBlock, endBlock);
        Builder->SetInsertPoint(elseBlock);
        visit(ctx->comando(0));

        for (size_t i = 1; i < ctx->booleano().size(); i++)
        {
            Value *elifCond = std::any_cast<Value *>(visit(ctx->booleano(i)));
            BasicBlock *elifElseBlock = BasicBlock::Create(*Context, "elif_else" + to_string(i), func);
            BasicBlock *elifEndBlock = BasicBlock::Create(*Context, "elif_end" + to_string(i), func);

            Builder->CreateCondBr(elifCond, elifElseBlock, elifEndBlock);
            Builder->SetInsertPoint(elifElseBlock);
            visit(ctx->comando(i));
            Builder->CreateBr(endBlock);

            Builder->SetInsertPoint(elifEndBlock);
        }

        if (ctx->comando().size() > ctx->booleano().size())
            visit(ctx->comando(ctx->comando().size() - 1));

        Builder->CreateBr(endBlock);
        Builder->SetInsertPoint(endBlock);
    };
    virtual std::any visitExiba(MattyParser::ExibaContext *ctx) override;
    virtual std::any visitRepita(MattyParser::RepitaContext *ctx) override;
    virtual std::any visitLoop(MattyParser::LoopContext *ctx) override;
    virtual std::any visitBloco(MattyParser::BlocoContext *ctx) override;
};