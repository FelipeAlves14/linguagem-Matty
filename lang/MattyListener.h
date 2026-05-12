
// Generated from ./lang/Matty.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MattyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MattyParser.
 */
class  MattyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrograma(MattyParser::ProgramaContext *ctx) = 0;
  virtual void exitPrograma(MattyParser::ProgramaContext *ctx) = 0;

  virtual void enterSeqComando(MattyParser::SeqComandoContext *ctx) = 0;
  virtual void exitSeqComando(MattyParser::SeqComandoContext *ctx) = 0;

  virtual void enterAtribuicao(MattyParser::AtribuicaoContext *ctx) = 0;
  virtual void exitAtribuicao(MattyParser::AtribuicaoContext *ctx) = 0;

  virtual void enterLoop(MattyParser::LoopContext *ctx) = 0;
  virtual void exitLoop(MattyParser::LoopContext *ctx) = 0;

  virtual void enterRepita(MattyParser::RepitaContext *ctx) = 0;
  virtual void exitRepita(MattyParser::RepitaContext *ctx) = 0;

  virtual void enterEscolha(MattyParser::EscolhaContext *ctx) = 0;
  virtual void exitEscolha(MattyParser::EscolhaContext *ctx) = 0;

  virtual void enterSkip(MattyParser::SkipContext *ctx) = 0;
  virtual void exitSkip(MattyParser::SkipContext *ctx) = 0;

  virtual void enterSe(MattyParser::SeContext *ctx) = 0;
  virtual void exitSe(MattyParser::SeContext *ctx) = 0;

  virtual void enterExiba(MattyParser::ExibaContext *ctx) = 0;
  virtual void exitExiba(MattyParser::ExibaContext *ctx) = 0;

  virtual void enterBloco(MattyParser::BlocoContext *ctx) = 0;
  virtual void exitBloco(MattyParser::BlocoContext *ctx) = 0;

  virtual void enterValor(MattyParser::ValorContext *ctx) = 0;
  virtual void exitValor(MattyParser::ValorContext *ctx) = 0;

  virtual void enterSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext *ctx) = 0;
  virtual void exitSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext *ctx) = 0;

  virtual void enterLeia(MattyParser::LeiaContext *ctx) = 0;
  virtual void exitLeia(MattyParser::LeiaContext *ctx) = 0;

  virtual void enterLogaritmo(MattyParser::LogaritmoContext *ctx) = 0;
  virtual void exitLogaritmo(MattyParser::LogaritmoContext *ctx) = 0;

  virtual void enterInteiro(MattyParser::InteiroContext *ctx) = 0;
  virtual void exitInteiro(MattyParser::InteiroContext *ctx) = 0;

  virtual void enterRaiz(MattyParser::RaizContext *ctx) = 0;
  virtual void exitRaiz(MattyParser::RaizContext *ctx) = 0;

  virtual void enterPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext *ctx) = 0;
  virtual void exitPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext *ctx) = 0;

  virtual void enterPotenciacao(MattyParser::PotenciacaoContext *ctx) = 0;
  virtual void exitPotenciacao(MattyParser::PotenciacaoContext *ctx) = 0;

  virtual void enterMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext *ctx) = 0;
  virtual void exitMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext *ctx) = 0;

  virtual void enterId(MattyParser::IdContext *ctx) = 0;
  virtual void exitId(MattyParser::IdContext *ctx) = 0;

  virtual void enterRegraDeTres(MattyParser::RegraDeTresContext *ctx) = 0;
  virtual void exitRegraDeTres(MattyParser::RegraDeTresContext *ctx) = 0;

  virtual void enterFracao(MattyParser::FracaoContext *ctx) = 0;
  virtual void exitFracao(MattyParser::FracaoContext *ctx) = 0;

  virtual void enterEquacao(MattyParser::EquacaoContext *ctx) = 0;
  virtual void exitEquacao(MattyParser::EquacaoContext *ctx) = 0;

  virtual void enterNao_logico(MattyParser::Nao_logicoContext *ctx) = 0;
  virtual void exitNao_logico(MattyParser::Nao_logicoContext *ctx) = 0;

  virtual void enterBool(MattyParser::BoolContext *ctx) = 0;
  virtual void exitBool(MattyParser::BoolContext *ctx) = 0;

  virtual void enterMaior_ou_igual(MattyParser::Maior_ou_igualContext *ctx) = 0;
  virtual void exitMaior_ou_igual(MattyParser::Maior_ou_igualContext *ctx) = 0;

  virtual void enterMaior(MattyParser::MaiorContext *ctx) = 0;
  virtual void exitMaior(MattyParser::MaiorContext *ctx) = 0;

  virtual void enterE_logico(MattyParser::E_logicoContext *ctx) = 0;
  virtual void exitE_logico(MattyParser::E_logicoContext *ctx) = 0;

  virtual void enterMenor(MattyParser::MenorContext *ctx) = 0;
  virtual void exitMenor(MattyParser::MenorContext *ctx) = 0;

  virtual void enterMenor_ou_igual(MattyParser::Menor_ou_igualContext *ctx) = 0;
  virtual void exitMenor_ou_igual(MattyParser::Menor_ou_igualContext *ctx) = 0;

  virtual void enterOu_logico(MattyParser::Ou_logicoContext *ctx) = 0;
  virtual void exitOu_logico(MattyParser::Ou_logicoContext *ctx) = 0;

  virtual void enterDiferente(MattyParser::DiferenteContext *ctx) = 0;
  virtual void exitDiferente(MattyParser::DiferenteContext *ctx) = 0;

  virtual void enterPrioridade_de_operacoes_logicas(MattyParser::Prioridade_de_operacoes_logicasContext *ctx) = 0;
  virtual void exitPrioridade_de_operacoes_logicas(MattyParser::Prioridade_de_operacoes_logicasContext *ctx) = 0;

  virtual void enterIgual(MattyParser::IgualContext *ctx) = 0;
  virtual void exitIgual(MattyParser::IgualContext *ctx) = 0;

  virtual void enterOu_exclusivo_logico(MattyParser::Ou_exclusivo_logicoContext *ctx) = 0;
  virtual void exitOu_exclusivo_logico(MattyParser::Ou_exclusivo_logicoContext *ctx) = 0;


};

