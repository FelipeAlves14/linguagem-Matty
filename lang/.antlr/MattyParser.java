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
		T__45=46, BOOLEANO=47, DECIMAL=48, FRACTION=49, ID=50, INT=51, STRING=52, 
		COMENTARIO=53, ESPACO=54;
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
			"'choose'", "'('", "'):'", "':'", "'break'", "'_'", "'skip'", "'if'", 
			"')'", "'elif'", "'else'", "'while'", "'do'", "'print'", "'{'", "'}'", 
			"'read'", "'x'", "'|'", "'-'", "'~'", "'log'", "'\\'", "'/'", "'^'", 
			"'*'", "'//'", "'+'", "'=='", "'<='", "'<'", "'>'", "'>='", "'!='", "'!'", 
			"'and'", "'or'", "'xor'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, "BOOLEANO", 
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
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 1125899920573072L) != 0) );
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
	public static class LoopWhileContext extends ComandoContext {
		public BooleanoContext booleano() {
			return getRuleContext(BooleanoContext.class,0);
		}
		public ComandoContext comando() {
			return getRuleContext(ComandoContext.class,0);
		}
		public LoopWhileContext(ComandoContext ctx) { copyFrom(ctx); }
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
	public static class BlocoContext extends ComandoContext {
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public BlocoContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SkipContext extends ComandoContext {
		public SkipContext(ComandoContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LoopForContext extends ComandoContext {
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
		public LoopForContext(ComandoContext ctx) { copyFrom(ctx); }
	}

	public final ComandoContext comando() throws RecognitionException {
		ComandoContext _localctx = new ComandoContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_comando);
		int _la;
		try {
			setState(117);
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
				_localctx = new LoopForContext(_localctx);
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
				setState(60);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 4222127905440768L) != 0)) {
					{
					{
					setState(53);
					expressao(0);
					setState(54);
					match(T__11);
					setState(55);
					comando();
					setState(56);
					match(T__12);
					}
					}
					setState(62);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(63);
				match(T__13);
				setState(64);
				match(T__11);
				setState(65);
				comando();
				}
				break;
			case T__14:
				_localctx = new SkipContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(67);
				match(T__14);
				}
				break;
			case T__15:
				_localctx = new SeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(68);
				match(T__15);
				setState(69);
				match(T__9);
				setState(70);
				booleano(0);
				setState(71);
				match(T__16);
				setState(72);
				comando();
				setState(81);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__17) {
					{
					{
					setState(73);
					match(T__17);
					setState(74);
					match(T__9);
					setState(75);
					booleano(0);
					setState(76);
					match(T__16);
					setState(77);
					comando();
					}
					}
					setState(83);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(84);
				match(T__18);
				setState(85);
				comando();
				}
				break;
			case T__19:
				_localctx = new LoopWhileContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(87);
				match(T__19);
				setState(88);
				match(T__9);
				setState(89);
				booleano(0);
				setState(90);
				match(T__16);
				setState(91);
				match(T__20);
				setState(92);
				comando();
				}
				break;
			case T__21:
				_localctx = new ExibaContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(94);
				match(T__21);
				setState(95);
				match(T__9);
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8875261114188800L) != 0)) {
					{
					setState(96);
					valor();
					setState(101);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(97);
						match(T__1);
						setState(98);
						valor();
						}
						}
						setState(103);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(106);
				match(T__16);
				}
				break;
			case T__22:
				_localctx = new BlocoContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(107);
				match(T__22);
				setState(111); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(108);
					comando();
					setState(109);
					match(T__0);
					}
					}
					setState(113); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 1125899920573072L) != 0) );
				setState(115);
				match(T__23);
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
			setState(122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(119);
				expressao(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(120);
				booleano(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(121);
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
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				_localctx = new InteiroContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(125);
				match(INT);
				}
				break;
			case 2:
				{
				_localctx = new DecimalContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(126);
				match(DECIMAL);
				}
				break;
			case 3:
				{
				_localctx = new FracaoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(127);
				match(FRACTION);
				}
				break;
			case 4:
				{
				_localctx = new LeiaContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(128);
				match(T__24);
				}
				break;
			case 5:
				{
				_localctx = new IdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(129);
				match(ID);
				}
				break;
			case 6:
				{
				_localctx = new RegraDeTresContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(130);
				match(T__9);
				setState(133);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__24:
				case T__29:
				case T__30:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(131);
					expressao(0);
					}
					break;
				case T__25:
					{
					setState(132);
					match(T__25);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(135);
				match(T__26);
				setState(138);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__24:
				case T__29:
				case T__30:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(136);
					expressao(0);
					}
					break;
				case T__25:
					{
					setState(137);
					match(T__25);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(140);
				_la = _input.LA(1);
				if ( !(_la==T__27 || _la==T__28) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(143);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__24:
				case T__29:
				case T__30:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(141);
					expressao(0);
					}
					break;
				case T__25:
					{
					setState(142);
					match(T__25);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(145);
				match(T__26);
				setState(148);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__9:
				case T__24:
				case T__29:
				case T__30:
				case DECIMAL:
				case FRACTION:
				case ID:
				case INT:
					{
					setState(146);
					expressao(0);
					}
					break;
				case T__25:
					{
					setState(147);
					match(T__25);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(150);
				match(T__16);
				}
				break;
			case 7:
				{
				_localctx = new LogaritmoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(151);
				match(T__29);
				setState(152);
				expressao(0);
				setState(155);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(153);
					match(T__13);
					setState(154);
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
				setState(157);
				match(T__30);
				setState(159);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 4222127905440768L) != 0)) {
					{
					setState(158);
					expressao(0);
					}
				}

				setState(161);
				match(T__31);
				setState(162);
				expressao(5);
				}
				break;
			case 9:
				{
				_localctx = new PrioridadeDeOperacoesContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(163);
				match(T__9);
				setState(164);
				expressao(0);
				setState(165);
				match(T__16);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(180);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(178);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						_localctx = new PotenciacaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(169);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(170);
						match(T__32);
						setState(171);
						expressao(5);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicacaoOuDivisaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(172);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(173);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 55834574848L) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(174);
						expressao(4);
						}
						break;
					case 3:
						{
						_localctx = new SomaOuSubtracaoContext(new ExpressaoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expressao);
						setState(175);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(176);
						_la = _input.LA(1);
						if ( !(_la==T__27 || _la==T__35) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(177);
						expressao(3);
						}
						break;
					}
					} 
				}
				setState(182);
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
			setState(215);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(184);
				match(BOOLEANO);
				}
				break;
			case 2:
				{
				_localctx = new IgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(185);
				expressao(0);
				setState(186);
				match(T__36);
				setState(187);
				expressao(0);
				}
				break;
			case 3:
				{
				_localctx = new MenorOuIgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(189);
				expressao(0);
				setState(190);
				match(T__37);
				setState(191);
				expressao(0);
				}
				break;
			case 4:
				{
				_localctx = new MenorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(193);
				expressao(0);
				setState(194);
				match(T__38);
				setState(195);
				expressao(0);
				}
				break;
			case 5:
				{
				_localctx = new MaiorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(197);
				expressao(0);
				setState(198);
				match(T__39);
				setState(199);
				expressao(0);
				}
				break;
			case 6:
				{
				_localctx = new MaiorOuIgualContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(201);
				expressao(0);
				setState(202);
				match(T__40);
				setState(203);
				expressao(0);
				}
				break;
			case 7:
				{
				_localctx = new DiferenteContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(205);
				expressao(0);
				setState(206);
				match(T__41);
				setState(207);
				expressao(0);
				}
				break;
			case 8:
				{
				_localctx = new NaoLogicoContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(209);
				match(T__42);
				setState(210);
				booleano(5);
				}
				break;
			case 9:
				{
				_localctx = new PrioridadeDeOperacoesLogicasContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(211);
				match(T__9);
				setState(212);
				booleano(0);
				setState(213);
				match(T__16);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(228);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(226);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
					case 1:
						{
						_localctx = new ELogicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(217);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(218);
						match(T__43);
						setState(219);
						booleano(5);
						}
						break;
					case 2:
						{
						_localctx = new OuLogicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(220);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(221);
						match(T__44);
						setState(222);
						booleano(4);
						}
						break;
					case 3:
						{
						_localctx = new OuExclusivoLogicoContext(new BooleanoContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_booleano);
						setState(223);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(224);
						match(T__45);
						setState(225);
						booleano(3);
						}
						break;
					}
					} 
				}
				setState(230);
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
		"\u0004\u00016\u00e8\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0004\u0000\u000e\b\u0000\u000b\u0000\f"+
		"\u0000\u000f\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0005\u0001\u0017\b\u0001\n\u0001\f\u0001\u001a\t\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0005\u0001 \b\u0001\n\u0001\f\u0001#\t"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001;\b"+
		"\u0001\n\u0001\f\u0001>\t\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0005\u0001P\b\u0001\n\u0001\f\u0001S\t\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0005\u0001d\b\u0001\n\u0001\f\u0001g\t\u0001\u0003"+
		"\u0001i\b\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0004\u0001p\b\u0001\u000b\u0001\f\u0001q\u0001\u0001\u0001\u0001"+
		"\u0003\u0001v\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002"+
		"{\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u0086\b\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u008b\b\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0003\u0003\u0090\b\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0003\u0003\u0095\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0003\u0003\u009c\b\u0003\u0001\u0003\u0001\u0003"+
		"\u0003\u0003\u00a0\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0003\u0003\u00a8\b\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0005\u0003\u00b3\b\u0003\n\u0003\f\u0003\u00b6\t\u0003\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0003\u0004\u00d8\b\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0005\u0004\u00e3\b\u0004\n\u0004\f\u0004\u00e6\t\u0004\u0001\u0004"+
		"\u0000\u0002\u0006\b\u0005\u0000\u0002\u0004\u0006\b\u0000\u0003\u0001"+
		"\u0000\u001c\u001d\u0002\u0000  \"#\u0002\u0000\u001c\u001c$$\u0110\u0000"+
		"\r\u0001\u0000\u0000\u0000\u0002u\u0001\u0000\u0000\u0000\u0004z\u0001"+
		"\u0000\u0000\u0000\u0006\u00a7\u0001\u0000\u0000\u0000\b\u00d7\u0001\u0000"+
		"\u0000\u0000\n\u000b\u0003\u0002\u0001\u0000\u000b\f\u0005\u0001\u0000"+
		"\u0000\f\u000e\u0001\u0000\u0000\u0000\r\n\u0001\u0000\u0000\u0000\u000e"+
		"\u000f\u0001\u0000\u0000\u0000\u000f\r\u0001\u0000\u0000\u0000\u000f\u0010"+
		"\u0001\u0000\u0000\u0000\u0010\u0011\u0001\u0000\u0000\u0000\u0011\u0012"+
		"\u0005\u0000\u0000\u0001\u0012\u0001\u0001\u0000\u0000\u0000\u0013\u0018"+
		"\u00052\u0000\u0000\u0014\u0015\u0005\u0002\u0000\u0000\u0015\u0017\u0005"+
		"2\u0000\u0000\u0016\u0014\u0001\u0000\u0000\u0000\u0017\u001a\u0001\u0000"+
		"\u0000\u0000\u0018\u0016\u0001\u0000\u0000\u0000\u0018\u0019\u0001\u0000"+
		"\u0000\u0000\u0019\u001b\u0001\u0000\u0000\u0000\u001a\u0018\u0001\u0000"+
		"\u0000\u0000\u001b\u001c\u0005\u0003\u0000\u0000\u001c!\u0003\u0004\u0002"+
		"\u0000\u001d\u001e\u0005\u0002\u0000\u0000\u001e \u0003\u0004\u0002\u0000"+
		"\u001f\u001d\u0001\u0000\u0000\u0000 #\u0001\u0000\u0000\u0000!\u001f"+
		"\u0001\u0000\u0000\u0000!\"\u0001\u0000\u0000\u0000\"v\u0001\u0000\u0000"+
		"\u0000#!\u0001\u0000\u0000\u0000$%\u0005\u0004\u0000\u0000%&\u00052\u0000"+
		"\u0000&\'\u0005\u0005\u0000\u0000\'(\u0003\u0006\u0003\u0000()\u0005\u0006"+
		"\u0000\u0000)*\u0003\u0006\u0003\u0000*+\u0003\u0002\u0001\u0000+v\u0001"+
		"\u0000\u0000\u0000,-\u0005\u0007\u0000\u0000-.\u0003\u0006\u0003\u0000"+
		"./\u0005\b\u0000\u0000/0\u0003\u0002\u0001\u00000v\u0001\u0000\u0000\u0000"+
		"12\u0005\t\u0000\u000023\u0005\n\u0000\u000034\u0003\u0006\u0003\u0000"+
		"4<\u0005\u000b\u0000\u000056\u0003\u0006\u0003\u000067\u0005\f\u0000\u0000"+
		"78\u0003\u0002\u0001\u000089\u0005\r\u0000\u00009;\u0001\u0000\u0000\u0000"+
		":5\u0001\u0000\u0000\u0000;>\u0001\u0000\u0000\u0000<:\u0001\u0000\u0000"+
		"\u0000<=\u0001\u0000\u0000\u0000=?\u0001\u0000\u0000\u0000><\u0001\u0000"+
		"\u0000\u0000?@\u0005\u000e\u0000\u0000@A\u0005\f\u0000\u0000AB\u0003\u0002"+
		"\u0001\u0000Bv\u0001\u0000\u0000\u0000Cv\u0005\u000f\u0000\u0000DE\u0005"+
		"\u0010\u0000\u0000EF\u0005\n\u0000\u0000FG\u0003\b\u0004\u0000GH\u0005"+
		"\u0011\u0000\u0000HQ\u0003\u0002\u0001\u0000IJ\u0005\u0012\u0000\u0000"+
		"JK\u0005\n\u0000\u0000KL\u0003\b\u0004\u0000LM\u0005\u0011\u0000\u0000"+
		"MN\u0003\u0002\u0001\u0000NP\u0001\u0000\u0000\u0000OI\u0001\u0000\u0000"+
		"\u0000PS\u0001\u0000\u0000\u0000QO\u0001\u0000\u0000\u0000QR\u0001\u0000"+
		"\u0000\u0000RT\u0001\u0000\u0000\u0000SQ\u0001\u0000\u0000\u0000TU\u0005"+
		"\u0013\u0000\u0000UV\u0003\u0002\u0001\u0000Vv\u0001\u0000\u0000\u0000"+
		"WX\u0005\u0014\u0000\u0000XY\u0005\n\u0000\u0000YZ\u0003\b\u0004\u0000"+
		"Z[\u0005\u0011\u0000\u0000[\\\u0005\u0015\u0000\u0000\\]\u0003\u0002\u0001"+
		"\u0000]v\u0001\u0000\u0000\u0000^_\u0005\u0016\u0000\u0000_h\u0005\n\u0000"+
		"\u0000`e\u0003\u0004\u0002\u0000ab\u0005\u0002\u0000\u0000bd\u0003\u0004"+
		"\u0002\u0000ca\u0001\u0000\u0000\u0000dg\u0001\u0000\u0000\u0000ec\u0001"+
		"\u0000\u0000\u0000ef\u0001\u0000\u0000\u0000fi\u0001\u0000\u0000\u0000"+
		"ge\u0001\u0000\u0000\u0000h`\u0001\u0000\u0000\u0000hi\u0001\u0000\u0000"+
		"\u0000ij\u0001\u0000\u0000\u0000jv\u0005\u0011\u0000\u0000ko\u0005\u0017"+
		"\u0000\u0000lm\u0003\u0002\u0001\u0000mn\u0005\u0001\u0000\u0000np\u0001"+
		"\u0000\u0000\u0000ol\u0001\u0000\u0000\u0000pq\u0001\u0000\u0000\u0000"+
		"qo\u0001\u0000\u0000\u0000qr\u0001\u0000\u0000\u0000rs\u0001\u0000\u0000"+
		"\u0000st\u0005\u0018\u0000\u0000tv\u0001\u0000\u0000\u0000u\u0013\u0001"+
		"\u0000\u0000\u0000u$\u0001\u0000\u0000\u0000u,\u0001\u0000\u0000\u0000"+
		"u1\u0001\u0000\u0000\u0000uC\u0001\u0000\u0000\u0000uD\u0001\u0000\u0000"+
		"\u0000uW\u0001\u0000\u0000\u0000u^\u0001\u0000\u0000\u0000uk\u0001\u0000"+
		"\u0000\u0000v\u0003\u0001\u0000\u0000\u0000w{\u0003\u0006\u0003\u0000"+
		"x{\u0003\b\u0004\u0000y{\u00054\u0000\u0000zw\u0001\u0000\u0000\u0000"+
		"zx\u0001\u0000\u0000\u0000zy\u0001\u0000\u0000\u0000{\u0005\u0001\u0000"+
		"\u0000\u0000|}\u0006\u0003\uffff\uffff\u0000}\u00a8\u00053\u0000\u0000"+
		"~\u00a8\u00050\u0000\u0000\u007f\u00a8\u00051\u0000\u0000\u0080\u00a8"+
		"\u0005\u0019\u0000\u0000\u0081\u00a8\u00052\u0000\u0000\u0082\u0085\u0005"+
		"\n\u0000\u0000\u0083\u0086\u0003\u0006\u0003\u0000\u0084\u0086\u0005\u001a"+
		"\u0000\u0000\u0085\u0083\u0001\u0000\u0000\u0000\u0085\u0084\u0001\u0000"+
		"\u0000\u0000\u0086\u0087\u0001\u0000\u0000\u0000\u0087\u008a\u0005\u001b"+
		"\u0000\u0000\u0088\u008b\u0003\u0006\u0003\u0000\u0089\u008b\u0005\u001a"+
		"\u0000\u0000\u008a\u0088\u0001\u0000\u0000\u0000\u008a\u0089\u0001\u0000"+
		"\u0000\u0000\u008b\u008c\u0001\u0000\u0000\u0000\u008c\u008f\u0007\u0000"+
		"\u0000\u0000\u008d\u0090\u0003\u0006\u0003\u0000\u008e\u0090\u0005\u001a"+
		"\u0000\u0000\u008f\u008d\u0001\u0000\u0000\u0000\u008f\u008e\u0001\u0000"+
		"\u0000\u0000\u0090\u0091\u0001\u0000\u0000\u0000\u0091\u0094\u0005\u001b"+
		"\u0000\u0000\u0092\u0095\u0003\u0006\u0003\u0000\u0093\u0095\u0005\u001a"+
		"\u0000\u0000\u0094\u0092\u0001\u0000\u0000\u0000\u0094\u0093\u0001\u0000"+
		"\u0000\u0000\u0095\u0096\u0001\u0000\u0000\u0000\u0096\u00a8\u0005\u0011"+
		"\u0000\u0000\u0097\u0098\u0005\u001e\u0000\u0000\u0098\u009b\u0003\u0006"+
		"\u0003\u0000\u0099\u009a\u0005\u000e\u0000\u0000\u009a\u009c\u0003\u0006"+
		"\u0003\u0000\u009b\u0099\u0001\u0000\u0000\u0000\u009b\u009c\u0001\u0000"+
		"\u0000\u0000\u009c\u00a8\u0001\u0000\u0000\u0000\u009d\u009f\u0005\u001f"+
		"\u0000\u0000\u009e\u00a0\u0003\u0006\u0003\u0000\u009f\u009e\u0001\u0000"+
		"\u0000\u0000\u009f\u00a0\u0001\u0000\u0000\u0000\u00a0\u00a1\u0001\u0000"+
		"\u0000\u0000\u00a1\u00a2\u0005 \u0000\u0000\u00a2\u00a8\u0003\u0006\u0003"+
		"\u0005\u00a3\u00a4\u0005\n\u0000\u0000\u00a4\u00a5\u0003\u0006\u0003\u0000"+
		"\u00a5\u00a6\u0005\u0011\u0000\u0000\u00a6\u00a8\u0001\u0000\u0000\u0000"+
		"\u00a7|\u0001\u0000\u0000\u0000\u00a7~\u0001\u0000\u0000\u0000\u00a7\u007f"+
		"\u0001\u0000\u0000\u0000\u00a7\u0080\u0001\u0000\u0000\u0000\u00a7\u0081"+
		"\u0001\u0000\u0000\u0000\u00a7\u0082\u0001\u0000\u0000\u0000\u00a7\u0097"+
		"\u0001\u0000\u0000\u0000\u00a7\u009d\u0001\u0000\u0000\u0000\u00a7\u00a3"+
		"\u0001\u0000\u0000\u0000\u00a8\u00b4\u0001\u0000\u0000\u0000\u00a9\u00aa"+
		"\n\u0004\u0000\u0000\u00aa\u00ab\u0005!\u0000\u0000\u00ab\u00b3\u0003"+
		"\u0006\u0003\u0005\u00ac\u00ad\n\u0003\u0000\u0000\u00ad\u00ae\u0007\u0001"+
		"\u0000\u0000\u00ae\u00b3\u0003\u0006\u0003\u0004\u00af\u00b0\n\u0002\u0000"+
		"\u0000\u00b0\u00b1\u0007\u0002\u0000\u0000\u00b1\u00b3\u0003\u0006\u0003"+
		"\u0003\u00b2\u00a9\u0001\u0000\u0000\u0000\u00b2\u00ac\u0001\u0000\u0000"+
		"\u0000\u00b2\u00af\u0001\u0000\u0000\u0000\u00b3\u00b6\u0001\u0000\u0000"+
		"\u0000\u00b4\u00b2\u0001\u0000\u0000\u0000\u00b4\u00b5\u0001\u0000\u0000"+
		"\u0000\u00b5\u0007\u0001\u0000\u0000\u0000\u00b6\u00b4\u0001\u0000\u0000"+
		"\u0000\u00b7\u00b8\u0006\u0004\uffff\uffff\u0000\u00b8\u00d8\u0005/\u0000"+
		"\u0000\u00b9\u00ba\u0003\u0006\u0003\u0000\u00ba\u00bb\u0005%\u0000\u0000"+
		"\u00bb\u00bc\u0003\u0006\u0003\u0000\u00bc\u00d8\u0001\u0000\u0000\u0000"+
		"\u00bd\u00be\u0003\u0006\u0003\u0000\u00be\u00bf\u0005&\u0000\u0000\u00bf"+
		"\u00c0\u0003\u0006\u0003\u0000\u00c0\u00d8\u0001\u0000\u0000\u0000\u00c1"+
		"\u00c2\u0003\u0006\u0003\u0000\u00c2\u00c3\u0005\'\u0000\u0000\u00c3\u00c4"+
		"\u0003\u0006\u0003\u0000\u00c4\u00d8\u0001\u0000\u0000\u0000\u00c5\u00c6"+
		"\u0003\u0006\u0003\u0000\u00c6\u00c7\u0005(\u0000\u0000\u00c7\u00c8\u0003"+
		"\u0006\u0003\u0000\u00c8\u00d8\u0001\u0000\u0000\u0000\u00c9\u00ca\u0003"+
		"\u0006\u0003\u0000\u00ca\u00cb\u0005)\u0000\u0000\u00cb\u00cc\u0003\u0006"+
		"\u0003\u0000\u00cc\u00d8\u0001\u0000\u0000\u0000\u00cd\u00ce\u0003\u0006"+
		"\u0003\u0000\u00ce\u00cf\u0005*\u0000\u0000\u00cf\u00d0\u0003\u0006\u0003"+
		"\u0000\u00d0\u00d8\u0001\u0000\u0000\u0000\u00d1\u00d2\u0005+\u0000\u0000"+
		"\u00d2\u00d8\u0003\b\u0004\u0005\u00d3\u00d4\u0005\n\u0000\u0000\u00d4"+
		"\u00d5\u0003\b\u0004\u0000\u00d5\u00d6\u0005\u0011\u0000\u0000\u00d6\u00d8"+
		"\u0001\u0000\u0000\u0000\u00d7\u00b7\u0001\u0000\u0000\u0000\u00d7\u00b9"+
		"\u0001\u0000\u0000\u0000\u00d7\u00bd\u0001\u0000\u0000\u0000\u00d7\u00c1"+
		"\u0001\u0000\u0000\u0000\u00d7\u00c5\u0001\u0000\u0000\u0000\u00d7\u00c9"+
		"\u0001\u0000\u0000\u0000\u00d7\u00cd\u0001\u0000\u0000\u0000\u00d7\u00d1"+
		"\u0001\u0000\u0000\u0000\u00d7\u00d3\u0001\u0000\u0000\u0000\u00d8\u00e4"+
		"\u0001\u0000\u0000\u0000\u00d9\u00da\n\u0004\u0000\u0000\u00da\u00db\u0005"+
		",\u0000\u0000\u00db\u00e3\u0003\b\u0004\u0005\u00dc\u00dd\n\u0003\u0000"+
		"\u0000\u00dd\u00de\u0005-\u0000\u0000\u00de\u00e3\u0003\b\u0004\u0004"+
		"\u00df\u00e0\n\u0002\u0000\u0000\u00e0\u00e1\u0005.\u0000\u0000\u00e1"+
		"\u00e3\u0003\b\u0004\u0003\u00e2\u00d9\u0001\u0000\u0000\u0000\u00e2\u00dc"+
		"\u0001\u0000\u0000\u0000\u00e2\u00df\u0001\u0000\u0000\u0000\u00e3\u00e6"+
		"\u0001\u0000\u0000\u0000\u00e4\u00e2\u0001\u0000\u0000\u0000\u00e4\u00e5"+
		"\u0001\u0000\u0000\u0000\u00e5\t\u0001\u0000\u0000\u0000\u00e6\u00e4\u0001"+
		"\u0000\u0000\u0000\u0016\u000f\u0018!<Qehquz\u0085\u008a\u008f\u0094\u009b"+
		"\u009f\u00a7\u00b2\u00b4\u00d7\u00e2\u00e4";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}