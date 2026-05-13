
// Generated from ./lang/Matty.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MattyParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, BOOLEANO = 47, FRACTION = 48, ID = 49, INT = 50, 
    STRING = 51, Comentario = 52, Espaco = 53
  };

  enum {
    RulePrograma = 0, RuleSeqComando = 1, RuleComando = 2, RuleValor = 3, 
    RuleExpressao = 4, RuleBooleano = 5
  };

  explicit MattyParser(antlr4::TokenStream *input);

  MattyParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MattyParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramaContext;
  class SeqComandoContext;
  class ComandoContext;
  class ValorContext;
  class ExpressaoContext;
  class BooleanoContext; 

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<SeqComandoContext *> seqComando();
    SeqComandoContext* seqComando(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramaContext* programa();

  class  SeqComandoContext : public antlr4::ParserRuleContext {
  public:
    SeqComandoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComandoContext *> comando();
    ComandoContext* comando(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SeqComandoContext* seqComando();

  class  ComandoContext : public antlr4::ParserRuleContext {
  public:
    ComandoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ComandoContext() = default;
    void copyFrom(ComandoContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AtribuicaoContext : public ComandoContext {
  public:
    AtribuicaoContext(ComandoContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<ValorContext *> valor();
    ValorContext* valor(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EscolhaContext : public ComandoContext {
  public:
    EscolhaContext(ComandoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    std::vector<ComandoContext *> comando();
    ComandoContext* comando(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SeContext : public ComandoContext {
  public:
    SeContext(ComandoContext *ctx);

    std::vector<BooleanoContext *> booleano();
    BooleanoContext* booleano(size_t i);
    std::vector<ComandoContext *> comando();
    ComandoContext* comando(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExibaContext : public ComandoContext {
  public:
    ExibaContext(ComandoContext *ctx);

    std::vector<ValorContext *> valor();
    ValorContext* valor(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepitaContext : public ComandoContext {
  public:
    RepitaContext(ComandoContext *ctx);

    ExpressaoContext *expressao();
    ComandoContext *comando();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopContext : public ComandoContext {
  public:
    LoopContext(ComandoContext *ctx);

    antlr4::tree::TerminalNode *ID();
    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    ComandoContext *comando();
    BooleanoContext *booleano();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlocoContext : public ComandoContext {
  public:
    BlocoContext(ComandoContext *ctx);

    SeqComandoContext *seqComando();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SkipContext : public ComandoContext {
  public:
    SkipContext(ComandoContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ComandoContext* comando();

  class  ValorContext : public antlr4::ParserRuleContext {
  public:
    ValorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressaoContext *expressao();
    BooleanoContext *booleano();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValorContext* valor();

  class  ExpressaoContext : public antlr4::ParserRuleContext {
  public:
    ExpressaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressaoContext() = default;
    void copyFrom(ExpressaoContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SomaOuSubtracaoContext : public ExpressaoContext {
  public:
    SomaOuSubtracaoContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LeiaContext : public ExpressaoContext {
  public:
    LeiaContext(ExpressaoContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogaritmoContext : public ExpressaoContext {
  public:
    LogaritmoContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InteiroContext : public ExpressaoContext {
  public:
    InteiroContext(ExpressaoContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RaizContext : public ExpressaoContext {
  public:
    RaizContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrioridadeDeOperacoesContext : public ExpressaoContext {
  public:
    PrioridadeDeOperacoesContext(ExpressaoContext *ctx);

    ExpressaoContext *expressao();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PotenciacaoContext : public ExpressaoContext {
  public:
    PotenciacaoContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplicacaoOuDivisaoContext : public ExpressaoContext {
  public:
    MultiplicacaoOuDivisaoContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public ExpressaoContext {
  public:
    IdContext(ExpressaoContext *ctx);

    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RegraDeTresContext : public ExpressaoContext {
  public:
    RegraDeTresContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FracaoContext : public ExpressaoContext {
  public:
    FracaoContext(ExpressaoContext *ctx);

    antlr4::tree::TerminalNode *FRACTION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EquacaoContext : public ExpressaoContext {
  public:
    EquacaoContext(ExpressaoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressaoContext* expressao();
  ExpressaoContext* expressao(int precedence);
  class  BooleanoContext : public antlr4::ParserRuleContext {
  public:
    BooleanoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanoContext() = default;
    void copyFrom(BooleanoContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MaiorOuIgualContext : public BooleanoContext {
  public:
    MaiorOuIgualContext(BooleanoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolContext : public BooleanoContext {
  public:
    BoolContext(BooleanoContext *ctx);

    antlr4::tree::TerminalNode *BOOLEANO();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MenorOuIgualContext : public BooleanoContext {
  public:
    MenorOuIgualContext(BooleanoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ELogicoContext : public BooleanoContext {
  public:
    ELogicoContext(BooleanoContext *ctx);

    std::vector<BooleanoContext *> booleano();
    BooleanoContext* booleano(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MaiorContext : public BooleanoContext {
  public:
    MaiorContext(BooleanoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MenorContext : public BooleanoContext {
  public:
    MenorContext(BooleanoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NaoLogicoContext : public BooleanoContext {
  public:
    NaoLogicoContext(BooleanoContext *ctx);

    BooleanoContext *booleano();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DiferenteContext : public BooleanoContext {
  public:
    DiferenteContext(BooleanoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IgualContext : public BooleanoContext {
  public:
    IgualContext(BooleanoContext *ctx);

    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OuExclusivoLogicoContext : public BooleanoContext {
  public:
    OuExclusivoLogicoContext(BooleanoContext *ctx);

    std::vector<BooleanoContext *> booleano();
    BooleanoContext* booleano(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrioridadeDeOperacoesLogicasContext : public BooleanoContext {
  public:
    PrioridadeDeOperacoesLogicasContext(BooleanoContext *ctx);

    BooleanoContext *booleano();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OuLogicoContext : public BooleanoContext {
  public:
    OuLogicoContext(BooleanoContext *ctx);

    std::vector<BooleanoContext *> booleano();
    BooleanoContext* booleano(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanoContext* booleano();
  BooleanoContext* booleano(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressaoSempred(ExpressaoContext *_localctx, size_t predicateIndex);
  bool booleanoSempred(BooleanoContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

