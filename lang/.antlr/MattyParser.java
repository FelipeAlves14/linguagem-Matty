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
		BOOLEANO=46, DECIMAL=47, FRACTION=48, ID=49, INT=50, STRING=51, COMENTARIO=52, 
		ESPACO=53;
	public static final int
		RULE_programa = 0, RULE_comando = 1, RULE_valor = 2, RULE_expressao = 3, 
		RULE_booleano = 4;
	private static String[] makeRuleNames() {
		return new String[] {
			"programa", "comando", "valor", "expressao", "booleano"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "','", "'='", "'for'", "'to'", "'at'", "'make'", "'times'", 
			"'choose'", "'('", "'):'", "':'", "'_'", "'skip'", "'if'", "')'", "'elif'", 
			"'else'", "'while'", "'do'", "'print'", "'{'", "'}'", "'read'", "'x'", 
			"'|'", "'-'", "'~'", "'log'", "'\\'", "'/'", "'^'", "'*'", "'//'", "'+'", 
			"'=='", "'<='", "'<'", "'>'", "'>='", "'!='", "'!'", "'and'", "'or'", 
			"'xor'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, "BOOLEANO", 
			"DECIMAL", "FRACTION", "ID", "INT", "STRING", "COMENTARIO", "ESPACO"
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
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
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
				setState(10);
				comando();
				setState(11);
				match(T__0);
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
		public ComandoContext comando() {
			return getRuleContext(ComandoContext.class,0);
		}
		public BlocoContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SkipContext extends ComandoContext {
		public SkipContext(ComandoContext ctx) { copyFrom(ctx); }
	}

	public final ComandoContext comando() throws RecognitionException {
		ComandoContext _localctx = new ComandoContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_comando);
		int _la;
		try {
			setState(110);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				_localctx = new AtribuicaoContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(19);
				match(ID);
				setState(24);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(20);
					match(T__1);
					setState(21);
					match(ID);
					}
					}
					setState(26);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(27);
				match(T__2);
				setState(28);
				valor();
				setState(33);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(29);
					match(T__1);
					setState(30);
					valor();
					}
					}
					setState(35);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case T__3:
				_localctx = new LoopContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(36);
				match(T__3);
				setState(37);
				match(ID);
				setState(38);
				match(T__4);
				setState(39);
				expressao(0);
				setState(40);
				match(T__5);
				setState(41);
				expressao(0);
				setState(42);
				comando();
				}
				break;
			case T__6:
				_localctx = new RepitaContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(44);
				match(T__6);
				setState(45);
				expressao(0);
				setState(46);
				match(T__7);
				setState(47);
				comando();
				}
				break;
			case T__8:
				_localctx = new EscolhaContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(49);
				match(T__8);
				setState(50);
				match(T__9);
				setState(51);
				expressao(0);
				setState(52);
				match(T__10);
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2111063952720896L) != 0)) {
					{
					{
					setState(53);
					expressao(0);
					setState(54);
					match(T__11);
					setState(55);
					comando();
					}
					}
					setState(61);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(62);
				match(T__12);
				setState(63);
				match(T__11);
				setState(64);
				comando();
				}
				break;
			case T__13:
				_localctx = new SkipContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(66);
				match(T__13);
				}
				break;
			case T__14:
				_localctx = new SeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(67);
				match(T__14);
				setState(68);
				match(T__9);
				setState(69);
				booleano(0);
				setState(70);
				match(T__15);
				setState(71);
				comando();
				setState(80);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__16) {
					{
					{
					setState(72);
					match(T__16);
					setState(73);
					match(T__9);
					setState(74);
					booleano(0);
					setState(75);
					match(T__15);
					setState(76);
					comando();
					}
					}
					setState(82);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(83);
				match(T__17);
				setState(84);
				comando();
				}
				break;
			case T__18:
				_localctx = new LoopContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(86);
				match(T__18);
				setState(87);
				match(T__9);
				setState(88);
				booleano(0);
				setState(89);
				match(T__15);
				setState(90);
				match(T__19);
				setState(91);
				comando();
				}
				break;
			case T__20:
				_localctx = new ExibaContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(93);
				match(T__20);
				setState(94);
				match(T__9);
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 4437630557094912L) != 0)) {
					{
					setState(95);
					valor();
					setState(100);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(96);
						match(T__1);
						setState(97);
						valor();
						}
						}
						setState(102);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(105);
				match(T__15);
				}
				break;
			case T__21:
				_localctx = new BlocoContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(106);
				match(T__21);
				setState(107);
				comando();
				setState(108);
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
		enterRule(_localctx, 4, RULE_valor);
		try {
			setState(115);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(112);
				expressao(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(113);
				booleano(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(114);
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
	public static class DecimalContext extends ExpressaoContext {
		public TerminalNode DECIMAL() { return getToken(MattyParser.DECIMAL, 0); }
		public DecimalContext(ExpressaoContext ctx) { copyFrom(ctx); }
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

	public final ExpressaoContext expressao() throws RecognitionException {
		return expressao(0);
	}

	private ExpressaoContext expressao(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressaoContext _localctx = new ExpressaoContext(_ctx, _parentState);
		ExpressaoContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_expressao, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				{
				_localctx = new InteiroContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(118);
				match(INT);
				}
				break;
			case 2:
				{
				_localctx = new DecimalContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(119);
				match(DECIMAL);
				}
				break;
			case 3:
				{
				_localctx = new FracaoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(120);
				match(FRACTION);
				}
				break;
			case 4:
				{
				_localctx = new LeiaContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(121);
				match(T__23);
				}
				break;
			case 5:
				{
				_localctx = new IdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(122);
				match(ID);
				}
				break;
			case 6:
				{
				_localctx = new RegraDeTresContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(123);
				match(T__9);
				setState(126);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__23:
				case T__28:
				case T__29:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(124);
					expressao(0);
					}
					break;
				case T__24:
					{
					setState(125);
					match(T__24);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(128);
				match(T__25);
				setState(131);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__23:
				case T__28:
				case T__29:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(129);
					expressao(0);
					}
					break;
				case T__24:
					{
					setState(130);
					match(T__24);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(133);
				_la = _input.LA(1);
				if ( !(_la==T__26 || _la==T__27) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(136);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__23:
				case T__28:
				case T__29:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(134);
					expressao(0);
					}
					break;
				case T__24:
					{
					setState(135);
					match(T__24);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(138);
				match(T__25);
				setState(141);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__23:
				case T__28:
				case T__29:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(139);
					expressao(0);
					}
					break;
				case T__24:
					{
					setState(140);
					match(T__24);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(143);
				match(T__15);
				}
				break;
			case 7:
				{
				_localctx = new LogaritmoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(144);
				match(T__28);
				setState(145);
				expressao(0);
				setState(148);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(146);
					match(T__12);
					setState(147);
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
				setState(150);
				match(T__29);
				setState(152);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2111063952720896L) != 0)) {
					{
					setState(151);
					expressao(0);
					}
				}

				setState(154);
				match(T__30);
				setState(155);
				expressao(5);
				}
				break;
			case 9:
				{
				_localctx = new PrioridadeDeOperacoesContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(156);
				match(T__9);
				setState(157);
				expressao(0);
				setState(158);
				match(T__15);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(173);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(171);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						_localctx = new PotenciacaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(162);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(163);
						match(T__31);
						setState(164);
						expressao(5);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicacaoOuDivisaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(165);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(166);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 27917287424L) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(167);
						expressao(4);
						}
						break;
					case 3:
						{
						_localctx = new SomaOuSubtracaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(168);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(169);
						_la = _input.LA(1);
						if ( !(_la==T__26 || _la==T__34) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(170);
						expressao(3);
						}
						break;
					}
					} 
				}
				setState(175);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
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
	public static class MaiorOuIgualContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public MaiorOuIgualContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class BoolContext extends BooleanoContext {
		public TerminalNode BOOLEANO() { return getToken(MattyParser.BOOLEANO, 0); }
		public BoolContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MenorOuIgualContext extends BooleanoContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public MenorOuIgualContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ELogicoContext extends BooleanoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public ELogicoContext(BooleanoContext ctx) { copyFrom(ctx); }
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
	public static class NaoLogicoContext extends BooleanoContext {
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public NaoLogicoContext(BooleanoContext ctx) { copyFrom(ctx); }
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
	public static class OuExclusivoLogicoContext extends BooleanoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public OuExclusivoLogicoContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PrioridadeDeOperacoesLogicasContext extends BooleanoContext {
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public PrioridadeDeOperacoesLogicasContext(BooleanoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OuLogicoContext extends BooleanoContext {
		public List<BooleanoContext> booleano() {
			return getRuleContexts(BooleanoContext.class);
		}
		public BooleanoContext booleano(int i) {
			return getRuleContext(BooleanoContext.class,i);
		}
		public OuLogicoContext(BooleanoContext ctx) { copyFrom(ctx); }
	}

	public final BooleanoContext booleano() throws RecognitionException {
		return booleano(0);
	}

	private BooleanoContext booleano(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BooleanoContext _localctx = new BooleanoContext(_ctx, _parentState);
		BooleanoContext _prevctx = _localctx;
		int _startState = 8;
		enterRecursionRule(_localctx, 8, RULE_booleano, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(177);
				match(BOOLEANO);
				}
				break;
			case 2:
				{
				_localctx = new IgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(178);
				expressao(0);
				setState(179);
				match(T__35);
				setState(180);
				expressao(0);
				}
				break;
			case 3:
				{
				_localctx = new MenorOuIgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(182);
				expressao(0);
				setState(183);
				match(T__36);
				setState(184);
				expressao(0);
				}
				break;
			case 4:
				{
				_localctx = new MenorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(186);
				expressao(0);
				setState(187);
				match(T__37);
				setState(188);
				expressao(0);
				}
				break;
			case 5:
				{
				_localctx = new MaiorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(190);
				expressao(0);
				setState(191);
				match(T__38);
				setState(192);
				expressao(0);
				}
				break;
			case 6:
				{
				_localctx = new MaiorOuIgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(194);
				expressao(0);
				setState(195);
				match(T__39);
				setState(196);
				expressao(0);
				}
				break;
			case 7:
				{
				_localctx = new DiferenteContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(198);
				expressao(0);
				setState(199);
				match(T__40);
				setState(200);
				expressao(0);
				}
				break;
			case 8:
				{
				_localctx = new NaoLogicoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(202);
				match(T__41);
				setState(203);
				booleano(5);
				}
				break;
			case 9:
				{
				_localctx = new PrioridadeDeOperacoesLogicasContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(204);
				match(T__9);
				setState(205);
				booleano(0);
				setState(206);
				match(T__15);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(221);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(219);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
					case 1:
						{
						_localctx = new ELogicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(210);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(211);
						match(T__42);
						setState(212);
						booleano(5);
						}
						break;
					case 2:
						{
						_localctx = new OuLogicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(213);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(214);
						match(T__43);
						setState(215);
						booleano(4);
						}
						break;
					case 3:
						{
						_localctx = new OuExclusivoLogicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(216);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(217);
						match(T__44);
						setState(218);
						booleano(3);
						}
						break;
					}
					} 
				}
				setState(223);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
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
		case 3:
			return expressao_sempred((ExpressaoContext)_localctx, predIndex);
		case 4:
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
		"\u0004\u00015\u00e1\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0004\u0000\u000e\b\u0000\u000b\u0000\f"+
		"\u0000\u000f\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0005\u0001\u0017\b\u0001\n\u0001\f\u0001\u001a\t\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0005\u0001 \b\u0001\n\u0001\f\u0001#\t"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001:\b\u0001\n\u0001"+
		"\f\u0001=\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005"+
		"\u0001O\b\u0001\n\u0001\f\u0001R\t\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0005\u0001c\b\u0001\n\u0001\f\u0001f\t\u0001\u0003\u0001h\b\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001"+
		"o\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002t\b\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u007f\b\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0003\u0003\u0084\b\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0003\u0003\u0089\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0003"+
		"\u0003\u008e\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0003\u0003\u0095\b\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u0099"+
		"\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0003\u0003\u00a1\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005"+
		"\u0003\u00ac\b\u0003\n\u0003\f\u0003\u00af\t\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0003\u0004\u00d1\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004"+
		"\u00dc\b\u0004\n\u0004\f\u0004\u00df\t\u0004\u0001\u0004\u0000\u0002\u0006"+
		"\b\u0005\u0000\u0002\u0004\u0006\b\u0000\u0003\u0001\u0000\u001b\u001c"+
		"\u0002\u0000\u001f\u001f!\"\u0002\u0000\u001b\u001b##\u0108\u0000\r\u0001"+
		"\u0000\u0000\u0000\u0002n\u0001\u0000\u0000\u0000\u0004s\u0001\u0000\u0000"+
		"\u0000\u0006\u00a0\u0001\u0000\u0000\u0000\b\u00d0\u0001\u0000\u0000\u0000"+
		"\n\u000b\u0003\u0002\u0001\u0000\u000b\f\u0005\u0001\u0000\u0000\f\u000e"+
		"\u0001\u0000\u0000\u0000\r\n\u0001\u0000\u0000\u0000\u000e\u000f\u0001"+
		"\u0000\u0000\u0000\u000f\r\u0001\u0000\u0000\u0000\u000f\u0010\u0001\u0000"+
		"\u0000\u0000\u0010\u0011\u0001\u0000\u0000\u0000\u0011\u0012\u0005\u0000"+
		"\u0000\u0001\u0012\u0001\u0001\u0000\u0000\u0000\u0013\u0018\u00051\u0000"+
		"\u0000\u0014\u0015\u0005\u0002\u0000\u0000\u0015\u0017\u00051\u0000\u0000"+
		"\u0016\u0014\u0001\u0000\u0000\u0000\u0017\u001a\u0001\u0000\u0000\u0000"+
		"\u0018\u0016\u0001\u0000\u0000\u0000\u0018\u0019\u0001\u0000\u0000\u0000"+
		"\u0019\u001b\u0001\u0000\u0000\u0000\u001a\u0018\u0001\u0000\u0000\u0000"+
		"\u001b\u001c\u0005\u0003\u0000\u0000\u001c!\u0003\u0004\u0002\u0000\u001d"+
		"\u001e\u0005\u0002\u0000\u0000\u001e \u0003\u0004\u0002\u0000\u001f\u001d"+
		"\u0001\u0000\u0000\u0000 #\u0001\u0000\u0000\u0000!\u001f\u0001\u0000"+
		"\u0000\u0000!\"\u0001\u0000\u0000\u0000\"o\u0001\u0000\u0000\u0000#!\u0001"+
		"\u0000\u0000\u0000$%\u0005\u0004\u0000\u0000%&\u00051\u0000\u0000&\'\u0005"+
		"\u0005\u0000\u0000\'(\u0003\u0006\u0003\u0000()\u0005\u0006\u0000\u0000"+
		")*\u0003\u0006\u0003\u0000*+\u0003\u0002\u0001\u0000+o\u0001\u0000\u0000"+
		"\u0000,-\u0005\u0007\u0000\u0000-.\u0003\u0006\u0003\u0000./\u0005\b\u0000"+
		"\u0000/0\u0003\u0002\u0001\u00000o\u0001\u0000\u0000\u000012\u0005\t\u0000"+
		"\u000023\u0005\n\u0000\u000034\u0003\u0006\u0003\u00004;\u0005\u000b\u0000"+
		"\u000056\u0003\u0006\u0003\u000067\u0005\f\u0000\u000078\u0003\u0002\u0001"+
		"\u00008:\u0001\u0000\u0000\u000095\u0001\u0000\u0000\u0000:=\u0001\u0000"+
		"\u0000\u0000;9\u0001\u0000\u0000\u0000;<\u0001\u0000\u0000\u0000<>\u0001"+
		"\u0000\u0000\u0000=;\u0001\u0000\u0000\u0000>?\u0005\r\u0000\u0000?@\u0005"+
		"\f\u0000\u0000@A\u0003\u0002\u0001\u0000Ao\u0001\u0000\u0000\u0000Bo\u0005"+
		"\u000e\u0000\u0000CD\u0005\u000f\u0000\u0000DE\u0005\n\u0000\u0000EF\u0003"+
		"\b\u0004\u0000FG\u0005\u0010\u0000\u0000GP\u0003\u0002\u0001\u0000HI\u0005"+
		"\u0011\u0000\u0000IJ\u0005\n\u0000\u0000JK\u0003\b\u0004\u0000KL\u0005"+
		"\u0010\u0000\u0000LM\u0003\u0002\u0001\u0000MO\u0001\u0000\u0000\u0000"+
		"NH\u0001\u0000\u0000\u0000OR\u0001\u0000\u0000\u0000PN\u0001\u0000\u0000"+
		"\u0000PQ\u0001\u0000\u0000\u0000QS\u0001\u0000\u0000\u0000RP\u0001\u0000"+
		"\u0000\u0000ST\u0005\u0012\u0000\u0000TU\u0003\u0002\u0001\u0000Uo\u0001"+
		"\u0000\u0000\u0000VW\u0005\u0013\u0000\u0000WX\u0005\n\u0000\u0000XY\u0003"+
		"\b\u0004\u0000YZ\u0005\u0010\u0000\u0000Z[\u0005\u0014\u0000\u0000[\\"+
		"\u0003\u0002\u0001\u0000\\o\u0001\u0000\u0000\u0000]^\u0005\u0015\u0000"+
		"\u0000^g\u0005\n\u0000\u0000_d\u0003\u0004\u0002\u0000`a\u0005\u0002\u0000"+
		"\u0000ac\u0003\u0004\u0002\u0000b`\u0001\u0000\u0000\u0000cf\u0001\u0000"+
		"\u0000\u0000db\u0001\u0000\u0000\u0000de\u0001\u0000\u0000\u0000eh\u0001"+
		"\u0000\u0000\u0000fd\u0001\u0000\u0000\u0000g_\u0001\u0000\u0000\u0000"+
		"gh\u0001\u0000\u0000\u0000hi\u0001\u0000\u0000\u0000io\u0005\u0010\u0000"+
		"\u0000jk\u0005\u0016\u0000\u0000kl\u0003\u0002\u0001\u0000lm\u0005\u0017"+
		"\u0000\u0000mo\u0001\u0000\u0000\u0000n\u0013\u0001\u0000\u0000\u0000"+
		"n$\u0001\u0000\u0000\u0000n,\u0001\u0000\u0000\u0000n1\u0001\u0000\u0000"+
		"\u0000nB\u0001\u0000\u0000\u0000nC\u0001\u0000\u0000\u0000nV\u0001\u0000"+
		"\u0000\u0000n]\u0001\u0000\u0000\u0000nj\u0001\u0000\u0000\u0000o\u0003"+
		"\u0001\u0000\u0000\u0000pt\u0003\u0006\u0003\u0000qt\u0003\b\u0004\u0000"+
		"rt\u00053\u0000\u0000sp\u0001\u0000\u0000\u0000sq\u0001\u0000\u0000\u0000"+
		"sr\u0001\u0000\u0000\u0000t\u0005\u0001\u0000\u0000\u0000uv\u0006\u0003"+
		"\uffff\uffff\u0000v\u00a1\u00052\u0000\u0000w\u00a1\u0005/\u0000\u0000"+
		"x\u00a1\u00050\u0000\u0000y\u00a1\u0005\u0018\u0000\u0000z\u00a1\u0005"+
		"1\u0000\u0000{~\u0005\n\u0000\u0000|\u007f\u0003\u0006\u0003\u0000}\u007f"+
		"\u0005\u0019\u0000\u0000~|\u0001\u0000\u0000\u0000~}\u0001\u0000\u0000"+
		"\u0000\u007f\u0080\u0001\u0000\u0000\u0000\u0080\u0083\u0005\u001a\u0000"+
		"\u0000\u0081\u0084\u0003\u0006\u0003\u0000\u0082\u0084\u0005\u0019\u0000"+
		"\u0000\u0083\u0081\u0001\u0000\u0000\u0000\u0083\u0082\u0001\u0000\u0000"+
		"\u0000\u0084\u0085\u0001\u0000\u0000\u0000\u0085\u0088\u0007\u0000\u0000"+
		"\u0000\u0086\u0089\u0003\u0006\u0003\u0000\u0087\u0089\u0005\u0019\u0000"+
		"\u0000\u0088\u0086\u0001\u0000\u0000\u0000\u0088\u0087\u0001\u0000\u0000"+
		"\u0000\u0089\u008a\u0001\u0000\u0000\u0000\u008a\u008d\u0005\u001a\u0000"+
		"\u0000\u008b\u008e\u0003\u0006\u0003\u0000\u008c\u008e\u0005\u0019\u0000"+
		"\u0000\u008d\u008b\u0001\u0000\u0000\u0000\u008d\u008c\u0001\u0000\u0000"+
		"\u0000\u008e\u008f\u0001\u0000\u0000\u0000\u008f\u00a1\u0005\u0010\u0000"+
		"\u0000\u0090\u0091\u0005\u001d\u0000\u0000\u0091\u0094\u0003\u0006\u0003"+
		"\u0000\u0092\u0093\u0005\r\u0000\u0000\u0093\u0095\u0003\u0006\u0003\u0000"+
		"\u0094\u0092\u0001\u0000\u0000\u0000\u0094\u0095\u0001\u0000\u0000\u0000"+
		"\u0095\u00a1\u0001\u0000\u0000\u0000\u0096\u0098\u0005\u001e\u0000\u0000"+
		"\u0097\u0099\u0003\u0006\u0003\u0000\u0098\u0097\u0001\u0000\u0000\u0000"+
		"\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u009a\u0001\u0000\u0000\u0000"+
		"\u009a\u009b\u0005\u001f\u0000\u0000\u009b\u00a1\u0003\u0006\u0003\u0005"+
		"\u009c\u009d\u0005\n\u0000\u0000\u009d\u009e\u0003\u0006\u0003\u0000\u009e"+
		"\u009f\u0005\u0010\u0000\u0000\u009f\u00a1\u0001\u0000\u0000\u0000\u00a0"+
		"u\u0001\u0000\u0000\u0000\u00a0w\u0001\u0000\u0000\u0000\u00a0x\u0001"+
		"\u0000\u0000\u0000\u00a0y\u0001\u0000\u0000\u0000\u00a0z\u0001\u0000\u0000"+
		"\u0000\u00a0{\u0001\u0000\u0000\u0000\u00a0\u0090\u0001\u0000\u0000\u0000"+
		"\u00a0\u0096\u0001\u0000\u0000\u0000\u00a0\u009c\u0001\u0000\u0000\u0000"+
		"\u00a1\u00ad\u0001\u0000\u0000\u0000\u00a2\u00a3\n\u0004\u0000\u0000\u00a3"+
		"\u00a4\u0005 \u0000\u0000\u00a4\u00ac\u0003\u0006\u0003\u0005\u00a5\u00a6"+
		"\n\u0003\u0000\u0000\u00a6\u00a7\u0007\u0001\u0000\u0000\u00a7\u00ac\u0003"+
		"\u0006\u0003\u0004\u00a8\u00a9\n\u0002\u0000\u0000\u00a9\u00aa\u0007\u0002"+
		"\u0000\u0000\u00aa\u00ac\u0003\u0006\u0003\u0003\u00ab\u00a2\u0001\u0000"+
		"\u0000\u0000\u00ab\u00a5\u0001\u0000\u0000\u0000\u00ab\u00a8\u0001\u0000"+
		"\u0000\u0000\u00ac\u00af\u0001\u0000\u0000\u0000\u00ad\u00ab\u0001\u0000"+
		"\u0000\u0000\u00ad\u00ae\u0001\u0000\u0000\u0000\u00ae\u0007\u0001\u0000"+
		"\u0000\u0000\u00af\u00ad\u0001\u0000\u0000\u0000\u00b0\u00b1\u0006\u0004"+
		"\uffff\uffff\u0000\u00b1\u00d1\u0005.\u0000\u0000\u00b2\u00b3\u0003\u0006"+
		"\u0003\u0000\u00b3\u00b4\u0005$\u0000\u0000\u00b4\u00b5\u0003\u0006\u0003"+
		"\u0000\u00b5\u00d1\u0001\u0000\u0000\u0000\u00b6\u00b7\u0003\u0006\u0003"+
		"\u0000\u00b7\u00b8\u0005%\u0000\u0000\u00b8\u00b9\u0003\u0006\u0003\u0000"+
		"\u00b9\u00d1\u0001\u0000\u0000\u0000\u00ba\u00bb\u0003\u0006\u0003\u0000"+
		"\u00bb\u00bc\u0005&\u0000\u0000\u00bc\u00bd\u0003\u0006\u0003\u0000\u00bd"+
		"\u00d1\u0001\u0000\u0000\u0000\u00be\u00bf\u0003\u0006\u0003\u0000\u00bf"+
		"\u00c0\u0005\'\u0000\u0000\u00c0\u00c1\u0003\u0006\u0003\u0000\u00c1\u00d1"+
		"\u0001\u0000\u0000\u0000\u00c2\u00c3\u0003\u0006\u0003\u0000\u00c3\u00c4"+
		"\u0005(\u0000\u0000\u00c4\u00c5\u0003\u0006\u0003\u0000\u00c5\u00d1\u0001"+
		"\u0000\u0000\u0000\u00c6\u00c7\u0003\u0006\u0003\u0000\u00c7\u00c8\u0005"+
		")\u0000\u0000\u00c8\u00c9\u0003\u0006\u0003\u0000\u00c9\u00d1\u0001\u0000"+
		"\u0000\u0000\u00ca\u00cb\u0005*\u0000\u0000\u00cb\u00d1\u0003\b\u0004"+
		"\u0005\u00cc\u00cd\u0005\n\u0000\u0000\u00cd\u00ce\u0003\b\u0004\u0000"+
		"\u00ce\u00cf\u0005\u0010\u0000\u0000\u00cf\u00d1\u0001\u0000\u0000\u0000"+
		"\u00d0\u00b0\u0001\u0000\u0000\u0000\u00d0\u00b2\u0001\u0000\u0000\u0000"+
		"\u00d0\u00b6\u0001\u0000\u0000\u0000\u00d0\u00ba\u0001\u0000\u0000\u0000"+
		"\u00d0\u00be\u0001\u0000\u0000\u0000\u00d0\u00c2\u0001\u0000\u0000\u0000"+
		"\u00d0\u00c6\u0001\u0000\u0000\u0000\u00d0\u00ca\u0001\u0000\u0000\u0000"+
		"\u00d0\u00cc\u0001\u0000\u0000\u0000\u00d1\u00dd\u0001\u0000\u0000\u0000"+
		"\u00d2\u00d3\n\u0004\u0000\u0000\u00d3\u00d4\u0005+\u0000\u0000\u00d4"+
		"\u00dc\u0003\b\u0004\u0005\u00d5\u00d6\n\u0003\u0000\u0000\u00d6\u00d7"+
		"\u0005,\u0000\u0000\u00d7\u00dc\u0003\b\u0004\u0004\u00d8\u00d9\n\u0002"+
		"\u0000\u0000\u00d9\u00da\u0005-\u0000\u0000\u00da\u00dc\u0003\b\u0004"+
		"\u0003\u00db\u00d2\u0001\u0000\u0000\u0000\u00db\u00d5\u0001\u0000\u0000"+
		"\u0000\u00db\u00d8\u0001\u0000\u0000\u0000\u00dc\u00df\u0001\u0000\u0000"+
		"\u0000\u00dd\u00db\u0001\u0000\u0000\u0000\u00dd\u00de\u0001\u0000\u0000"+
		"\u0000\u00de\t\u0001\u0000\u0000\u0000\u00df\u00dd\u0001\u0000\u0000\u0000"+
		"\u0015\u000f\u0018!;Pdgns~\u0083\u0088\u008d\u0094\u0098\u00a0\u00ab\u00ad"+
		"\u00d0\u00db\u00dd";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}