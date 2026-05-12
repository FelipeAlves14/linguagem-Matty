
// Generated from ./lang/Matty.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MattyListener.h"


/**
 * This class provides an empty implementation of MattyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MattyBaseListener : public MattyListener {
public:

  virtual void enterPrograma(MattyParser::ProgramaContext * /*ctx*/) override { }
  virtual void exitPrograma(MattyParser::ProgramaContext * /*ctx*/) override { }

  virtual void enterSeqComando(MattyParser::SeqComandoContext * /*ctx*/) override { }
  virtual void exitSeqComando(MattyParser::SeqComandoContext * /*ctx*/) override { }

  virtual void enterAtribuicao(MattyParser::AtribuicaoContext * /*ctx*/) override { }
  virtual void exitAtribuicao(MattyParser::AtribuicaoContext * /*ctx*/) override { }

  virtual void enterLoop(MattyParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(MattyParser::LoopContext * /*ctx*/) override { }

  virtual void enterRepita(MattyParser::RepitaContext * /*ctx*/) override { }
  virtual void exitRepita(MattyParser::RepitaContext * /*ctx*/) override { }

  virtual void enterEscolha(MattyParser::EscolhaContext * /*ctx*/) override { }
  virtual void exitEscolha(MattyParser::EscolhaContext * /*ctx*/) override { }

  virtual void enterSkip(MattyParser::SkipContext * /*ctx*/) override { }
  virtual void exitSkip(MattyParser::SkipContext * /*ctx*/) override { }

  virtual void enterSe(MattyParser::SeContext * /*ctx*/) override { }
  virtual void exitSe(MattyParser::SeContext * /*ctx*/) override { }

  virtual void enterExiba(MattyParser::ExibaContext * /*ctx*/) override { }
  virtual void exitExiba(MattyParser::ExibaContext * /*ctx*/) override { }

  virtual void enterBloco(MattyParser::BlocoContext * /*ctx*/) override { }
  virtual void exitBloco(MattyParser::BlocoContext * /*ctx*/) override { }

  virtual void enterValor(MattyParser::ValorContext * /*ctx*/) override { }
  virtual void exitValor(MattyParser::ValorContext * /*ctx*/) override { }

  virtual void enterSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext * /*ctx*/) override { }
  virtual void exitSomaOuSubtracao(MattyParser::SomaOuSubtracaoContext * /*ctx*/) override { }

  virtual void enterLeia(MattyParser::LeiaContext * /*ctx*/) override { }
  virtual void exitLeia(MattyParser::LeiaContext * /*ctx*/) override { }

  virtual void enterLogaritmo(MattyParser::LogaritmoContext * /*ctx*/) override { }
  virtual void exitLogaritmo(MattyParser::LogaritmoContext * /*ctx*/) override { }

  virtual void enterInteiro(MattyParser::InteiroContext * /*ctx*/) override { }
  virtual void exitInteiro(MattyParser::InteiroContext * /*ctx*/) override { }

  virtual void enterRaiz(MattyParser::RaizContext * /*ctx*/) override { }
  virtual void exitRaiz(MattyParser::RaizContext * /*ctx*/) override { }

  virtual void enterPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext * /*ctx*/) override { }
  virtual void exitPrioridadeDeOperacoes(MattyParser::PrioridadeDeOperacoesContext * /*ctx*/) override { }

  virtual void enterPotenciacao(MattyParser::PotenciacaoContext * /*ctx*/) override { }
  virtual void exitPotenciacao(MattyParser::PotenciacaoContext * /*ctx*/) override { }

  virtual void enterMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext * /*ctx*/) override { }
  virtual void exitMultiplicacaoOuDivisao(MattyParser::MultiplicacaoOuDivisaoContext * /*ctx*/) override { }

  virtual void enterId(MattyParser::IdContext * /*ctx*/) override { }
  virtual void exitId(MattyParser::IdContext * /*ctx*/) override { }

  virtual void enterRegraDeTres(MattyParser::RegraDeTresContext * /*ctx*/) override { }
  virtual void exitRegraDeTres(MattyParser::RegraDeTresContext * /*ctx*/) override { }

  virtual void enterFracao(MattyParser::FracaoContext * /*ctx*/) override { }
  virtual void exitFracao(MattyParser::FracaoContext * /*ctx*/) override { }

  virtual void enterEquacao(MattyParser::EquacaoContext * /*ctx*/) override { }
  virtual void exitEquacao(MattyParser::EquacaoContext * /*ctx*/) override { }

  virtual void enterNao_logico(MattyParser::Nao_logicoContext * /*ctx*/) override { }
  virtual void exitNao_logico(MattyParser::Nao_logicoContext * /*ctx*/) override { }

  virtual void enterBool(MattyParser::BoolContext * /*ctx*/) override { }
  virtual void exitBool(MattyParser::BoolContext * /*ctx*/) override { }

  virtual void enterMaior_ou_igual(MattyParser::Maior_ou_igualContext * /*ctx*/) override { }
  virtual void exitMaior_ou_igual(MattyParser::Maior_ou_igualContext * /*ctx*/) override { }

  virtual void enterMaior(MattyParser::MaiorContext * /*ctx*/) override { }
  virtual void exitMaior(MattyParser::MaiorContext * /*ctx*/) override { }

  virtual void enterE_logico(MattyParser::E_logicoContext * /*ctx*/) override { }
  virtual void exitE_logico(MattyParser::E_logicoContext * /*ctx*/) override { }

  virtual void enterMenor(MattyParser::MenorContext * /*ctx*/) override { }
  virtual void exitMenor(MattyParser::MenorContext * /*ctx*/) override { }

  virtual void enterMenor_ou_igual(MattyParser::Menor_ou_igualContext * /*ctx*/) override { }
  virtual void exitMenor_ou_igual(MattyParser::Menor_ou_igualContext * /*ctx*/) override { }

  virtual void enterOu_logico(MattyParser::Ou_logicoContext * /*ctx*/) override { }
  virtual void exitOu_logico(MattyParser::Ou_logicoContext * /*ctx*/) override { }

  virtual void enterDiferente(MattyParser::DiferenteContext * /*ctx*/) override { }
  virtual void exitDiferente(MattyParser::DiferenteContext * /*ctx*/) override { }

  virtual void enterPrioridade_de_operacoes_logicas(MattyParser::Prioridade_de_operacoes_logicasContext * /*ctx*/) override { }
  virtual void exitPrioridade_de_operacoes_logicas(MattyParser::Prioridade_de_operacoes_logicasContext * /*ctx*/) override { }

  virtual void enterIgual(MattyParser::IgualContext * /*ctx*/) override { }
  virtual void exitIgual(MattyParser::IgualContext * /*ctx*/) override { }

  virtual void enterOu_exclusivo_logico(MattyParser::Ou_exclusivo_logicoContext * /*ctx*/) override { }
  virtual void exitOu_exclusivo_logico(MattyParser::Ou_exclusivo_logicoContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

