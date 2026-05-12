// Generated from c:/Users/favas/Desktop/linguagem-Matty/lang/Matty.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class MattyParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, BOOLEANO=47, FRACTION=48, ID=49, INT=50, STRING=51, Comentario=52, 
		Espaco=53;
	public static final int
		RULE_programa = 0, RULE_seqComando = 1, RULE_comando = 2, RULE_valor = 3, 
		RULE_expressao = 4, RULE_booleano = 5;
	private static String[] makeRuleNames() {
		return new String[] {
			"programa", "seqComando", "comando", "valor", "expressao", "booleano"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "','", "'='", "'for'", "'to'", "'at'", "'make'", "'times'", 
			"'choose'", "'('", "'):'", "':'", "'_'", "'skip'", "'if'", "')'", "'elif'", 
			"'else'", "'while'", "'do'", "'print'", "'{'", "'}'", "'read'", "'\\u00B4'", 
			"'x'", "'|'", "'-'", "'~'", "'log'", "'\\'", "'/'", "'^'", "'*'", "'//'", 
			"'+'", "'=='", "'<='", "'<'", "'>'", "'>='", "'!='", "'!'", "'and'", 
			"'or'", "'xor'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, "BOOLEANO", 
			"FRACTION", "ID", "INT", "STRING", "Comentario", "Espaco"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Matty.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public MattyParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramaContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(MattyParser.EOF, 0); }
		public List<SeqComandoContext> seqComando() {
			return getRuleContexts(SeqComandoContext.class);
		}
		public SeqComandoContext seqComando(int i) {
			return getRuleContext(SeqComandoContext.class,i);
		}
		public ProgramaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programa; }
	}

	public final ProgramaContext programa() throws RecognitionException {
		ProgramaContext _localctx = new ProgramaContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_programa);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(13); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(12);
				seqComando();
				}
				}
				setState(15); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 562949960286864L) != 0) );
			setState(17);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SeqComandoContext extends ParserRuleContext {
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public SeqComandoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_seqComando; }
	}

	public final SeqComandoContext seqComando() throws RecognitionException {
		SeqComandoContext _localctx = new SeqComandoContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_seqComando);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(19);
			comando();
			setState(20);
			match(T__0);
			setState(26);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(21);
					comando();
					setState(22);
					match(T__0);
					}
					} 
				}
				setState(28);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoContext extends ParserRuleContext {
		public ComandoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comando; }
	 
		public ComandoContext() { }
		public void copyFrom(ComandoContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AtribuicaoContext extends ComandoContext {
		public List<TerminalNode> ID() { return getTokens(MattyParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(MattyParser.ID, i);
		}
		public List<ValorContext> valor() {
			return getRuleContexts(ValorContext.class);
		}
		public ValorContext valor(int i) {
			return getRuleContext(ValorContext.class,i);
		}
		public AtribuicaoContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class EscolhaContext extends ComandoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public EscolhaContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SeContext extends ComandoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public SeContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExibaContext extends ComandoContext {
		public List<ValorContext> valor() {
			return getRuleContexts(ValorContext.class);
		}
		public ValorContext valor(int i) {
			return getRuleContext(ValorContext.class,i);
		}
		public ExibaContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RepitaContext extends ComandoContext {
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public ComandoContext comando() {
			return getRuleContext(ComandoContext.class,0);
		}
		public RepitaContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LoopContext extends ComandoContext {
		public TerminalNode ID() { return getToken(MattyParser.ID, 0); }
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public ComandoContext comando() {
			return getRuleContext(ComandoContext.class,0);
		}
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public LoopContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class BlocoContext extends ComandoContext {
		public SeqComandoContext seqComando() {
			return getRuleContext(SeqComandoContext.class,0);
		}
		public BlocoContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SkipContext extends ComandoContext {
		public SkipContext(ComandoContext ctx) { copyFrom(ctx); }
	}

	public final ComandoContext comando() throws RecognitionException {
		ComandoContext _localctx = new ComandoContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_comando);
		int _la;
		try {
			setState(120);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				_localctx = new AtribuicaoContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(29);
				match(ID);
				setState(34);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(30);
					match(T__1);
					setState(31);
					match(ID);
					}
					}
					setState(36);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(37);
				match(T__2);
				setState(38);
				valor();
				setState(43);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(39);
					match(T__1);
					setState(40);
					valor();
					}
					}
					setState(45);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case T__3:
				_localctx = new LoopContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(46);
				match(T__3);
				setState(47);
				match(ID);
				setState(48);
				match(T__4);
				setState(49);
				expressao(0);
				setState(50);
				match(T__5);
				setState(51);
				expressao(0);
				setState(52);
				comando();
				}
				break;
			case T__6:
				_localctx = new RepitaContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(54);
				match(T__6);
				setState(55);
				expressao(0);
				setState(56);
				match(T__7);
				setState(57);
				comando();
				}
				break;
			case T__8:
				_localctx = new EscolhaContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(59);
				match(T__8);
				setState(60);
				match(T__9);
				setState(61);
				expressao(0);
				setState(62);
				match(T__10);
				setState(69);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1970328108532736L) != 0)) {
					{
					{
					setState(63);
					expressao(0);
					setState(64);
					match(T__11);
					setState(65);
					comando();
					}
					}
					setState(71);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(72);
				match(T__12);
				setState(73);
				match(T__11);
				setState(74);
				comando();
				}
				break;
			case T__13:
				_localctx = new SkipContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(76);
				match(T__13);
				}
				break;
			case T__14:
				_localctx = new SeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(77);
				match(T__14);
				setState(78);
				match(T__9);
				setState(79);
				booleano(0);
				setState(80);
				match(T__15);
				setState(81);
				comando();
				setState(90);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__16) {
					{
					{
					setState(82);
					match(T__16);
					setState(83);
					match(T__9);
					setState(84);
					booleano(0);
					setState(85);
					match(T__15);
					setState(86);
					comando();
					}
					}
					setState(92);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(93);
				match(T__17);
				setState(94);
				comando();
				}
				break;
			case T__18:
				_localctx = new LoopContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(96);
				match(T__18);
				setState(97);
				match(T__9);
				setState(98);
				booleano(0);
				setState(99);
				match(T__15);
				setState(100);
				match(T__19);
				setState(101);
				comando();
				}
				break;
			case T__20:
				_localctx = new ExibaContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(103);
				match(T__20);
				setState(104);
				match(T__9);
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 4371661503595520L) != 0)) {
					{
					setState(105);
					valor();
					setState(110);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(106);
						match(T__1);
						setState(107);
						valor();
						}
						}
						setState(112);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(115);
				match(T__15);
				}
				break;
			case T__21:
				_localctx = new BlocoContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(116);
				match(T__21);
				setState(117);
				seqComando();
				setState(118);
				match(T__22);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValorContext extends ParserRuleContext {
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public TerminalNode STRING() { return getToken(MattyParser.STRING, 0); }
		public ValorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valor; }
	}

	public final ValorContext valor() throws RecognitionException {
		ValorContext _localctx = new ValorContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_valor);
		try {
			setState(125);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(122);
				expressao(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(123);
				booleano(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				match(STRING);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoContext extends ParserRuleContext {
		public ExpressaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressao; }
	 
		public ExpressaoContext() { }
		public void copyFrom(ExpressaoContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SomaOuSubtracaoContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public SomaOuSubtracaoContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LeiaContext extends ExpressaoContext {
		public LeiaContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LogaritmoContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public LogaritmoContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class InteiroContext extends ExpressaoContext {
		public TerminalNode INT() { return getToken(MattyParser.INT, 0); }
		public InteiroContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RaizContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public RaizContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PrioridadeDeOperacoesContext extends ExpressaoContext {
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public PrioridadeDeOperacoesContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PotenciacaoContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public PotenciacaoContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MultiplicacaoOuDivisaoContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public MultiplicacaoOuDivisaoContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class IdContext extends ExpressaoContext {
		public TerminalNode ID() { return getToken(MattyParser.ID, 0); }
		public IdContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RegraDeTresContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public RegraDeTresContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FracaoContext extends ExpressaoContext {
		public TerminalNode FRACTION() { return getToken(MattyParser.FRACTION, 0); }
		public FracaoContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class EquacaoContext extends ExpressaoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public EquacaoContext(ExpressaoContext ctx) { copyFrom(ctx); }
	}

	public final ExpressaoContext expressao() throws RecognitionException {
		return expressao(0);
	}

	private ExpressaoContext expressao(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressaoContext _localctx = new ExpressaoContext(_ctx, _parentState);
		ExpressaoContext _prevctx = _localctx;
		int _startState = 8;
		enterRecursionRule(_localctx, 8, RULE_expressao, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				_localctx = new InteiroContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(128);
				match(INT);
				}
				break;
			case 2:
				{
				_localctx = new FracaoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(129);
				match(FRACTION);
				}
				break;
			case 3:
				{
				_localctx = new LeiaContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(130);
				match(T__23);
				}
				break;
			case 4:
				{
				_localctx = new IdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(131);
				match(ID);
				}
				break;
			case 5:
				{
				_localctx = new EquacaoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(132);
				match(T__24);
				setState(138);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(133);
					expressao(0);
					}
					break;
				case 2:
					{
					setState(135);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1970328108532736L) != 0)) {
						{
						setState(134);
						expressao(0);
						}
					}

					setState(137);
					match(T__25);
					}
					break;
				}
				setState(140);
				match(T__2);
				setState(146);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(141);
					expressao(0);
					}
					break;
				case 2:
					{
					setState(143);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1970328108532736L) != 0)) {
						{
						setState(142);
						expressao(0);
						}
					}

					setState(145);
					match(T__25);
					}
					break;
				}
				setState(148);
				match(T__24);
				}
				break;
			case 6:
				{
				_localctx = new RegraDeTresContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(149);
				match(T__9);
				setState(150);
				expressao(0);
				setState(151);
				match(T__26);
				setState(152);
				expressao(0);
				setState(153);
				_la = _input.LA(1);
				if ( !(_la==T__27 || _la==T__28) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(154);
				expressao(0);
				setState(155);
				match(T__26);
				setState(156);
				expressao(0);
				setState(157);
				match(T__15);
				}
				break;
			case 7:
				{
				_localctx = new LogaritmoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(159);
				match(T__29);
				setState(160);
				expressao(0);
				setState(163);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(161);
					match(T__12);
					setState(162);
					expressao(0);
					}
					break;
				}
				}
				break;
			case 8:
				{
				_localctx = new RaizContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(165);
				match(T__30);
				setState(167);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1970328108532736L) != 0)) {
					{
					setState(166);
					expressao(0);
					}
				}

				setState(169);
				match(T__31);
				setState(170);
				expressao(5);
				}
				break;
			case 9:
				{
				_localctx = new PrioridadeDeOperacoesContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(171);
				match(T__9);
				setState(172);
				expressao(0);
				setState(173);
				match(T__15);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(188);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(186);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						_localctx = new PotenciacaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(177);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(178);
						match(T__32);
						setState(179);
						expressao(5);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicacaoOuDivisaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(180);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(181);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 55834574848L) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(182);
						expressao(4);
						}
						break;
					case 3:
						{
						_localctx = new SomaOuSubtracaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(183);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(184);
						_la = _input.LA(1);
						if ( !(_la==T__27 || _la==T__35) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(185);
						expressao(3);
						}
						break;
					}
					} 
				}
				setState(190);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BooleanoContext extends ParserRuleContext {
		public BooleanoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleano; }
	 
		public BooleanoContext() { }
		public void copyFrom(BooleanoContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Nao_logicoContext extends BooleanoContext {
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public Nao_logicoContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class BoolContext extends BooleanoContext {
		public TerminalNode BOOLEANO() { return getToken(MattyParser.BOOLEANO, 0); }
		public BoolContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Maior_ou_igualContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public Maior_ou_igualContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MaiorContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public MaiorContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class E_logicoContext extends BooleanoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public E_logicoContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MenorContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public MenorContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Menor_ou_igualContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public Menor_ou_igualContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Ou_logicoContext extends BooleanoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public Ou_logicoContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DiferenteContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public DiferenteContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Prioridade_de_operacoes_logicasContext extends BooleanoContext {
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public Prioridade_de_operacoes_logicasContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class IgualContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public IgualContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class Ou_exclusivo_logicoContext extends BooleanoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public Ou_exclusivo_logicoContext(BooleanoContext ctx) { copyFrom(ctx); }
	}

	public final BooleanoContext booleano() throws RecognitionException {
		return booleano(0);
	}

	private BooleanoContext booleano(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BooleanoContext _localctx = new BooleanoContext(_ctx, _parentState);
		BooleanoContext _prevctx = _localctx;
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_booleano, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(192);
				match(BOOLEANO);
				}
				break;
			case 2:
				{
				_localctx = new IgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(193);
				expressao(0);
				setState(194);
				match(T__36);
				setState(195);
				expressao(0);
				}
				break;
			case 3:
				{
				_localctx = new Menor_ou_igualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(197);
				expressao(0);
				setState(198);
				match(T__37);
				setState(199);
				expressao(0);
				}
				break;
			case 4:
				{
				_localctx = new MenorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(201);
				expressao(0);
				setState(202);
				match(T__38);
				setState(203);
				expressao(0);
				}
				break;
			case 5:
				{
				_localctx = new MaiorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(205);
				expressao(0);
				setState(206);
				match(T__39);
				setState(207);
				expressao(0);
				}
				break;
			case 6:
				{
				_localctx = new Maior_ou_igualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(209);
				expressao(0);
				setState(210);
				match(T__40);
				setState(211);
				expressao(0);
				}
				break;
			case 7:
				{
				_localctx = new DiferenteContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(213);
				expressao(0);
				setState(214);
				match(T__41);
				setState(215);
				expressao(0);
				}
				break;
			case 8:
				{
				_localctx = new Nao_logicoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(217);
				match(T__42);
				setState(218);
				booleano(5);
				}
				break;
			case 9:
				{
				_localctx = new Prioridade_de_operacoes_logicasContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(219);
				match(T__9);
				setState(220);
				booleano(0);
				setState(221);
				match(T__15);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(236);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(234);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
					case 1:
						{
						_localctx = new E_logicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(225);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(226);
						match(T__43);
						setState(227);
						booleano(5);
						}
						break;
					case 2:
						{
						_localctx = new Ou_logicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(228);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(229);
						match(T__44);
						setState(230);
						booleano(4);
						}
						break;
					case 3:
						{
						_localctx = new Ou_exclusivo_logicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(231);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(232);
						match(T__45);
						setState(233);
						booleano(3);
						}
						break;
					}
					} 
				}
				setState(238);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 4:
			return expressao_sempred((ExpressaoContext)_localctx, predIndex);
		case 5:
			return booleano_sempred((BooleanoContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expressao_sempred(ExpressaoContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 4);
		case 1:
			return precpred(_ctx, 3);
		case 2:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean booleano_sempred(BooleanoContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 4);
		case 4:
			return precpred(_ctx, 3);
		case 5:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u00015\u00f0\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0001\u0000\u0004\u0000\u000e\b\u0000\u000b\u0000\f"+
		"\u0000\u000f\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0005\u0001\u0019\b\u0001\n\u0001\f\u0001\u001c"+
		"\t\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u0002!\b\u0002\n\u0002"+
		"\f\u0002$\t\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0005"+
		"\u0002*\b\u0002\n\u0002\f\u0002-\t\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0005\u0002D\b\u0002\n\u0002\f\u0002G\t\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0005\u0002Y\b\u0002\n\u0002\f\u0002\\"+
		"\t\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u0002m\b\u0002\n\u0002"+
		"\f\u0002p\t\u0002\u0003\u0002r\b\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0003\u0002y\b\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0003\u0003~\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004"+
		"\u0088\b\u0004\u0001\u0004\u0003\u0004\u008b\b\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0003\u0004\u0090\b\u0004\u0001\u0004\u0003\u0004\u0093"+
		"\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u00a4\b\u0004\u0001"+
		"\u0004\u0001\u0004\u0003\u0004\u00a8\b\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u00b0\b\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0005\u0004\u00bb\b\u0004\n\u0004\f\u0004"+
		"\u00be\t\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005\u00e0\b\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0005\u0005\u00eb\b\u0005\n\u0005\f\u0005\u00ee"+
		"\t\u0005\u0001\u0005\u0000\u0002\b\n\u0006\u0000\u0002\u0004\u0006\b\n"+
		"\u0000\u0003\u0001\u0000\u001c\u001d\u0002\u0000  \"#\u0002\u0000\u001c"+
		"\u001c$$\u0117\u0000\r\u0001\u0000\u0000\u0000\u0002\u0013\u0001\u0000"+
		"\u0000\u0000\u0004x\u0001\u0000\u0000\u0000\u0006}\u0001\u0000\u0000\u0000"+
		"\b\u00af\u0001\u0000\u0000\u0000\n\u00df\u0001\u0000\u0000\u0000\f\u000e"+
		"\u0003\u0002\u0001\u0000\r\f\u0001\u0000\u0000\u0000\u000e\u000f\u0001"+
		"\u0000\u0000\u0000\u000f\r\u0001\u0000\u0000\u0000\u000f\u0010\u0001\u0000"+
		"\u0000\u0000\u0010\u0011\u0001\u0000\u0000\u0000\u0011\u0012\u0005\u0000"+
		"\u0000\u0001\u0012\u0001\u0001\u0000\u0000\u0000\u0013\u0014\u0003\u0004"+
		"\u0002\u0000\u0014\u001a\u0005\u0001\u0000\u0000\u0015\u0016\u0003\u0004"+
		"\u0002\u0000\u0016\u0017\u0005\u0001\u0000\u0000\u0017\u0019\u0001\u0000"+
		"\u0000\u0000\u0018\u0015\u0001\u0000\u0000\u0000\u0019\u001c\u0001\u0000"+
		"\u0000\u0000\u001a\u0018\u0001\u0000\u0000\u0000\u001a\u001b\u0001\u0000"+
		"\u0000\u0000\u001b\u0003\u0001\u0000\u0000\u0000\u001c\u001a\u0001\u0000"+
		"\u0000\u0000\u001d\"\u00051\u0000\u0000\u001e\u001f\u0005\u0002\u0000"+
		"\u0000\u001f!\u00051\u0000\u0000 \u001e\u0001\u0000\u0000\u0000!$\u0001"+
		"\u0000\u0000\u0000\" \u0001\u0000\u0000\u0000\"#\u0001\u0000\u0000\u0000"+
		"#%\u0001\u0000\u0000\u0000$\"\u0001\u0000\u0000\u0000%&\u0005\u0003\u0000"+
		"\u0000&+\u0003\u0006\u0003\u0000\'(\u0005\u0002\u0000\u0000(*\u0003\u0006"+
		"\u0003\u0000)\'\u0001\u0000\u0000\u0000*-\u0001\u0000\u0000\u0000+)\u0001"+
		"\u0000\u0000\u0000+,\u0001\u0000\u0000\u0000,y\u0001\u0000\u0000\u0000"+
		"-+\u0001\u0000\u0000\u0000./\u0005\u0004\u0000\u0000/0\u00051\u0000\u0000"+
		"01\u0005\u0005\u0000\u000012\u0003\b\u0004\u000023\u0005\u0006\u0000\u0000"+
		"34\u0003\b\u0004\u000045\u0003\u0004\u0002\u00005y\u0001\u0000\u0000\u0000"+
		"67\u0005\u0007\u0000\u000078\u0003\b\u0004\u000089\u0005\b\u0000\u0000"+
		"9:\u0003\u0004\u0002\u0000:y\u0001\u0000\u0000\u0000;<\u0005\t\u0000\u0000"+
		"<=\u0005\n\u0000\u0000=>\u0003\b\u0004\u0000>E\u0005\u000b\u0000\u0000"+
		"?@\u0003\b\u0004\u0000@A\u0005\f\u0000\u0000AB\u0003\u0004\u0002\u0000"+
		"BD\u0001\u0000\u0000\u0000C?\u0001\u0000\u0000\u0000DG\u0001\u0000\u0000"+
		"\u0000EC\u0001\u0000\u0000\u0000EF\u0001\u0000\u0000\u0000FH\u0001\u0000"+
		"\u0000\u0000GE\u0001\u0000\u0000\u0000HI\u0005\r\u0000\u0000IJ\u0005\f"+
		"\u0000\u0000JK\u0003\u0004\u0002\u0000Ky\u0001\u0000\u0000\u0000Ly\u0005"+
		"\u000e\u0000\u0000MN\u0005\u000f\u0000\u0000NO\u0005\n\u0000\u0000OP\u0003"+
		"\n\u0005\u0000PQ\u0005\u0010\u0000\u0000QZ\u0003\u0004\u0002\u0000RS\u0005"+
		"\u0011\u0000\u0000ST\u0005\n\u0000\u0000TU\u0003\n\u0005\u0000UV\u0005"+
		"\u0010\u0000\u0000VW\u0003\u0004\u0002\u0000WY\u0001\u0000\u0000\u0000"+
		"XR\u0001\u0000\u0000\u0000Y\\\u0001\u0000\u0000\u0000ZX\u0001\u0000\u0000"+
		"\u0000Z[\u0001\u0000\u0000\u0000[]\u0001\u0000\u0000\u0000\\Z\u0001\u0000"+
		"\u0000\u0000]^\u0005\u0012\u0000\u0000^_\u0003\u0004\u0002\u0000_y\u0001"+
		"\u0000\u0000\u0000`a\u0005\u0013\u0000\u0000ab\u0005\n\u0000\u0000bc\u0003"+
		"\n\u0005\u0000cd\u0005\u0010\u0000\u0000de\u0005\u0014\u0000\u0000ef\u0003"+
		"\u0004\u0002\u0000fy\u0001\u0000\u0000\u0000gh\u0005\u0015\u0000\u0000"+
		"hq\u0005\n\u0000\u0000in\u0003\u0006\u0003\u0000jk\u0005\u0002\u0000\u0000"+
		"km\u0003\u0006\u0003\u0000lj\u0001\u0000\u0000\u0000mp\u0001\u0000\u0000"+
		"\u0000nl\u0001\u0000\u0000\u0000no\u0001\u0000\u0000\u0000or\u0001\u0000"+
		"\u0000\u0000pn\u0001\u0000\u0000\u0000qi\u0001\u0000\u0000\u0000qr\u0001"+
		"\u0000\u0000\u0000rs\u0001\u0000\u0000\u0000sy\u0005\u0010\u0000\u0000"+
		"tu\u0005\u0016\u0000\u0000uv\u0003\u0002\u0001\u0000vw\u0005\u0017\u0000"+
		"\u0000wy\u0001\u0000\u0000\u0000x\u001d\u0001\u0000\u0000\u0000x.\u0001"+
		"\u0000\u0000\u0000x6\u0001\u0000\u0000\u0000x;\u0001\u0000\u0000\u0000"+
		"xL\u0001\u0000\u0000\u0000xM\u0001\u0000\u0000\u0000x`\u0001\u0000\u0000"+
		"\u0000xg\u0001\u0000\u0000\u0000xt\u0001\u0000\u0000\u0000y\u0005\u0001"+
		"\u0000\u0000\u0000z~\u0003\b\u0004\u0000{~\u0003\n\u0005\u0000|~\u0005"+
		"3\u0000\u0000}z\u0001\u0000\u0000\u0000}{\u0001\u0000\u0000\u0000}|\u0001"+
		"\u0000\u0000\u0000~\u0007\u0001\u0000\u0000\u0000\u007f\u0080\u0006\u0004"+
		"\uffff\uffff\u0000\u0080\u00b0\u00052\u0000\u0000\u0081\u00b0\u00050\u0000"+
		"\u0000\u0082\u00b0\u0005\u0018\u0000\u0000\u0083\u00b0\u00051\u0000\u0000"+
		"\u0084\u008a\u0005\u0019\u0000\u0000\u0085\u008b\u0003\b\u0004\u0000\u0086"+
		"\u0088\u0003\b\u0004\u0000\u0087\u0086\u0001\u0000\u0000\u0000\u0087\u0088"+
		"\u0001\u0000\u0000\u0000\u0088\u0089\u0001\u0000\u0000\u0000\u0089\u008b"+
		"\u0005\u001a\u0000\u0000\u008a\u0085\u0001\u0000\u0000\u0000\u008a\u0087"+
		"\u0001\u0000\u0000\u0000\u008b\u008c\u0001\u0000\u0000\u0000\u008c\u0092"+
		"\u0005\u0003\u0000\u0000\u008d\u0093\u0003\b\u0004\u0000\u008e\u0090\u0003"+
		"\b\u0004\u0000\u008f\u008e\u0001\u0000\u0000\u0000\u008f\u0090\u0001\u0000"+
		"\u0000\u0000\u0090\u0091\u0001\u0000\u0000\u0000\u0091\u0093\u0005\u001a"+
		"\u0000\u0000\u0092\u008d\u0001\u0000\u0000\u0000\u0092\u008f\u0001\u0000"+
		"\u0000\u0000\u0093\u0094\u0001\u0000\u0000\u0000\u0094\u00b0\u0005\u0019"+
		"\u0000\u0000\u0095\u0096\u0005\n\u0000\u0000\u0096\u0097\u0003\b\u0004"+
		"\u0000\u0097\u0098\u0005\u001b\u0000\u0000\u0098\u0099\u0003\b\u0004\u0000"+
		"\u0099\u009a\u0007\u0000\u0000\u0000\u009a\u009b\u0003\b\u0004\u0000\u009b"+
		"\u009c\u0005\u001b\u0000\u0000\u009c\u009d\u0003\b\u0004\u0000\u009d\u009e"+
		"\u0005\u0010\u0000\u0000\u009e\u00b0\u0001\u0000\u0000\u0000\u009f\u00a0"+
		"\u0005\u001e\u0000\u0000\u00a0\u00a3\u0003\b\u0004\u0000\u00a1\u00a2\u0005"+
		"\r\u0000\u0000\u00a2\u00a4\u0003\b\u0004\u0000\u00a3\u00a1\u0001\u0000"+
		"\u0000\u0000\u00a3\u00a4\u0001\u0000\u0000\u0000\u00a4\u00b0\u0001\u0000"+
		"\u0000\u0000\u00a5\u00a7\u0005\u001f\u0000\u0000\u00a6\u00a8\u0003\b\u0004"+
		"\u0000\u00a7\u00a6\u0001\u0000\u0000\u0000\u00a7\u00a8\u0001\u0000\u0000"+
		"\u0000\u00a8\u00a9\u0001\u0000\u0000\u0000\u00a9\u00aa\u0005 \u0000\u0000"+
		"\u00aa\u00b0\u0003\b\u0004\u0005\u00ab\u00ac\u0005\n\u0000\u0000\u00ac"+
		"\u00ad\u0003\b\u0004\u0000\u00ad\u00ae\u0005\u0010\u0000\u0000\u00ae\u00b0"+
		"\u0001\u0000\u0000\u0000\u00af\u007f\u0001\u0000\u0000\u0000\u00af\u0081"+
		"\u0001\u0000\u0000\u0000\u00af\u0082\u0001\u0000\u0000\u0000\u00af\u0083"+
		"\u0001\u0000\u0000\u0000\u00af\u0084\u0001\u0000\u0000\u0000\u00af\u0095"+
		"\u0001\u0000\u0000\u0000\u00af\u009f\u0001\u0000\u0000\u0000\u00af\u00a5"+
		"\u0001\u0000\u0000\u0000\u00af\u00ab\u0001\u0000\u0000\u0000\u00b0\u00bc"+
		"\u0001\u0000\u0000\u0000\u00b1\u00b2\n\u0004\u0000\u0000\u00b2\u00b3\u0005"+
		"!\u0000\u0000\u00b3\u00bb\u0003\b\u0004\u0005\u00b4\u00b5\n\u0003\u0000"+
		"\u0000\u00b5\u00b6\u0007\u0001\u0000\u0000\u00b6\u00bb\u0003\b\u0004\u0004"+
		"\u00b7\u00b8\n\u0002\u0000\u0000\u00b8\u00b9\u0007\u0002\u0000\u0000\u00b9"+
		"\u00bb\u0003\b\u0004\u0003\u00ba\u00b1\u0001\u0000\u0000\u0000\u00ba\u00b4"+
		"\u0001\u0000\u0000\u0000\u00ba\u00b7\u0001\u0000\u0000\u0000\u00bb\u00be"+
		"\u0001\u0000\u0000\u0000\u00bc\u00ba\u0001\u0000\u0000\u0000\u00bc\u00bd"+
		"\u0001\u0000\u0000\u0000\u00bd\t\u0001\u0000\u0000\u0000\u00be\u00bc\u0001"+
		"\u0000\u0000\u0000\u00bf\u00c0\u0006\u0005\uffff\uffff\u0000\u00c0\u00e0"+
		"\u0005/\u0000\u0000\u00c1\u00c2\u0003\b\u0004\u0000\u00c2\u00c3\u0005"+
		"%\u0000\u0000\u00c3\u00c4\u0003\b\u0004\u0000\u00c4\u00e0\u0001\u0000"+
		"\u0000\u0000\u00c5\u00c6\u0003\b\u0004\u0000\u00c6\u00c7\u0005&\u0000"+
		"\u0000\u00c7\u00c8\u0003\b\u0004\u0000\u00c8\u00e0\u0001\u0000\u0000\u0000"+
		"\u00c9\u00ca\u0003\b\u0004\u0000\u00ca\u00cb\u0005\'\u0000\u0000\u00cb"+
		"\u00cc\u0003\b\u0004\u0000\u00cc\u00e0\u0001\u0000\u0000\u0000\u00cd\u00ce"+
		"\u0003\b\u0004\u0000\u00ce\u00cf\u0005(\u0000\u0000\u00cf\u00d0\u0003"+
		"\b\u0004\u0000\u00d0\u00e0\u0001\u0000\u0000\u0000\u00d1\u00d2\u0003\b"+
		"\u0004\u0000\u00d2\u00d3\u0005)\u0000\u0000\u00d3\u00d4\u0003\b\u0004"+
		"\u0000\u00d4\u00e0\u0001\u0000\u0000\u0000\u00d5\u00d6\u0003\b\u0004\u0000"+
		"\u00d6\u00d7\u0005*\u0000\u0000\u00d7\u00d8\u0003\b\u0004\u0000\u00d8"+
		"\u00e0\u0001\u0000\u0000\u0000\u00d9\u00da\u0005+\u0000\u0000\u00da\u00e0"+
		"\u0003\n\u0005\u0005\u00db\u00dc\u0005\n\u0000\u0000\u00dc\u00dd\u0003"+
		"\n\u0005\u0000\u00dd\u00de\u0005\u0010\u0000\u0000\u00de\u00e0\u0001\u0000"+
		"\u0000\u0000\u00df\u00bf\u0001\u0000\u0000\u0000\u00df\u00c1\u0001\u0000"+
		"\u0000\u0000\u00df\u00c5\u0001\u0000\u0000\u0000\u00df\u00c9\u0001\u0000"+
		"\u0000\u0000\u00df\u00cd\u0001\u0000\u0000\u0000\u00df\u00d1\u0001\u0000"+
		"\u0000\u0000\u00df\u00d5\u0001\u0000\u0000\u0000\u00df\u00d9\u0001\u0000"+
		"\u0000\u0000\u00df\u00db\u0001\u0000\u0000\u0000\u00e0\u00ec\u0001\u0000"+
		"\u0000\u0000\u00e1\u00e2\n\u0004\u0000\u0000\u00e2\u00e3\u0005,\u0000"+
		"\u0000\u00e3\u00eb\u0003\n\u0005\u0005\u00e4\u00e5\n\u0003\u0000\u0000"+
		"\u00e5\u00e6\u0005-\u0000\u0000\u00e6\u00eb\u0003\n\u0005\u0004\u00e7"+
		"\u00e8\n\u0002\u0000\u0000\u00e8\u00e9\u0005.\u0000\u0000\u00e9\u00eb"+
		"\u0003\n\u0005\u0003\u00ea\u00e1\u0001\u0000\u0000\u0000\u00ea\u00e4\u0001"+
		"\u0000\u0000\u0000\u00ea\u00e7\u0001\u0000\u0000\u0000\u00eb\u00ee\u0001"+
		"\u0000\u0000\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000\u00ec\u00ed\u0001"+
		"\u0000\u0000\u0000\u00ed\u000b\u0001\u0000\u0000\u0000\u00ee\u00ec\u0001"+
		"\u0000\u0000\u0000\u0016\u000f\u001a\"+EZnqx}\u0087\u008a\u008f\u0092"+
		"\u00a3\u00a7\u00af\u00ba\u00bc\u00df\u00ea\u00ec";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}