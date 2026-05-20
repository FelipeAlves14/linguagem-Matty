
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
      "'choose'", "'('", "'):'", "':'", "'break'", "'_'", "'skip'", "'if'", 
      "')'", "'elif'", "'else'", "'while'", "'do'", "'print'", "'{'", "'}'", 
      "'read'", "'x'", "'|'", "'-'", "'~'", "'log'", "'\\'", "'/'", "'^'", 
      "'*'", "'//'", "'+'", "'=='", "'<='", "'<'", "'>'", "'>='", "'!='", 
      "'!'", "'and'", "'or'", "'xor'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "BOOLEANO", "DECIMAL", 
      "FRACTION", "ID", "INT", "STRING", "COMENTARIO", "ESPACO"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,54,232,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,0,1,0,1,1,1,1,1,1,5,1,23,8,1,10,1,12,1,26,9,1,1,1,
  	1,1,1,1,1,1,5,1,32,8,1,10,1,12,1,35,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,59,8,1,
  	10,1,12,1,62,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,5,1,80,8,1,10,1,12,1,83,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,100,8,1,10,1,12,1,103,9,1,3,1,105,8,
  	1,1,1,1,1,1,1,1,1,1,1,4,1,112,8,1,11,1,12,1,113,1,1,1,1,3,1,118,8,1,1,
  	2,1,2,1,2,3,2,123,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,134,8,3,
  	1,3,1,3,1,3,3,3,139,8,3,1,3,1,3,1,3,3,3,144,8,3,1,3,1,3,1,3,3,3,149,8,
  	3,1,3,1,3,1,3,1,3,1,3,3,3,156,8,3,1,3,1,3,3,3,160,8,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,168,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,179,8,3,10,
  	3,12,3,182,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,3,4,216,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,227,8,4,10,4,
  	12,4,230,9,4,1,4,0,2,6,8,5,0,2,4,6,8,0,3,1,0,28,29,2,0,32,32,34,35,2,
  	0,28,28,36,36,272,0,13,1,0,0,0,2,117,1,0,0,0,4,122,1,0,0,0,6,167,1,0,
  	0,0,8,215,1,0,0,0,10,11,3,2,1,0,11,12,5,1,0,0,12,14,1,0,0,0,13,10,1,0,
  	0,0,14,15,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,17,1,0,0,0,17,18,5,0,
  	0,1,18,1,1,0,0,0,19,24,5,50,0,0,20,21,5,2,0,0,21,23,5,50,0,0,22,20,1,
  	0,0,0,23,26,1,0,0,0,24,22,1,0,0,0,24,25,1,0,0,0,25,27,1,0,0,0,26,24,1,
  	0,0,0,27,28,5,3,0,0,28,33,3,4,2,0,29,30,5,2,0,0,30,32,3,4,2,0,31,29,1,
  	0,0,0,32,35,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,118,1,0,0,0,35,33,
  	1,0,0,0,36,37,5,4,0,0,37,38,5,50,0,0,38,39,5,5,0,0,39,40,3,6,3,0,40,41,
  	5,6,0,0,41,42,3,6,3,0,42,43,3,2,1,0,43,118,1,0,0,0,44,45,5,7,0,0,45,46,
  	3,6,3,0,46,47,5,8,0,0,47,48,3,2,1,0,48,118,1,0,0,0,49,50,5,9,0,0,50,51,
  	5,10,0,0,51,52,3,6,3,0,52,60,5,11,0,0,53,54,3,6,3,0,54,55,5,12,0,0,55,
  	56,3,2,1,0,56,57,5,13,0,0,57,59,1,0,0,0,58,53,1,0,0,0,59,62,1,0,0,0,60,
  	58,1,0,0,0,60,61,1,0,0,0,61,63,1,0,0,0,62,60,1,0,0,0,63,64,5,14,0,0,64,
  	65,5,12,0,0,65,66,3,2,1,0,66,118,1,0,0,0,67,118,5,15,0,0,68,69,5,16,0,
  	0,69,70,5,10,0,0,70,71,3,8,4,0,71,72,5,17,0,0,72,81,3,2,1,0,73,74,5,18,
  	0,0,74,75,5,10,0,0,75,76,3,8,4,0,76,77,5,17,0,0,77,78,3,2,1,0,78,80,1,
  	0,0,0,79,73,1,0,0,0,80,83,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,84,1,
  	0,0,0,83,81,1,0,0,0,84,85,5,19,0,0,85,86,3,2,1,0,86,118,1,0,0,0,87,88,
  	5,20,0,0,88,89,5,10,0,0,89,90,3,8,4,0,90,91,5,17,0,0,91,92,5,21,0,0,92,
  	93,3,2,1,0,93,118,1,0,0,0,94,95,5,22,0,0,95,104,5,10,0,0,96,101,3,4,2,
  	0,97,98,5,2,0,0,98,100,3,4,2,0,99,97,1,0,0,0,100,103,1,0,0,0,101,99,1,
  	0,0,0,101,102,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,104,96,1,0,0,0,
  	104,105,1,0,0,0,105,106,1,0,0,0,106,118,5,17,0,0,107,111,5,23,0,0,108,
  	109,3,2,1,0,109,110,5,1,0,0,110,112,1,0,0,0,111,108,1,0,0,0,112,113,1,
  	0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,116,5,24,0,
  	0,116,118,1,0,0,0,117,19,1,0,0,0,117,36,1,0,0,0,117,44,1,0,0,0,117,49,
  	1,0,0,0,117,67,1,0,0,0,117,68,1,0,0,0,117,87,1,0,0,0,117,94,1,0,0,0,117,
  	107,1,0,0,0,118,3,1,0,0,0,119,123,3,6,3,0,120,123,3,8,4,0,121,123,5,52,
  	0,0,122,119,1,0,0,0,122,120,1,0,0,0,122,121,1,0,0,0,123,5,1,0,0,0,124,
  	125,6,3,-1,0,125,168,5,51,0,0,126,168,5,48,0,0,127,168,5,49,0,0,128,168,
  	5,25,0,0,129,168,5,50,0,0,130,133,5,10,0,0,131,134,3,6,3,0,132,134,5,
  	26,0,0,133,131,1,0,0,0,133,132,1,0,0,0,134,135,1,0,0,0,135,138,5,27,0,
  	0,136,139,3,6,3,0,137,139,5,26,0,0,138,136,1,0,0,0,138,137,1,0,0,0,139,
  	140,1,0,0,0,140,143,7,0,0,0,141,144,3,6,3,0,142,144,5,26,0,0,143,141,
  	1,0,0,0,143,142,1,0,0,0,144,145,1,0,0,0,145,148,5,27,0,0,146,149,3,6,
  	3,0,147,149,5,26,0,0,148,146,1,0,0,0,148,147,1,0,0,0,149,150,1,0,0,0,
  	150,168,5,17,0,0,151,152,5,30,0,0,152,155,3,6,3,0,153,154,5,14,0,0,154,
  	156,3,6,3,0,155,153,1,0,0,0,155,156,1,0,0,0,156,168,1,0,0,0,157,159,5,
  	31,0,0,158,160,3,6,3,0,159,158,1,0,0,0,159,160,1,0,0,0,160,161,1,0,0,
  	0,161,162,5,32,0,0,162,168,3,6,3,5,163,164,5,10,0,0,164,165,3,6,3,0,165,
  	166,5,17,0,0,166,168,1,0,0,0,167,124,1,0,0,0,167,126,1,0,0,0,167,127,
  	1,0,0,0,167,128,1,0,0,0,167,129,1,0,0,0,167,130,1,0,0,0,167,151,1,0,0,
  	0,167,157,1,0,0,0,167,163,1,0,0,0,168,180,1,0,0,0,169,170,10,4,0,0,170,
  	171,5,33,0,0,171,179,3,6,3,5,172,173,10,3,0,0,173,174,7,1,0,0,174,179,
  	3,6,3,4,175,176,10,2,0,0,176,177,7,2,0,0,177,179,3,6,3,3,178,169,1,0,
  	0,0,178,172,1,0,0,0,178,175,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,
  	181,1,0,0,0,181,7,1,0,0,0,182,180,1,0,0,0,183,184,6,4,-1,0,184,216,5,
  	47,0,0,185,186,3,6,3,0,186,187,5,37,0,0,187,188,3,6,3,0,188,216,1,0,0,
  	0,189,190,3,6,3,0,190,191,5,38,0,0,191,192,3,6,3,0,192,216,1,0,0,0,193,
  	194,3,6,3,0,194,195,5,39,0,0,195,196,3,6,3,0,196,216,1,0,0,0,197,198,
  	3,6,3,0,198,199,5,40,0,0,199,200,3,6,3,0,200,216,1,0,0,0,201,202,3,6,
  	3,0,202,203,5,41,0,0,203,204,3,6,3,0,204,216,1,0,0,0,205,206,3,6,3,0,
  	206,207,5,42,0,0,207,208,3,6,3,0,208,216,1,0,0,0,209,210,5,43,0,0,210,
  	216,3,8,4,5,211,212,5,10,0,0,212,213,3,8,4,0,213,214,5,17,0,0,214,216,
  	1,0,0,0,215,183,1,0,0,0,215,185,1,0,0,0,215,189,1,0,0,0,215,193,1,0,0,
  	0,215,197,1,0,0,0,215,201,1,0,0,0,215,205,1,0,0,0,215,209,1,0,0,0,215,
  	211,1,0,0,0,216,228,1,0,0,0,217,218,10,4,0,0,218,219,5,44,0,0,219,227,
  	3,8,4,5,220,221,10,3,0,0,221,222,5,45,0,0,222,227,3,8,4,4,223,224,10,
  	2,0,0,224,225,5,46,0,0,225,227,3,8,4,3,226,217,1,0,0,0,226,220,1,0,0,
  	0,226,223,1,0,0,0,227,230,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,
  	9,1,0,0,0,230,228,1,0,0,0,22,15,24,33,60,81,101,104,113,117,122,133,138,
  	143,148,155,159,167,178,180,215,226,228
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
      ((1ULL << _la) & 1125899920573072) != 0));
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
//----------------- LoopWhileContext ------------------------------------------------------------------

MattyParser::BooleanoContext* MattyParser::LoopWhileContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

MattyParser::ComandoContext* MattyParser::LoopWhileContext::comando() {
  return getRuleContext<MattyParser::ComandoContext>(0);
}

MattyParser::LoopWhileContext::LoopWhileContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::LoopWhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopWhile(this);
}
void MattyParser::LoopWhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopWhile(this);
}

std::any MattyParser::LoopWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitLoopWhile(this);
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
//----------------- BlocoContext ------------------------------------------------------------------

std::vector<MattyParser::ComandoContext *> MattyParser::BlocoContext::comando() {
  return getRuleContexts<MattyParser::ComandoContext>();
}

MattyParser::ComandoContext* MattyParser::BlocoContext::comando(size_t i) {
  return getRuleContext<MattyParser::ComandoContext>(i);
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
//----------------- LoopForContext ------------------------------------------------------------------

tree::TerminalNode* MattyParser::LoopForContext::ID() {
  return getToken(MattyParser::ID, 0);
}

std::vector<MattyParser::ExpressaoContext *> MattyParser::LoopForContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::LoopForContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::ComandoContext* MattyParser::LoopForContext::comando() {
  return getRuleContext<MattyParser::ComandoContext>(0);
}

MattyParser::LoopForContext::LoopForContext(ComandoContext *ctx) { copyFrom(ctx); }

void MattyParser::LoopForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopFor(this);
}
void MattyParser::LoopForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopFor(this);
}

std::any MattyParser::LoopForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitLoopFor(this);
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
    setState(117);
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
        _localctx = _tracker.createInstance<MattyParser::LoopForContext>(_localctx);
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
        setState(60);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4222127905440768) != 0)) {
          setState(53);
          expressao(0);
          setState(54);
          match(MattyParser::T__11);
          setState(55);
          comando();
          setState(56);
          match(MattyParser::T__12);
          setState(62);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(63);
        match(MattyParser::T__13);
        setState(64);
        match(MattyParser::T__11);
        setState(65);
        comando();
        break;
      }

      case MattyParser::T__14: {
        _localctx = _tracker.createInstance<MattyParser::SkipContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(67);
        match(MattyParser::T__14);
        break;
      }

      case MattyParser::T__15: {
        _localctx = _tracker.createInstance<MattyParser::SeContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(68);
        match(MattyParser::T__15);
        setState(69);
        match(MattyParser::T__9);
        setState(70);
        booleano(0);
        setState(71);
        match(MattyParser::T__16);
        setState(72);
        comando();
        setState(81);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__17) {
          setState(73);
          match(MattyParser::T__17);
          setState(74);
          match(MattyParser::T__9);
          setState(75);
          booleano(0);
          setState(76);
          match(MattyParser::T__16);
          setState(77);
          comando();
          setState(83);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(84);
        match(MattyParser::T__18);
        setState(85);
        comando();
        break;
      }

      case MattyParser::T__19: {
        _localctx = _tracker.createInstance<MattyParser::LoopWhileContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(87);
        match(MattyParser::T__19);
        setState(88);
        match(MattyParser::T__9);
        setState(89);
        booleano(0);
        setState(90);
        match(MattyParser::T__16);
        setState(91);
        match(MattyParser::T__20);
        setState(92);
        comando();
        break;
      }

      case MattyParser::T__21: {
        _localctx = _tracker.createInstance<MattyParser::ExibaContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(94);
        match(MattyParser::T__21);
        setState(95);
        match(MattyParser::T__9);
        setState(104);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 8875261114188800) != 0)) {
          setState(96);
          valor();
          setState(101);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == MattyParser::T__1) {
            setState(97);
            match(MattyParser::T__1);
            setState(98);
            valor();
            setState(103);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(106);
        match(MattyParser::T__16);
        break;
      }

      case MattyParser::T__22: {
        _localctx = _tracker.createInstance<MattyParser::BlocoContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(107);
        match(MattyParser::T__22);
        setState(111); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(108);
          comando();
          setState(109);
          match(MattyParser::T__0);
          setState(113); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1125899920573072) != 0));
        setState(115);
        match(MattyParser::T__23);
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
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(119);
      expressao(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      booleano(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(121);
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
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InteiroContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(125);
      match(MattyParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DecimalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(126);
      match(MattyParser::DECIMAL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FracaoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(127);
      match(MattyParser::FRACTION);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LeiaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(128);
      match(MattyParser::T__24);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(129);
      match(MattyParser::ID);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<RegraDeTresContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(130);
      match(MattyParser::T__9);
      setState(133);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__24:
        case MattyParser::T__29:
        case MattyParser::T__30:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(131);
          expressao(0);
          break;
        }

        case MattyParser::T__25: {
          setState(132);
          match(MattyParser::T__25);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(135);
      match(MattyParser::T__26);
      setState(138);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__24:
        case MattyParser::T__29:
        case MattyParser::T__30:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(136);
          expressao(0);
          break;
        }

        case MattyParser::T__25: {
          setState(137);
          match(MattyParser::T__25);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(140);
      _la = _input->LA(1);
      if (!(_la == MattyParser::T__27

      || _la == MattyParser::T__28)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(143);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__24:
        case MattyParser::T__29:
        case MattyParser::T__30:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(141);
          expressao(0);
          break;
        }

        case MattyParser::T__25: {
          setState(142);
          match(MattyParser::T__25);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(145);
      match(MattyParser::T__26);
      setState(148);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MattyParser::T__9:
        case MattyParser::T__24:
        case MattyParser::T__29:
        case MattyParser::T__30:
        case MattyParser::DECIMAL:
        case MattyParser::FRACTION:
        case MattyParser::ID:
        case MattyParser::INT: {
          setState(146);
          expressao(0);
          break;
        }

        case MattyParser::T__25: {
          setState(147);
          match(MattyParser::T__25);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(150);
      match(MattyParser::T__16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<LogaritmoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(151);
      match(MattyParser::T__29);
      setState(152);
      expressao(0);
      setState(155);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(153);
        match(MattyParser::T__13);
        setState(154);
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
      setState(157);
      match(MattyParser::T__30);
      setState(159);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4222127905440768) != 0)) {
        setState(158);
        expressao(0);
      }
      setState(161);
      match(MattyParser::T__31);
      setState(162);
      expressao(5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PrioridadeDeOperacoesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(163);
      match(MattyParser::T__9);
      setState(164);
      expressao(0);
      setState(165);
      match(MattyParser::T__16);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(178);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PotenciacaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(169);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(170);
          match(MattyParser::T__32);
          setState(171);
          expressao(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicacaoOuDivisaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(172);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(173);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 55834574848) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(174);
          expressao(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SomaOuSubtracaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(175);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(176);
          _la = _input->LA(1);
          if (!(_la == MattyParser::T__27

          || _la == MattyParser::T__35)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(177);
          expressao(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(184);
      match(MattyParser::BOOLEANO);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      expressao(0);
      setState(186);
      match(MattyParser::T__36);
      setState(187);
      expressao(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MenorOuIgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(189);
      expressao(0);
      setState(190);
      match(MattyParser::T__37);
      setState(191);
      expressao(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MenorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(193);
      expressao(0);
      setState(194);
      match(MattyParser::T__38);
      setState(195);
      expressao(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MaiorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      expressao(0);
      setState(198);
      match(MattyParser::T__39);
      setState(199);
      expressao(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<MaiorOuIgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      expressao(0);
      setState(202);
      match(MattyParser::T__40);
      setState(203);
      expressao(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<DiferenteContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      expressao(0);
      setState(206);
      match(MattyParser::T__41);
      setState(207);
      expressao(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NaoLogicoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(209);
      match(MattyParser::T__42);
      setState(210);
      booleano(5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PrioridadeDeOperacoesLogicasContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(211);
      match(MattyParser::T__9);
      setState(212);
      booleano(0);
      setState(213);
      match(MattyParser::T__16);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(228);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(226);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ELogicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(217);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(218);
          match(MattyParser::T__43);
          setState(219);
          booleano(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OuLogicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(220);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(221);
          match(MattyParser::T__44);
          setState(222);
          booleano(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OuExclusivoLogicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(223);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(224);
          match(MattyParser::T__45);
          setState(225);
          booleano(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
