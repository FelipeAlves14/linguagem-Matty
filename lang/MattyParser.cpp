
// Generated from ./lang/Matty.g4 by ANTLR 4.13.2


#include "MattyListener.h"
#include "MattyVisitor.h"

#include "MattyParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MattyParserStaticData final {
  MattyParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MattyParserStaticData(const MattyParserStaticData&) = delete;
  MattyParserStaticData(MattyParserStaticData&&) = delete;
  MattyParserStaticData& operator=(const MattyParserStaticData&) = delete;
  MattyParserStaticData& operator=(MattyParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mattyParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MattyParserStaticData> mattyParserStaticData = nullptr;

void mattyParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mattyParserStaticData != nullptr) {
    return;
  }
#else
  assert(mattyParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MattyParserStaticData>(
    std::vector<std::string>{
      "programa", "comando", "valor", "expressao", "booleano"
    },
    std::vector<std::string>{
      "", "';'", "','", "'='", "'for'", "'to'", "'at'", "'make'", "'times'", 
      "'choose'", "'('", "'):'", "':'", "'_'", "'skip'", "'if'", "')'", 
      "'elif'", "'else'", "'while'", "'do'", "'print'", "'{'", "'}'", "'read'", 
      "'x'", "'|'", "'-'", "'~'", "'log'", "'\\'", "'/'", "'^'", "'*'", 
      "'//'", "'+'", "'=='", "'<='", "'<'", "'>'", "'>='", "'!='", "'!'", 
      "'and'", "'or'", "'xor'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "BOOLEANO", "DECIMAL", 
      "FRACTION", "ID", "INT", "STRING", "COMENTARIO", "ESPACO"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,53,225,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,0,1,0,1,1,1,1,1,1,5,1,23,8,1,10,1,12,1,26,9,1,1,1,
  	1,1,1,1,1,1,5,1,32,8,1,10,1,12,1,35,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,58,8,1,10,1,
  	12,1,61,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,5,1,79,8,1,10,1,12,1,82,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,5,1,99,8,1,10,1,12,1,102,9,1,3,1,104,8,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,111,8,1,1,2,1,2,1,2,3,2,116,8,2,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,3,3,127,8,3,1,3,1,3,1,3,3,3,132,8,3,1,3,1,3,1,3,3,3,
  	137,8,3,1,3,1,3,1,3,3,3,142,8,3,1,3,1,3,1,3,1,3,1,3,3,3,149,8,3,1,3,1,
  	3,3,3,153,8,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,161,8,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,5,3,172,8,3,10,3,12,3,175,9,3,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,209,8,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,5,4,220,8,4,10,4,12,4,223,9,4,1,4,0,2,6,8,5,0,2,4,6,8,0,3,
  	1,0,27,28,2,0,31,31,33,34,2,0,27,27,35,35,264,0,13,1,0,0,0,2,110,1,0,
  	0,0,4,115,1,0,0,0,6,160,1,0,0,0,8,208,1,0,0,0,10,11,3,2,1,0,11,12,5,1,
  	0,0,12,14,1,0,0,0,13,10,1,0,0,0,14,15,1,0,0,0,15,13,1,0,0,0,15,16,1,0,
  	0,0,16,17,1,0,0,0,17,18,5,0,0,1,18,1,1,0,0,0,19,24,5,49,0,0,20,21,5,2,
  	0,0,21,23,5,49,0,0,22,20,1,0,0,0,23,26,1,0,0,0,24,22,1,0,0,0,24,25,1,
  	0,0,0,25,27,1,0,0,0,26,24,1,0,0,0,27,28,5,3,0,0,28,33,3,4,2,0,29,30,5,
  	2,0,0,30,32,3,4,2,0,31,29,1,0,0,0,32,35,1,0,0,0,33,31,1,0,0,0,33,34,1,
  	0,0,0,34,111,1,0,0,0,35,33,1,0,0,0,36,37,5,4,0,0,37,38,5,49,0,0,38,39,
  	5,5,0,0,39,40,3,6,3,0,40,41,5,6,0,0,41,42,3,6,3,0,42,43,3,2,1,0,43,111,
  	1,0,0,0,44,45,5,7,0,0,45,46,3,6,3,0,46,47,5,8,0,0,47,48,3,2,1,0,48,111,
  	1,0,0,0,49,50,5,9,0,0,50,51,5,10,0,0,51,52,3,6,3,0,52,59,5,11,0,0,53,
  	54,3,6,3,0,54,55,5,12,0,0,55,56,3,2,1,0,56,58,1,0,0,0,57,53,1,0,0,0,58,
  	61,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,60,62,1,0,0,0,61,59,1,0,0,0,62,
  	63,5,13,0,0,63,64,5,12,0,0,64,65,3,2,1,0,65,111,1,0,0,0,66,111,5,14,0,
  	0,67,68,5,15,0,0,68,69,5,10,0,0,69,70,3,8,4,0,70,71,5,16,0,0,71,80,3,
  	2,1,0,72,73,5,17,0,0,73,74,5,10,0,0,74,75,3,8,4,0,75,76,5,16,0,0,76,77,
  	3,2,1,0,77,79,1,0,0,0,78,72,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,
  	1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,84,5,18,0,0,84,85,3,2,1,0,85,111,
  	1,0,0,0,86,87,5,19,0,0,87,88,5,10,0,0,88,89,3,8,4,0,89,90,5,16,0,0,90,
  	91,5,20,0,0,91,92,3,2,1,0,92,111,1,0,0,0,93,94,5,21,0,0,94,103,5,10,0,
  	0,95,100,3,4,2,0,96,97,5,2,0,0,97,99,3,4,2,0,98,96,1,0,0,0,99,102,1,0,
  	0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,103,
  	95,1,0,0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,111,5,16,0,0,106,107,5,
  	22,0,0,107,108,3,2,1,0,108,109,5,23,0,0,109,111,1,0,0,0,110,19,1,0,0,
  	0,110,36,1,0,0,0,110,44,1,0,0,0,110,49,1,0,0,0,110,66,1,0,0,0,110,67,
  	1,0,0,0,110,86,1,0,0,0,110,93,1,0,0,0,110,106,1,0,0,0,111,3,1,0,0,0,112,
  	116,3,6,3,0,113,116,3,8,4,0,114,116,5,51,0,0,115,112,1,0,0,0,115,113,
  	1,0,0,0,115,114,1,0,0,0,116,5,1,0,0,0,117,118,6,3,-1,0,118,161,5,50,0,
  	0,119,161,5,47,0,0,120,161,5,48,0,0,121,161,5,24,0,0,122,161,5,49,0,0,
  	123,126,5,10,0,0,124,127,3,6,3,0,125,127,5,25,0,0,126,124,1,0,0,0,126,
  	125,1,0,0,0,127,128,1,0,0,0,128,131,5,26,0,0,129,132,3,6,3,0,130,132,
  	5,25,0,0,131,129,1,0,0,0,131,130,1,0,0,0,132,133,1,0,0,0,133,136,7,0,
  	0,0,134,137,3,6,3,0,135,137,5,25,0,0,136,134,1,0,0,0,136,135,1,0,0,0,
  	137,138,1,0,0,0,138,141,5,26,0,0,139,142,3,6,3,0,140,142,5,25,0,0,141,
  	139,1,0,0,0,141,140,1,0,0,0,142,143,1,0,0,0,143,161,5,16,0,0,144,145,
  	5,29,0,0,145,148,3,6,3,0,146,147,5,13,0,0,147,149,3,6,3,0,148,146,1,0,
  	0,0,148,149,1,0,0,0,149,161,1,0,0,0,150,152,5,30,0,0,151,153,3,6,3,0,
  	152,151,1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,155,5,31,0,0,155,
  	161,3,6,3,5,156,157,5,10,0,0,157,158,3,6,3,0,158,159,5,16,0,0,159,161,
  	1,0,0,0,160,117,1,0,0,0,160,119,1,0,0,0,160,120,1,0,0,0,160,121,1,0,0,
  	0,160,122,1,0,0,0,160,123,1,0,0,0,160,144,1,0,0,0,160,150,1,0,0,0,160,
  	156,1,0,0,0,161,173,1,0,0,0,162,163,10,4,0,0,163,164,5,32,0,0,164,172,
  	3,6,3,5,165,166,10,3,0,0,166,167,7,1,0,0,167,172,3,6,3,4,168,169,10,2,
  	0,0,169,170,7,2,0,0,170,172,3,6,3,3,171,162,1,0,0,0,171,165,1,0,0,0,171,
  	168,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,173,174,1,0,0,0,174,7,1,0,
  	0,0,175,173,1,0,0,0,176,177,6,4,-1,0,177,209,5,46,0,0,178,179,3,6,3,0,
  	179,180,5,36,0,0,180,181,3,6,3,0,181,209,1,0,0,0,182,183,3,6,3,0,183,
  	184,5,37,0,0,184,185,3,6,3,0,185,209,1,0,0,0,186,187,3,6,3,0,187,188,
  	5,38,0,0,188,189,3,6,3,0,189,209,1,0,0,0,190,191,3,6,3,0,191,192,5,39,
  	0,0,192,193,3,6,3,0,193,209,1,0,0,0,194,195,3,6,3,0,195,196,5,40,0,0,
  	196,197,3,6,3,0,197,209,1,0,0,0,198,199,3,6,3,0,199,200,5,41,0,0,200,
  	201,3,6,3,0,201,209,1,0,0,0,202,203,5,42,0,0,203,209,3,8,4,5,204,205,
  	5,10,0,0,205,206,3,8,4,0,206,207,5,16,0,0,207,209,1,0,0,0,208,176,1,0,
  	0,0,208,178,1,0,0,0,208,182,1,0,0,0,208,186,1,0,0,0,208,190,1,0,0,0,208,
  	194,1,0,0,0,208,198,1,0,0,0,208,202,1,0,0,0,208,204,1,0,0,0,209,221,1,
  	0,0,0,210,211,10,4,0,0,211,212,5,43,0,0,212,220,3,8,4,5,213,214,10,3,
  	0,0,214,215,5,44,0,0,215,220,3,8,4,4,216,217,10,2,0,0,217,218,5,45,0,
  	0,218,220,3,8,4,3,219,210,1,0,0,0,219,213,1,0,0,0,219,216,1,0,0,0,220,
  	223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,9,1,0,0,0,223,221,1,0,
  	0,0,21,15,24,33,59,80,100,103,110,115,126,131,136,141,148,152,160,171,
  	173,208,219,221
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mattyParserStaticData = std::move(staticData);
}

}

MattyParser::MattyParser(TokenStream *input) : MattyParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MattyParser::MattyParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MattyParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mattyParserStaticData->atn, mattyParserStaticData->decisionToDFA, mattyParserStaticData->sharedContextCache, options);
}

MattyParser::~MattyParser() {
  delete _interpreter;
}

const atn::ATN& MattyParser::getATN() const {
  return *mattyParserStaticData->atn;
}

std::string MattyParser::getGrammarFileName() const {
  return "Matty.g4";
}

const std::vector<std::string>& MattyParser::getRuleNames() const {
  return mattyParserStaticData->ruleNames;
}

const dfa::Vocabulary& MattyParser::getVocabulary() const {
  return mattyParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MattyParser::getSerializedATN() const {
  return mattyParserStaticData->serializedATN;
}


//----------------- ProgramaContext ------------------------------------------------------------------

MattyParser::ProgramaContext::ProgramaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MattyParser::ProgramaContext::EOF() {
  return getToken(MattyParser::EOF, 0);
}

std::vector<MattyParser::ComandoContext *> MattyParser::ProgramaContext::comando() {
  return getRuleContexts<MattyParser::ComandoContext>();
}

MattyParser::ComandoContext* MattyParser::ProgramaContext::comando(size_t i) {
  return getRuleContext<MattyParser::ComandoContext>(i);
}


size_t MattyParser::ProgramaContext::getRuleIndex() const {
  return MattyParser::RulePrograma;
}

void MattyParser::ProgramaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrograma(this);
}

void MattyParser::ProgramaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrograma(this);
}


std::any MattyParser::ProgramaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitPrograma(this);
  else
    return visitor->visitChildren(this);
}

MattyParser::ProgramaContext* MattyParser::programa() {
  ProgramaContext *_localctx = _tracker.createInstance<ProgramaContext>(_ctx, getState());
  enterRule(_localctx, 0, MattyParser::RulePrograma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(10);
      comando();
      setState(11);
      match(MattyParser::T__0);
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 562949960286864) != 0));
    setState(17);
    match(MattyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComandoContext ------------------------------------------------------------------

MattyParser::ComandoContext::ComandoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MattyParser::ComandoContext::getRuleIndex() const {
  return MattyParser::RuleComando;
}

void MattyParser::ComandoContext::copyFrom(ComandoContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtribuicaoContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> MattyParser::AtribuicaoContext::ID() {
  return getTokens(MattyParser::ID);
}

tree::TerminalNode* MattyParser::AtribuicaoContext::ID(size_t i) {
  return getToken(MattyParser::ID, i);
}

std::vector<MattyParser::ValorContext *> MattyParser::AtribuicaoContext::valor() {
  return getRuleContexts<MattyParser::ValorContext>();
}

MattyParser::ValorContext* MattyParser::AtribuicaoContext::valor(size_t i) {
  return getRuleContext<MattyParser::ValorContext>(i);
}

MattyParser::AtribuicaoContext::AtribuicaoContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::AtribuicaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribuicao(this);
}
void MattyParser::AtribuicaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribuicao(this);
}

std::any MattyParser::AtribuicaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitAtribuicao(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EscolhaContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::EscolhaContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::EscolhaContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

std::vector<MattyParser::ComandoContext *> MattyParser::EscolhaContext::comando() {
  return getRuleContexts<MattyParser::ComandoContext>();
}

MattyParser::ComandoContext* MattyParser::EscolhaContext::comando(size_t i) {
  return getRuleContext<MattyParser::ComandoContext>(i);
}

MattyParser::EscolhaContext::EscolhaContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::EscolhaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEscolha(this);
}
void MattyParser::EscolhaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEscolha(this);
}

std::any MattyParser::EscolhaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitEscolha(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SeContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::SeContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::SeContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

std::vector<MattyParser::ComandoContext *> MattyParser::SeContext::comando() {
  return getRuleContexts<MattyParser::ComandoContext>();
}

MattyParser::ComandoContext* MattyParser::SeContext::comando(size_t i) {
  return getRuleContext<MattyParser::ComandoContext>(i);
}

MattyParser::SeContext::SeContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::SeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSe(this);
}
void MattyParser::SeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSe(this);
}

std::any MattyParser::SeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitSe(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExibaContext ------------------------------------------------------------------

std::vector<MattyParser::ValorContext *> MattyParser::ExibaContext::valor() {
  return getRuleContexts<MattyParser::ValorContext>();
}

MattyParser::ValorContext* MattyParser::ExibaContext::valor(size_t i) {
  return getRuleContext<MattyParser::ValorContext>(i);
}

MattyParser::ExibaContext::ExibaContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::ExibaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExiba(this);
}
void MattyParser::ExibaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExiba(this);
}

std::any MattyParser::ExibaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitExiba(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepitaContext ------------------------------------------------------------------

MattyParser::ExpressaoContext* MattyParser::RepitaContext::expressao() {
  return getRuleContext<MattyParser::ExpressaoContext>(0);
}

MattyParser::ComandoContext* MattyParser::RepitaContext::comando() {
  return getRuleContext<MattyParser::ComandoContext>(0);
}

MattyParser::RepitaContext::RepitaContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::RepitaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepita(this);
}
void MattyParser::RepitaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepita(this);
}

std::any MattyParser::RepitaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitRepita(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::LoopContext::ID() {
  return getToken(MattyParser::ID, 0);
}

std::vector<MattyParser::ExpressaoContext *> MattyParser::LoopContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::LoopContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::ComandoContext* MattyParser::LoopContext::comando() {
  return getRuleContext<MattyParser::ComandoContext>(0);
}

MattyParser::BooleanoContext* MattyParser::LoopContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

MattyParser::LoopContext::LoopContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}
void MattyParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

std::any MattyParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlocoContext ------------------------------------------------------------------

MattyParser::ComandoContext* MattyParser::BlocoContext::comando() {
  return getRuleContext<MattyParser::ComandoContext>(0);
}

MattyParser::BlocoContext::BlocoContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::BlocoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBloco(this);
}
void MattyParser::BlocoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBloco(this);
}

std::any MattyParser::BlocoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitBloco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SkipContext ------------------------------------------------------------------

MattyParser::SkipContext::SkipContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::SkipContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSkip(this);
}
void MattyParser::SkipContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSkip(this);
}

std::any MattyParser::SkipContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitSkip(this);
  else
    return visitor->visitChildren(this);
}
MattyParser::ComandoContext* MattyParser::comando() {
  ComandoContext *_localctx = _tracker.createInstance<ComandoContext>(_ctx, getState());
  enterRule(_localctx, 2, MattyParser::RuleComando);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MattyParser::ID: {
        _localctx = _tracker.createInstance<MattyParser::AtribuicaoContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(19);
        match(MattyParser::ID);
        setState(24);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__1) {
          setState(20);
          match(MattyParser::T__1);
          setState(21);
          match(MattyParser::ID);
          setState(26);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(27);
        match(MattyParser::T__2);
        setState(28);
        valor();
        setState(33);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__1) {
          setState(29);
          match(MattyParser::T__1);
          setState(30);
          valor();
          setState(35);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case MattyParser::T__3: {
        _localctx = _tracker.createInstance<MattyParser::LoopContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(36);
        match(MattyParser::T__3);
        setState(37);
        match(MattyParser::ID);
        setState(38);
        match(MattyParser::T__4);
        setState(39);
        expressao(0);
        setState(40);
        match(MattyParser::T__5);
        setState(41);
        expressao(0);
        setState(42);
        comando();
        break;
      }

      case MattyParser::T__6: {
        _localctx = _tracker.createInstance<MattyParser::RepitaContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(44);
        match(MattyParser::T__6);
        setState(45);
        expressao(0);
        setState(46);
        match(MattyParser::T__7);
        setState(47);
        comando();
        break;
      }

      case MattyParser::T__8: {
        _localctx = _tracker.createInstance<MattyParser::EscolhaContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(49);
        match(MattyParser::T__8);
        setState(50);
        match(MattyParser::T__9);
        setState(51);
        expressao(0);
        setState(52);
        match(MattyParser::T__10);
        setState(59);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2111063952720896) != 0)) {
          setState(53);
          expressao(0);
          setState(54);
          match(MattyParser::T__11);
          setState(55);
          comando();
          setState(61);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(62);
        match(MattyParser::T__12);
        setState(63);
        match(MattyParser::T__11);
        setState(64);
        comando();
        break;
      }

      case MattyParser::T__13: {
        _localctx = _tracker.createInstance<MattyParser::SkipContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(66);
        match(MattyParser::T__13);
        break;
      }

      case MattyParser::T__14: {
        _localctx = _tracker.createInstance<MattyParser::SeContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(67);
        match(MattyParser::T__14);
        setState(68);
        match(MattyParser::T__9);
        setState(69);
        booleano(0);
        setState(70);
        match(MattyParser::T__15);
        setState(71);
        comando();
        setState(80);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__16) {
          setState(72);
          match(MattyParser::T__16);
          setState(73);
          match(MattyParser::T__9);
          setState(74);
          booleano(0);
          setState(75);
          match(MattyParser::T__15);
          setState(76);
          comando();
          setState(82);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(83);
        match(MattyParser::T__17);
        setState(84);
        comando();
        break;
      }

      case MattyParser::T__18: {
        _localctx = _tracker.createInstance<MattyParser::LoopContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(86);
        match(MattyParser::T__18);
        setState(87);
        match(MattyParser::T__9);
        setState(88);
        booleano(0);
        setState(89);
        match(MattyParser::T__15);
        setState(90);
        match(MattyParser::T__19);
        setState(91);
        comando();
        break;
      }

      case MattyParser::T__20: {
        _localctx = _tracker.createInstance<MattyParser::ExibaContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(93);
        match(MattyParser::T__20);
        setState(94);
        match(MattyParser::T__9);
        setState(103);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4437630557094912) != 0)) {
          setState(95);
          valor();
          setState(100);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == MattyParser::T__1) {
            setState(96);
            match(MattyParser::T__1);
            setState(97);
            valor();
            setState(102);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(105);
        match(MattyParser::T__15);
        break;
      }

      case MattyParser::T__21: {
        _localctx = _tracker.createInstance<MattyParser::BlocoContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(106);
        match(MattyParser::T__21);
        setState(107);
        comando();
        setState(108);
        match(MattyParser::T__22);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValorContext ------------------------------------------------------------------

MattyParser::ValorContext::ValorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MattyParser::ExpressaoContext* MattyParser::ValorContext::expressao() {
  return getRuleContext<MattyParser::ExpressaoContext>(0);
}

MattyParser::BooleanoContext* MattyParser::ValorContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

tree::TerminalNode* MattyParser::ValorContext::STRING() {
  return getToken(MattyParser::STRING, 0);
}


size_t MattyParser::ValorContext::getRuleIndex() const {
  return MattyParser::RuleValor;
}

void MattyParser::ValorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValor(this);
}

void MattyParser::ValorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValor(this);
}


std::any MattyParser::ValorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitValor(this);
  else
    return visitor->visitChildren(this);
}

MattyParser::ValorContext* MattyParser::valor() {
  ValorContext *_localctx = _tracker.createInstance<ValorContext>(_ctx, getState());
  enterRule(_localctx, 4, MattyParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      expressao(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      booleano(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(114);
      match(MattyParser::STRING);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressaoContext ------------------------------------------------------------------

MattyParser::ExpressaoContext::ExpressaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MattyParser::ExpressaoContext::getRuleIndex() const {
  return MattyParser::RuleExpressao;
}

void MattyParser::ExpressaoContext::copyFrom(ExpressaoContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SomaOuSubtracaoContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::SomaOuSubtracaoContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::SomaOuSubtracaoContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::SomaOuSubtracaoContext::SomaOuSubtracaoContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::SomaOuSubtracaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSomaOuSubtracao(this);
}
void MattyParser::SomaOuSubtracaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSomaOuSubtracao(this);
}

std::any MattyParser::SomaOuSubtracaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitSomaOuSubtracao(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LeiaContext ------------------------------------------------------------------

MattyParser::LeiaContext::LeiaContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::LeiaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeia(this);
}
void MattyParser::LeiaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeia(this);
}

std::any MattyParser::LeiaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitLeia(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogaritmoContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::LogaritmoContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::LogaritmoContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::LogaritmoContext::LogaritmoContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::LogaritmoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogaritmo(this);
}
void MattyParser::LogaritmoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogaritmo(this);
}

std::any MattyParser::LogaritmoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitLogaritmo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InteiroContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::InteiroContext::INT() {
  return getToken(MattyParser::INT, 0);
}

MattyParser::InteiroContext::InteiroContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::InteiroContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteiro(this);
}
void MattyParser::InteiroContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteiro(this);
}

std::any MattyParser::InteiroContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitInteiro(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RaizContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::RaizContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::RaizContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::RaizContext::RaizContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::RaizContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaiz(this);
}
void MattyParser::RaizContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaiz(this);
}

std::any MattyParser::RaizContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitRaiz(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrioridadeDeOperacoesContext ------------------------------------------------------------------

MattyParser::ExpressaoContext* MattyParser::PrioridadeDeOperacoesContext::expressao() {
  return getRuleContext<MattyParser::ExpressaoContext>(0);
}

MattyParser::PrioridadeDeOperacoesContext::PrioridadeDeOperacoesContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::PrioridadeDeOperacoesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrioridadeDeOperacoes(this);
}
void MattyParser::PrioridadeDeOperacoesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrioridadeDeOperacoes(this);
}

std::any MattyParser::PrioridadeDeOperacoesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitPrioridadeDeOperacoes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PotenciacaoContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::PotenciacaoContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::PotenciacaoContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::PotenciacaoContext::PotenciacaoContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::PotenciacaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPotenciacao(this);
}
void MattyParser::PotenciacaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPotenciacao(this);
}

std::any MattyParser::PotenciacaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitPotenciacao(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicacaoOuDivisaoContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::MultiplicacaoOuDivisaoContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::MultiplicacaoOuDivisaoContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::MultiplicacaoOuDivisaoContext::MultiplicacaoOuDivisaoContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::MultiplicacaoOuDivisaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicacaoOuDivisao(this);
}
void MattyParser::MultiplicacaoOuDivisaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicacaoOuDivisao(this);
}

std::any MattyParser::MultiplicacaoOuDivisaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMultiplicacaoOuDivisao(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::IdContext::ID() {
  return getToken(MattyParser::ID, 0);
}

MattyParser::IdContext::IdContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}
void MattyParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}

std::any MattyParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecimalContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::DecimalContext::DECIMAL() {
  return getToken(MattyParser::DECIMAL, 0);
}

MattyParser::DecimalContext::DecimalContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::DecimalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimal(this);
}
void MattyParser::DecimalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimal(this);
}

std::any MattyParser::DecimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitDecimal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RegraDeTresContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::RegraDeTresContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::RegraDeTresContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::RegraDeTresContext::RegraDeTresContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::RegraDeTresContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegraDeTres(this);
}
void MattyParser::RegraDeTresContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegraDeTres(this);
}

std::any MattyParser::RegraDeTresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitRegraDeTres(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FracaoContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::FracaoContext::FRACTION() {
  return getToken(MattyParser::FRACTION, 0);
}

MattyParser::FracaoContext::FracaoContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::FracaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFracao(this);
}
void MattyParser::FracaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFracao(this);
}

std::any MattyParser::FracaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitFracao(this);
  else
    return visitor->visitChildren(this);
}

MattyParser::ExpressaoContext* MattyParser::expressao() {
   return expressao(0);
}

MattyParser::ExpressaoContext* MattyParser::expressao(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MattyParser::ExpressaoContext *_localctx = _tracker.createInstance<ExpressaoContext>(_ctx, parentState);
  MattyParser::ExpressaoContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, MattyParser::RuleExpressao, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InteiroContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(118);
      match(MattyParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DecimalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(119);
      match(MattyParser::DECIMAL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FracaoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(120);
      match(MattyParser::FRACTION);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LeiaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(121);
      match(MattyParser::T__23);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(122);
      match(MattyParser::ID);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<RegraDeTresContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(123);
      match(MattyParser::T__9);
      setState(126);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__23:
        case MattyParser::T__28:
        case MattyParser::T__29:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(124);
          expressao(0);
          break;
        }

        case MattyParser::T__24: {
          setState(125);
          match(MattyParser::T__24);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(128);
      match(MattyParser::T__25);
      setState(131);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__23:
        case MattyParser::T__28:
        case MattyParser::T__29:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(129);
          expressao(0);
          break;
        }

        case MattyParser::T__24: {
          setState(130);
          match(MattyParser::T__24);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(133);
      _la = _input->LA(1);
      if (!(_la == MattyParser::T__26

      || _la == MattyParser::T__27)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(136);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__23:
        case MattyParser::T__28:
        case MattyParser::T__29:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(134);
          expressao(0);
          break;
        }

        case MattyParser::T__24: {
          setState(135);
          match(MattyParser::T__24);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(138);
      match(MattyParser::T__25);
      setState(141);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__23:
        case MattyParser::T__28:
        case MattyParser::T__29:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(139);
          expressao(0);
          break;
        }

        case MattyParser::T__24: {
          setState(140);
          match(MattyParser::T__24);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(143);
      match(MattyParser::T__15);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<LogaritmoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(144);
      match(MattyParser::T__28);
      setState(145);
      expressao(0);
      setState(148);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(146);
        match(MattyParser::T__12);
        setState(147);
        expressao(0);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<RaizContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(150);
      match(MattyParser::T__29);
      setState(152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2111063952720896) != 0)) {
        setState(151);
        expressao(0);
      }
      setState(154);
      match(MattyParser::T__30);
      setState(155);
      expressao(5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PrioridadeDeOperacoesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(156);
      match(MattyParser::T__9);
      setState(157);
      expressao(0);
      setState(158);
      match(MattyParser::T__15);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(173);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(171);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PotenciacaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(162);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(163);
          match(MattyParser::T__31);
          setState(164);
          expressao(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicacaoOuDivisaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(165);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(166);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 27917287424) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(167);
          expressao(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SomaOuSubtracaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(168);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(169);
          _la = _input->LA(1);
          if (!(_la == MattyParser::T__26

          || _la == MattyParser::T__34)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(170);
          expressao(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(175);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BooleanoContext ------------------------------------------------------------------

MattyParser::BooleanoContext::BooleanoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MattyParser::BooleanoContext::getRuleIndex() const {
  return MattyParser::RuleBooleano;
}

void MattyParser::BooleanoContext::copyFrom(BooleanoContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MaiorOuIgualContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::MaiorOuIgualContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::MaiorOuIgualContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::MaiorOuIgualContext::MaiorOuIgualContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::MaiorOuIgualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaiorOuIgual(this);
}
void MattyParser::MaiorOuIgualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaiorOuIgual(this);
}

std::any MattyParser::MaiorOuIgualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMaiorOuIgual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::BoolContext::BOOLEANO() {
  return getToken(MattyParser::BOOLEANO, 0);
}

MattyParser::BoolContext::BoolContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::BoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool(this);
}
void MattyParser::BoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool(this);
}

std::any MattyParser::BoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MenorOuIgualContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::MenorOuIgualContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::MenorOuIgualContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::MenorOuIgualContext::MenorOuIgualContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::MenorOuIgualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMenorOuIgual(this);
}
void MattyParser::MenorOuIgualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMenorOuIgual(this);
}

std::any MattyParser::MenorOuIgualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMenorOuIgual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ELogicoContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::ELogicoContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::ELogicoContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

MattyParser::ELogicoContext::ELogicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::ELogicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterELogico(this);
}
void MattyParser::ELogicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitELogico(this);
}

std::any MattyParser::ELogicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitELogico(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MaiorContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::MaiorContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::MaiorContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::MaiorContext::MaiorContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::MaiorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaior(this);
}
void MattyParser::MaiorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaior(this);
}

std::any MattyParser::MaiorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMaior(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MenorContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::MenorContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::MenorContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::MenorContext::MenorContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::MenorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMenor(this);
}
void MattyParser::MenorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMenor(this);
}

std::any MattyParser::MenorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMenor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NaoLogicoContext ------------------------------------------------------------------

MattyParser::BooleanoContext* MattyParser::NaoLogicoContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

MattyParser::NaoLogicoContext::NaoLogicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::NaoLogicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNaoLogico(this);
}
void MattyParser::NaoLogicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNaoLogico(this);
}

std::any MattyParser::NaoLogicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitNaoLogico(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiferenteContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::DiferenteContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::DiferenteContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::DiferenteContext::DiferenteContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::DiferenteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiferente(this);
}
void MattyParser::DiferenteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiferente(this);
}

std::any MattyParser::DiferenteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitDiferente(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IgualContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::IgualContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::IgualContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::IgualContext::IgualContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::IgualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIgual(this);
}
void MattyParser::IgualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIgual(this);
}

std::any MattyParser::IgualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitIgual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OuExclusivoLogicoContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::OuExclusivoLogicoContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::OuExclusivoLogicoContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

MattyParser::OuExclusivoLogicoContext::OuExclusivoLogicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::OuExclusivoLogicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOuExclusivoLogico(this);
}
void MattyParser::OuExclusivoLogicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOuExclusivoLogico(this);
}

std::any MattyParser::OuExclusivoLogicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitOuExclusivoLogico(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrioridadeDeOperacoesLogicasContext ------------------------------------------------------------------

MattyParser::BooleanoContext* MattyParser::PrioridadeDeOperacoesLogicasContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

MattyParser::PrioridadeDeOperacoesLogicasContext::PrioridadeDeOperacoesLogicasContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::PrioridadeDeOperacoesLogicasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrioridadeDeOperacoesLogicas(this);
}
void MattyParser::PrioridadeDeOperacoesLogicasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrioridadeDeOperacoesLogicas(this);
}

std::any MattyParser::PrioridadeDeOperacoesLogicasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitPrioridadeDeOperacoesLogicas(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OuLogicoContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::OuLogicoContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::OuLogicoContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

MattyParser::OuLogicoContext::OuLogicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::OuLogicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOuLogico(this);
}
void MattyParser::OuLogicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOuLogico(this);
}

std::any MattyParser::OuLogicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitOuLogico(this);
  else
    return visitor->visitChildren(this);
}

MattyParser::BooleanoContext* MattyParser::booleano() {
   return booleano(0);
}

MattyParser::BooleanoContext* MattyParser::booleano(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MattyParser::BooleanoContext *_localctx = _tracker.createInstance<BooleanoContext>(_ctx, parentState);
  MattyParser::BooleanoContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, MattyParser::RuleBooleano, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(177);
      match(MattyParser::BOOLEANO);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(178);
      expressao(0);
      setState(179);
      match(MattyParser::T__35);
      setState(180);
      expressao(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MenorOuIgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(182);
      expressao(0);
      setState(183);
      match(MattyParser::T__36);
      setState(184);
      expressao(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MenorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(186);
      expressao(0);
      setState(187);
      match(MattyParser::T__37);
      setState(188);
      expressao(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MaiorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(190);
      expressao(0);
      setState(191);
      match(MattyParser::T__38);
      setState(192);
      expressao(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<MaiorOuIgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(194);
      expressao(0);
      setState(195);
      match(MattyParser::T__39);
      setState(196);
      expressao(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<DiferenteContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(198);
      expressao(0);
      setState(199);
      match(MattyParser::T__40);
      setState(200);
      expressao(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NaoLogicoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(202);
      match(MattyParser::T__41);
      setState(203);
      booleano(5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PrioridadeDeOperacoesLogicasContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(204);
      match(MattyParser::T__9);
      setState(205);
      booleano(0);
      setState(206);
      match(MattyParser::T__15);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(221);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(219);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ELogicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(210);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(211);
          match(MattyParser::T__42);
          setState(212);
          booleano(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OuLogicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(213);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(214);
          match(MattyParser::T__43);
          setState(215);
          booleano(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OuExclusivoLogicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(216);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(217);
          match(MattyParser::T__44);
          setState(218);
          booleano(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(223);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool MattyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressaoSempred(antlrcpp::downCast<ExpressaoContext *>(context), predicateIndex);
    case 4: return booleanoSempred(antlrcpp::downCast<BooleanoContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MattyParser::expressaoSempred(ExpressaoContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool MattyParser::booleanoSempred(BooleanoContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void MattyParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mattyParserInitialize();
#else
  ::antlr4::internal::call_once(mattyParserOnceFlag, mattyParserInitialize);
#endif
}
