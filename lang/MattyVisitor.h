
// Generated from ./lang/Matty.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MattyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MattyParser.
 */
class  MattyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MattyParser.
   */
    virtual std::any visitPrograma(MattyParser::ProgramaContext *context) = 0;

    virtual std::any visitSeqComando(MattyParser::SeqComandoContext *context) = 0;

    virtual std::any visitAtribuicao(MattyParser::AtribuicaoContext *context) = 0;

    virtual std::any visitLoop(MattyParser::LoopContext *context) = 0;

    virtual std::any visitRepita(MattyParser::RepitaContext *context) = 0;

    virtual std::any visitEscolha(MattyParser::EscolhaContext *context) = 0;

    virtual std::any visitSkip(MattyParser::SkipContext *context) = 0;

    virtual std::any visitSe(MattyParser::SeContext *context) = 0;

    virtual std::any visitExiba(MattyParser::ExibaContext *context) = 0;

    virtual std::any visitBloco(MattyParser::BlocoContext *context) = 0;

    virtual std::any visitValor(MattyParser::ValorContext *context) = 0;

    virtual std::any visitSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext *context) = 0;

    virtual std::any visitLeia(MattyParser::LeiaContext *context) = 0;

    virtual std::any visitLogaritmo(MattyParser::LogaritmoContext *context) = 0;

    virtual std::any visitInteiro(MattyParser::InteiroContext *context) = 0;

    virtual std::any visitRaiz(MattyParser::RaizContext *context) = 0;

    virtual std::any visitPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext *context) = 0;

    virtual std::any visitPotenciacao(MattyParser::PotenciacaoContext *context) = 0;

    virtual std::any visitMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext *context) = 0;

    virtual std::any visitId(MattyParser::IdContext *context) = 0;

    virtual std::any visitRegraDeTres(MattyParser::RegraDeTresContext *context) = 0;

    virtual std::any visitFracao(MattyParser::FracaoContext *context) = 0;

    virtual std::any visitEquacao(MattyParser::EquacaoContext *context) = 0;

    virtual std::any visitNao_logico(MattyParser::Nao_logicoContext *context) = 0;

    virtual std::any visitBool(MattyParser::BoolContext *context) = 0;

    virtual std::any visitMaior_ou_igual(MattyParser::Maior_ou_igualContext *context) = 0;

    virtual std::any visitMaior(MattyParser::MaiorContext *context) = 0;

    virtual std::any visitE_logico(MattyParser::E_logicoContext *context) = 0;

    virtual std::any visitMenor(MattyParser::MenorContext *context) = 0;

    virtual std::any visitMenor_ou_igual(MattyParser::Menor_ou_igualContext *context) = 0;

    virtual std::any visitOu_logico(MattyParser::Ou_logicoContext *context) = 0;

    virtual std::any visitDiferente(MattyParser::DiferenteContext *context) = 0;

    virtual std::any visitPrioridade_de_operacoes_logicas(MattyParser::Prioridade_de_operacoes_logicasContext *context) = 0;

    virtual std::any visitIgual(MattyParser::IgualContext *context) = 0;

    virtual std::any visitOu_exclusivo_logico(MattyParser::Ou_exclusivo_logicoContext *context) = 0;


};

