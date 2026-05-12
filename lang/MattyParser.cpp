
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
      "programa", "seqComando", "comando", "valor", "expressao", "booleano"
    },
    std::vector<std::string>{
      "", "';'", "','", "'='", "'for'", "'to'", "'at'", "'make'", "'times'", 
      "'choose'", "'('", "'):'", "':'", "'_'", "'skip'", "'if'", "')'", 
      "'elif'", "'else'", "'while'", "'do'", "'print'", "'{'", "'}'", "'read'", 
      "'\\u00B4'", "'x'", "'|'", "'-'", "'~'", "'log'", "'\\'", "'/'", "'^'", 
      "'*'", "'//'", "'+'", "'=='", "'<='", "'<'", "'>'", "'>='", "'!='", 
      "'!'", "'and'", "'or'", "'xor'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "BOOLEANO", "FRACTION", 
      "ID", "INT", "STRING", "Comentario", "Espaco"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,53,240,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,25,8,1,10,1,12,1,28,
  	9,1,1,2,1,2,1,2,5,2,33,8,2,10,2,12,2,36,9,2,1,2,1,2,1,2,1,2,5,2,42,8,
  	2,10,2,12,2,45,9,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,68,8,2,10,2,12,2,71,9,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,89,8,2,10,
  	2,12,2,92,9,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,5,2,109,8,2,10,2,12,2,112,9,2,3,2,114,8,2,1,2,1,2,1,2,1,2,1,2,3,2,
  	121,8,2,1,3,1,3,1,3,3,3,126,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,136,
  	8,4,1,4,3,4,139,8,4,1,4,1,4,1,4,3,4,144,8,4,1,4,3,4,147,8,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,164,8,4,1,4,1,4,
  	3,4,168,8,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,176,8,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,5,4,187,8,4,10,4,12,4,190,9,4,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,224,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,5,5,235,8,5,10,5,12,5,238,9,5,1,5,0,2,8,10,6,0,2,4,6,8,10,0,
  	3,1,0,28,29,2,0,32,32,34,35,2,0,28,28,36,36,279,0,13,1,0,0,0,2,19,1,0,
  	0,0,4,120,1,0,0,0,6,125,1,0,0,0,8,175,1,0,0,0,10,223,1,0,0,0,12,14,3,
  	2,1,0,13,12,1,0,0,0,14,15,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,17,1,
  	0,0,0,17,18,5,0,0,1,18,1,1,0,0,0,19,20,3,4,2,0,20,26,5,1,0,0,21,22,3,
  	4,2,0,22,23,5,1,0,0,23,25,1,0,0,0,24,21,1,0,0,0,25,28,1,0,0,0,26,24,1,
  	0,0,0,26,27,1,0,0,0,27,3,1,0,0,0,28,26,1,0,0,0,29,34,5,49,0,0,30,31,5,
  	2,0,0,31,33,5,49,0,0,32,30,1,0,0,0,33,36,1,0,0,0,34,32,1,0,0,0,34,35,
  	1,0,0,0,35,37,1,0,0,0,36,34,1,0,0,0,37,38,5,3,0,0,38,43,3,6,3,0,39,40,
  	5,2,0,0,40,42,3,6,3,0,41,39,1,0,0,0,42,45,1,0,0,0,43,41,1,0,0,0,43,44,
  	1,0,0,0,44,121,1,0,0,0,45,43,1,0,0,0,46,47,5,4,0,0,47,48,5,49,0,0,48,
  	49,5,5,0,0,49,50,3,8,4,0,50,51,5,6,0,0,51,52,3,8,4,0,52,53,3,4,2,0,53,
  	121,1,0,0,0,54,55,5,7,0,0,55,56,3,8,4,0,56,57,5,8,0,0,57,58,3,4,2,0,58,
  	121,1,0,0,0,59,60,5,9,0,0,60,61,5,10,0,0,61,62,3,8,4,0,62,69,5,11,0,0,
  	63,64,3,8,4,0,64,65,5,12,0,0,65,66,3,4,2,0,66,68,1,0,0,0,67,63,1,0,0,
  	0,68,71,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,72,1,0,0,0,71,69,1,0,0,
  	0,72,73,5,13,0,0,73,74,5,12,0,0,74,75,3,4,2,0,75,121,1,0,0,0,76,121,5,
  	14,0,0,77,78,5,15,0,0,78,79,5,10,0,0,79,80,3,10,5,0,80,81,5,16,0,0,81,
  	90,3,4,2,0,82,83,5,17,0,0,83,84,5,10,0,0,84,85,3,10,5,0,85,86,5,16,0,
  	0,86,87,3,4,2,0,87,89,1,0,0,0,88,82,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,
  	0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,0,0,0,93,94,5,18,0,0,94,95,3,4,
  	2,0,95,121,1,0,0,0,96,97,5,19,0,0,97,98,5,10,0,0,98,99,3,10,5,0,99,100,
  	5,16,0,0,100,101,5,20,0,0,101,102,3,4,2,0,102,121,1,0,0,0,103,104,5,21,
  	0,0,104,113,5,10,0,0,105,110,3,6,3,0,106,107,5,2,0,0,107,109,3,6,3,0,
  	108,106,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,114,
  	1,0,0,0,112,110,1,0,0,0,113,105,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,
  	0,115,121,5,16,0,0,116,117,5,22,0,0,117,118,3,2,1,0,118,119,5,23,0,0,
  	119,121,1,0,0,0,120,29,1,0,0,0,120,46,1,0,0,0,120,54,1,0,0,0,120,59,1,
  	0,0,0,120,76,1,0,0,0,120,77,1,0,0,0,120,96,1,0,0,0,120,103,1,0,0,0,120,
  	116,1,0,0,0,121,5,1,0,0,0,122,126,3,8,4,0,123,126,3,10,5,0,124,126,5,
  	51,0,0,125,122,1,0,0,0,125,123,1,0,0,0,125,124,1,0,0,0,126,7,1,0,0,0,
  	127,128,6,4,-1,0,128,176,5,50,0,0,129,176,5,48,0,0,130,176,5,24,0,0,131,
  	176,5,49,0,0,132,138,5,25,0,0,133,139,3,8,4,0,134,136,3,8,4,0,135,134,
  	1,0,0,0,135,136,1,0,0,0,136,137,1,0,0,0,137,139,5,26,0,0,138,133,1,0,
  	0,0,138,135,1,0,0,0,139,140,1,0,0,0,140,146,5,3,0,0,141,147,3,8,4,0,142,
  	144,3,8,4,0,143,142,1,0,0,0,143,144,1,0,0,0,144,145,1,0,0,0,145,147,5,
  	26,0,0,146,141,1,0,0,0,146,143,1,0,0,0,147,148,1,0,0,0,148,176,5,25,0,
  	0,149,150,5,10,0,0,150,151,3,8,4,0,151,152,5,27,0,0,152,153,3,8,4,0,153,
  	154,7,0,0,0,154,155,3,8,4,0,155,156,5,27,0,0,156,157,3,8,4,0,157,158,
  	5,16,0,0,158,176,1,0,0,0,159,160,5,30,0,0,160,163,3,8,4,0,161,162,5,13,
  	0,0,162,164,3,8,4,0,163,161,1,0,0,0,163,164,1,0,0,0,164,176,1,0,0,0,165,
  	167,5,31,0,0,166,168,3,8,4,0,167,166,1,0,0,0,167,168,1,0,0,0,168,169,
  	1,0,0,0,169,170,5,32,0,0,170,176,3,8,4,5,171,172,5,10,0,0,172,173,3,8,
  	4,0,173,174,5,16,0,0,174,176,1,0,0,0,175,127,1,0,0,0,175,129,1,0,0,0,
  	175,130,1,0,0,0,175,131,1,0,0,0,175,132,1,0,0,0,175,149,1,0,0,0,175,159,
  	1,0,0,0,175,165,1,0,0,0,175,171,1,0,0,0,176,188,1,0,0,0,177,178,10,4,
  	0,0,178,179,5,33,0,0,179,187,3,8,4,5,180,181,10,3,0,0,181,182,7,1,0,0,
  	182,187,3,8,4,4,183,184,10,2,0,0,184,185,7,2,0,0,185,187,3,8,4,3,186,
  	177,1,0,0,0,186,180,1,0,0,0,186,183,1,0,0,0,187,190,1,0,0,0,188,186,1,
  	0,0,0,188,189,1,0,0,0,189,9,1,0,0,0,190,188,1,0,0,0,191,192,6,5,-1,0,
  	192,224,5,47,0,0,193,194,3,8,4,0,194,195,5,37,0,0,195,196,3,8,4,0,196,
  	224,1,0,0,0,197,198,3,8,4,0,198,199,5,38,0,0,199,200,3,8,4,0,200,224,
  	1,0,0,0,201,202,3,8,4,0,202,203,5,39,0,0,203,204,3,8,4,0,204,224,1,0,
  	0,0,205,206,3,8,4,0,206,207,5,40,0,0,207,208,3,8,4,0,208,224,1,0,0,0,
  	209,210,3,8,4,0,210,211,5,41,0,0,211,212,3,8,4,0,212,224,1,0,0,0,213,
  	214,3,8,4,0,214,215,5,42,0,0,215,216,3,8,4,0,216,224,1,0,0,0,217,218,
  	5,43,0,0,218,224,3,10,5,5,219,220,5,10,0,0,220,221,3,10,5,0,221,222,5,
  	16,0,0,222,224,1,0,0,0,223,191,1,0,0,0,223,193,1,0,0,0,223,197,1,0,0,
  	0,223,201,1,0,0,0,223,205,1,0,0,0,223,209,1,0,0,0,223,213,1,0,0,0,223,
  	217,1,0,0,0,223,219,1,0,0,0,224,236,1,0,0,0,225,226,10,4,0,0,226,227,
  	5,44,0,0,227,235,3,10,5,5,228,229,10,3,0,0,229,230,5,45,0,0,230,235,3,
  	10,5,4,231,232,10,2,0,0,232,233,5,46,0,0,233,235,3,10,5,3,234,225,1,0,
  	0,0,234,228,1,0,0,0,234,231,1,0,0,0,235,238,1,0,0,0,236,234,1,0,0,0,236,
  	237,1,0,0,0,237,11,1,0,0,0,238,236,1,0,0,0,22,15,26,34,43,69,90,110,113,
  	120,125,135,138,143,146,163,167,175,186,188,223,234,236
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

std::vector<MattyParser::SeqComandoContext *> MattyParser::ProgramaContext::seqComando() {
  return getRuleContexts<MattyParser::SeqComandoContext>();
}

MattyParser::SeqComandoContext* MattyParser::ProgramaContext::seqComando(size_t i) {
  return getRuleContext<MattyParser::SeqComandoContext>(i);
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
      setState(12);
      seqComando();
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

//----------------- SeqComandoContext ------------------------------------------------------------------

MattyParser::SeqComandoContext::SeqComandoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MattyParser::ComandoContext *> MattyParser::SeqComandoContext::comando() {
  return getRuleContexts<MattyParser::ComandoContext>();
}

MattyParser::ComandoContext* MattyParser::SeqComandoContext::comando(size_t i) {
  return getRuleContext<MattyParser::ComandoContext>(i);
}


size_t MattyParser::SeqComandoContext::getRuleIndex() const {
  return MattyParser::RuleSeqComando;
}

void MattyParser::SeqComandoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqComando(this);
}

void MattyParser::SeqComandoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqComando(this);
}


std::any MattyParser::SeqComandoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitSeqComando(this);
  else
    return visitor->visitChildren(this);
}

MattyParser::SeqComandoContext* MattyParser::seqComando() {
  SeqComandoContext *_localctx = _tracker.createInstance<SeqComandoContext>(_ctx, getState());
  enterRule(_localctx, 2, MattyParser::RuleSeqComando);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(19);
    comando();
    setState(20);
    match(MattyParser::T__0);
    setState(26);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(21);
        comando();
        setState(22);
        match(MattyParser::T__0); 
      }
      setState(28);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
   
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

MattyParser::SeqComandoContext* MattyParser::BlocoContext::seqComando() {
  return getRuleContext<MattyParser::SeqComandoContext>(0);
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
  enterRule(_localctx, 4, MattyParser::RuleComando);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MattyParser::ID: {
        _localctx = _tracker.createInstance<MattyParser::AtribuicaoContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(29);
        match(MattyParser::ID);
        setState(34);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__1) {
          setState(30);
          match(MattyParser::T__1);
          setState(31);
          match(MattyParser::ID);
          setState(36);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(37);
        match(MattyParser::T__2);
        setState(38);
        valor();
        setState(43);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__1) {
          setState(39);
          match(MattyParser::T__1);
          setState(40);
          valor();
          setState(45);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case MattyParser::T__3: {
        _localctx = _tracker.createInstance<MattyParser::LoopContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(46);
        match(MattyParser::T__3);
        setState(47);
        match(MattyParser::ID);
        setState(48);
        match(MattyParser::T__4);
        setState(49);
        expressao(0);
        setState(50);
        match(MattyParser::T__5);
        setState(51);
        expressao(0);
        setState(52);
        comando();
        break;
      }

      case MattyParser::T__6: {
        _localctx = _tracker.createInstance<MattyParser::RepitaContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(54);
        match(MattyParser::T__6);
        setState(55);
        expressao(0);
        setState(56);
        match(MattyParser::T__7);
        setState(57);
        comando();
        break;
      }

      case MattyParser::T__8: {
        _localctx = _tracker.createInstance<MattyParser::EscolhaContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(59);
        match(MattyParser::T__8);
        setState(60);
        match(MattyParser::T__9);
        setState(61);
        expressao(0);
        setState(62);
        match(MattyParser::T__10);
        setState(69);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1970328108532736) != 0)) {
          setState(63);
          expressao(0);
          setState(64);
          match(MattyParser::T__11);
          setState(65);
          comando();
          setState(71);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(72);
        match(MattyParser::T__12);
        setState(73);
        match(MattyParser::T__11);
        setState(74);
        comando();
        break;
      }

      case MattyParser::T__13: {
        _localctx = _tracker.createInstance<MattyParser::SkipContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(76);
        match(MattyParser::T__13);
        break;
      }

      case MattyParser::T__14: {
        _localctx = _tracker.createInstance<MattyParser::SeContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(77);
        match(MattyParser::T__14);
        setState(78);
        match(MattyParser::T__9);
        setState(79);
        booleano(0);
        setState(80);
        match(MattyParser::T__15);
        setState(81);
        comando();
        setState(90);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MattyParser::T__16) {
          setState(82);
          match(MattyParser::T__16);
          setState(83);
          match(MattyParser::T__9);
          setState(84);
          booleano(0);
          setState(85);
          match(MattyParser::T__15);
          setState(86);
          comando();
          setState(92);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(93);
        match(MattyParser::T__17);
        setState(94);
        comando();
        break;
      }

      case MattyParser::T__18: {
        _localctx = _tracker.createInstance<MattyParser::LoopContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(96);
        match(MattyParser::T__18);
        setState(97);
        match(MattyParser::T__9);
        setState(98);
        booleano(0);
        setState(99);
        match(MattyParser::T__15);
        setState(100);
        match(MattyParser::T__19);
        setState(101);
        comando();
        break;
      }

      case MattyParser::T__20: {
        _localctx = _tracker.createInstance<MattyParser::ExibaContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(103);
        match(MattyParser::T__20);
        setState(104);
        match(MattyParser::T__9);
        setState(113);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4371661503595520) != 0)) {
          setState(105);
          valor();
          setState(110);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == MattyParser::T__1) {
            setState(106);
            match(MattyParser::T__1);
            setState(107);
            valor();
            setState(112);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(115);
        match(MattyParser::T__15);
        break;
      }

      case MattyParser::T__21: {
        _localctx = _tracker.createInstance<MattyParser::BlocoContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(116);
        match(MattyParser::T__21);
        setState(117);
        seqComando();
        setState(118);
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
  enterRule(_localctx, 6, MattyParser::RuleValor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      expressao(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      booleano(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
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
//----------------- EquacaoContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::EquacaoContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::EquacaoContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::EquacaoContext::EquacaoContext(ExpressaoContext *ctx) { copyFrom(ctx); }

void MattyParser::EquacaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquacao(this);
}
void MattyParser::EquacaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquacao(this);
}

std::any MattyParser::EquacaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitEquacao(this);
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
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, MattyParser::RuleExpressao, precedence);

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
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InteiroContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(128);
      match(MattyParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FracaoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(129);
      match(MattyParser::FRACTION);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LeiaContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(130);
      match(MattyParser::T__23);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(131);
      match(MattyParser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<EquacaoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(132);
      match(MattyParser::T__24);
      setState(138);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(133);
        expressao(0);
        break;
      }

      case 2: {
        setState(135);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1970328108532736) != 0)) {
          setState(134);
          expressao(0);
        }
        setState(137);
        match(MattyParser::T__25);
        break;
      }

      default:
        break;
      }
      setState(140);
      match(MattyParser::T__2);
      setState(146);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(141);
        expressao(0);
        break;
      }

      case 2: {
        setState(143);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1970328108532736) != 0)) {
          setState(142);
          expressao(0);
        }
        setState(145);
        match(MattyParser::T__25);
        break;
      }

      default:
        break;
      }
      setState(148);
      match(MattyParser::T__24);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<RegraDeTresContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(149);
      match(MattyParser::T__9);
      setState(150);
      expressao(0);
      setState(151);
      match(MattyParser::T__26);
      setState(152);
      expressao(0);
      setState(153);
      _la = _input->LA(1);
      if (!(_la == MattyParser::T__27

      || _la == MattyParser::T__28)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(154);
      expressao(0);
      setState(155);
      match(MattyParser::T__26);
      setState(156);
      expressao(0);
      setState(157);
      match(MattyParser::T__15);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<LogaritmoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(159);
      match(MattyParser::T__29);
      setState(160);
      expressao(0);
      setState(163);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(161);
        match(MattyParser::T__12);
        setState(162);
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
      setState(165);
      match(MattyParser::T__30);
      setState(167);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1970328108532736) != 0)) {
        setState(166);
        expressao(0);
      }
      setState(169);
      match(MattyParser::T__31);
      setState(170);
      expressao(5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PrioridadeDeOperacoesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(171);
      match(MattyParser::T__9);
      setState(172);
      expressao(0);
      setState(173);
      match(MattyParser::T__15);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(188);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(186);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PotenciacaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(177);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(178);
          match(MattyParser::T__32);
          setState(179);
          expressao(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicacaoOuDivisaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(180);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(181);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 55834574848) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(182);
          expressao(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SomaOuSubtracaoContext>(_tracker.createInstance<ExpressaoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpressao);
          setState(183);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(184);
          _la = _input->LA(1);
          if (!(_la == MattyParser::T__27

          || _la == MattyParser::T__35)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(185);
          expressao(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(190);
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

//----------------- Nao_logicoContext ------------------------------------------------------------------

MattyParser::BooleanoContext* MattyParser::Nao_logicoContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

MattyParser::Nao_logicoContext::Nao_logicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::Nao_logicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNao_logico(this);
}
void MattyParser::Nao_logicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNao_logico(this);
}

std::any MattyParser::Nao_logicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitNao_logico(this);
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
//----------------- Maior_ou_igualContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::Maior_ou_igualContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::Maior_ou_igualContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::Maior_ou_igualContext::Maior_ou_igualContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::Maior_ou_igualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaior_ou_igual(this);
}
void MattyParser::Maior_ou_igualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaior_ou_igual(this);
}

std::any MattyParser::Maior_ou_igualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMaior_ou_igual(this);
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
//----------------- E_logicoContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::E_logicoContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::E_logicoContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

MattyParser::E_logicoContext::E_logicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::E_logicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterE_logico(this);
}
void MattyParser::E_logicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitE_logico(this);
}

std::any MattyParser::E_logicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitE_logico(this);
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
//----------------- Menor_ou_igualContext ------------------------------------------------------------------

std::vector<MattyParser::ExpressaoContext *> MattyParser::Menor_ou_igualContext::expressao() {
  return getRuleContexts<MattyParser::ExpressaoContext>();
}

MattyParser::ExpressaoContext* MattyParser::Menor_ou_igualContext::expressao(size_t i) {
  return getRuleContext<MattyParser::ExpressaoContext>(i);
}

MattyParser::Menor_ou_igualContext::Menor_ou_igualContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::Menor_ou_igualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMenor_ou_igual(this);
}
void MattyParser::Menor_ou_igualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMenor_ou_igual(this);
}

std::any MattyParser::Menor_ou_igualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitMenor_ou_igual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Ou_logicoContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::Ou_logicoContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::Ou_logicoContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

MattyParser::Ou_logicoContext::Ou_logicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::Ou_logicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOu_logico(this);
}
void MattyParser::Ou_logicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOu_logico(this);
}

std::any MattyParser::Ou_logicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitOu_logico(this);
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
//----------------- Prioridade_de_operacoes_logicasContext ------------------------------------------------------------------

MattyParser::BooleanoContext* MattyParser::Prioridade_de_operacoes_logicasContext::booleano() {
  return getRuleContext<MattyParser::BooleanoContext>(0);
}

MattyParser::Prioridade_de_operacoes_logicasContext::Prioridade_de_operacoes_logicasContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::Prioridade_de_operacoes_logicasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrioridade_de_operacoes_logicas(this);
}
void MattyParser::Prioridade_de_operacoes_logicasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrioridade_de_operacoes_logicas(this);
}

std::any MattyParser::Prioridade_de_operacoes_logicasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitPrioridade_de_operacoes_logicas(this);
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
//----------------- Ou_exclusivo_logicoContext ------------------------------------------------------------------

std::vector<MattyParser::BooleanoContext *> MattyParser::Ou_exclusivo_logicoContext::booleano() {
  return getRuleContexts<MattyParser::BooleanoContext>();
}

MattyParser::BooleanoContext* MattyParser::Ou_exclusivo_logicoContext::booleano(size_t i) {
  return getRuleContext<MattyParser::BooleanoContext>(i);
}

MattyParser::Ou_exclusivo_logicoContext::Ou_exclusivo_logicoContext(BooleanoContext *ctx) { copyFrom(ctx); }

void MattyParser::Ou_exclusivo_logicoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOu_exclusivo_logico(this);
}
void MattyParser::Ou_exclusivo_logicoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MattyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOu_exclusivo_logico(this);
}

std::any MattyParser::Ou_exclusivo_logicoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MattyVisitor*>(visitor))
    return parserVisitor->visitOu_exclusivo_logico(this);
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
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, MattyParser::RuleBooleano, precedence);

    

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
    setState(223);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(192);
      match(MattyParser::BOOLEANO);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IgualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(193);
      expressao(0);
      setState(194);
      match(MattyParser::T__36);
      setState(195);
      expressao(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Menor_ou_igualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      expressao(0);
      setState(198);
      match(MattyParser::T__37);
      setState(199);
      expressao(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MenorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      expressao(0);
      setState(202);
      match(MattyParser::T__38);
      setState(203);
      expressao(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MaiorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      expressao(0);
      setState(206);
      match(MattyParser::T__39);
      setState(207);
      expressao(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Maior_ou_igualContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(209);
      expressao(0);
      setState(210);
      match(MattyParser::T__40);
      setState(211);
      expressao(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<DiferenteContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(213);
      expressao(0);
      setState(214);
      match(MattyParser::T__41);
      setState(215);
      expressao(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<Nao_logicoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      match(MattyParser::T__42);
      setState(218);
      booleano(5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Prioridade_de_operacoes_logicasContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      match(MattyParser::T__9);
      setState(220);
      booleano(0);
      setState(221);
      match(MattyParser::T__15);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(236);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(234);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<E_logicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(225);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(226);
          match(MattyParser::T__43);
          setState(227);
          booleano(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Ou_logicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(228);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(229);
          match(MattyParser::T__44);
          setState(230);
          booleano(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Ou_exclusivo_logicoContext>(_tracker.createInstance<BooleanoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleano);
          setState(231);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(232);
          match(MattyParser::T__45);
          setState(233);
          booleano(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(238);
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
    case 4: return expressaoSempred(antlrcpp::downCast<ExpressaoContext *>(context), predicateIndex);
    case 5: return booleanoSempred(antlrcpp::downCast<BooleanoContext *>(context), predicateIndex);

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
