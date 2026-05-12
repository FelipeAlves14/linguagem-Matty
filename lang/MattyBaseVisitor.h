
// Generated from ./lang/Matty.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MattyVisitor.h"


/**
 * This class provides an empty implementation of MattyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MattyBaseVisitor : public MattyVisitor {
public:

  virtual std::any visitPrograma(MattyParser::ProgramaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSeqComando(MattyParser::SeqComandoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribuicao(MattyParser::AtribuicaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(MattyParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepita(MattyParser::RepitaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEscolha(MattyParser::EscolhaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkip(MattyParser::SkipContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSe(MattyParser::SeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExiba(MattyParser::ExibaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBloco(MattyParser::BlocoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValor(MattyParser::ValorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeia(MattyParser::LeiaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogaritmo(MattyParser::LogaritmoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteiro(MattyParser::InteiroContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaiz(MattyParser::RaizContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPotenciacao(MattyParser::PotenciacaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(MattyParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegraDeTres(MattyParser::RegraDeTresContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFracao(MattyParser::FracaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquacao(MattyParser::EquacaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNao_logico(MattyParser::Nao_logicoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBool(MattyParser::BoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaior_ou_igual(MattyParser::Maior_ou_igualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaior(MattyParser::MaiorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitE_logico(MattyParser::E_logicoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMenor(MattyParser::MenorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMenor_ou_igual(MattyParser::Menor_ou_igualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOu_logico(MattyParser::Ou_logicoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiferente(MattyParser::DiferenteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrioridade_de_operacoes_logicas(MattyParser::Prioridade_de_operacoes_logicasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIgual(MattyParser::IgualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOu_exclusivo_logico(MattyParser::Ou_exclusivo_logicoContext *ctx) override {
    return visitChildren(ctx);
  }


};

