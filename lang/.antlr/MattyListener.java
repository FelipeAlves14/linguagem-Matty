// Generated from c:/Users/favas/Desktop/linguagem-Matty/lang/Matty.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MattyParser}.
 */
public interface MattyListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MattyParser#programa}.
	 * @param ctx the parse tree
	 */
	void enterPrograma(MattyParser.ProgramaContext ctx);
	/**
	 * Exit a parse tree produced by {@link MattyParser#programa}.
	 * @param ctx the parse tree
	 */
	void exitPrograma(MattyParser.ProgramaContext ctx);
	/**
	 * Enter a parse tree produced by {@link MattyParser#seqComando}.
	 * @param ctx the parse tree
	 */
	void enterSeqComando(MattyParser.SeqComandoContext ctx);
	/**
	 * Exit a parse tree produced by {@link MattyParser#seqComando}.
	 * @param ctx the parse tree
	 */
	void exitSeqComando(MattyParser.SeqComandoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code atribuicao}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterAtribuicao(MattyParser.AtribuicaoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code atribuicao}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitAtribuicao(MattyParser.AtribuicaoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code loop}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterLoop(MattyParser.LoopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code loop}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitLoop(MattyParser.LoopContext ctx);
	/**
	 * Enter a parse tree produced by the {@code repita}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterRepita(MattyParser.RepitaContext ctx);
	/**
	 * Exit a parse tree produced by the {@code repita}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitRepita(MattyParser.RepitaContext ctx);
	/**
	 * Enter a parse tree produced by the {@code escolha}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterEscolha(MattyParser.EscolhaContext ctx);
	/**
	 * Exit a parse tree produced by the {@code escolha}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitEscolha(MattyParser.EscolhaContext ctx);
	/**
	 * Enter a parse tree produced by the {@code skip}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterSkip(MattyParser.SkipContext ctx);
	/**
	 * Exit a parse tree produced by the {@code skip}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitSkip(MattyParser.SkipContext ctx);
	/**
	 * Enter a parse tree produced by the {@code se}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterSe(MattyParser.SeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code se}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitSe(MattyParser.SeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code exiba}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterExiba(MattyParser.ExibaContext ctx);
	/**
	 * Exit a parse tree produced by the {@code exiba}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitExiba(MattyParser.ExibaContext ctx);
	/**
	 * Enter a parse tree produced by the {@code bloco}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterBloco(MattyParser.BlocoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code bloco}
	 * labeled alternative in {@link MattyParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitBloco(MattyParser.BlocoContext ctx);
	/**
	 * Enter a parse tree produced by {@link MattyParser#valor}.
	 * @param ctx the parse tree
	 */
	void enterValor(MattyParser.ValorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MattyParser#valor}.
	 * @param ctx the parse tree
	 */
	void exitValor(MattyParser.ValorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code regra_de_tres}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterRegra_de_tres(MattyParser.Regra_de_tresContext ctx);
	/**
	 * Exit a parse tree produced by the {@code regra_de_tres}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitRegra_de_tres(MattyParser.Regra_de_tresContext ctx);
	/**
	 * Enter a parse tree produced by the {@code leia}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterLeia(MattyParser.LeiaContext ctx);
	/**
	 * Exit a parse tree produced by the {@code leia}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitLeia(MattyParser.LeiaContext ctx);
	/**
	 * Enter a parse tree produced by the {@code logaritmo}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterLogaritmo(MattyParser.LogaritmoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code logaritmo}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitLogaritmo(MattyParser.LogaritmoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code soma_ou_subtracao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterSoma_ou_subtracao(MattyParser.Soma_ou_subtracaoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code soma_ou_subtracao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitSoma_ou_subtracao(MattyParser.Soma_ou_subtracaoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code inteiro}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterInteiro(MattyParser.InteiroContext ctx);
	/**
	 * Exit a parse tree produced by the {@code inteiro}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitInteiro(MattyParser.InteiroContext ctx);
	/**
	 * Enter a parse tree produced by the {@code raiz}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterRaiz(MattyParser.RaizContext ctx);
	/**
	 * Exit a parse tree produced by the {@code raiz}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitRaiz(MattyParser.RaizContext ctx);
	/**
	 * Enter a parse tree produced by the {@code potenciacao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterPotenciacao(MattyParser.PotenciacaoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code potenciacao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitPotenciacao(MattyParser.PotenciacaoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code prioridade_de_operacoes}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterPrioridade_de_operacoes(MattyParser.Prioridade_de_operacoesContext ctx);
	/**
	 * Exit a parse tree produced by the {@code prioridade_de_operacoes}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitPrioridade_de_operacoes(MattyParser.Prioridade_de_operacoesContext ctx);
	/**
	 * Enter a parse tree produced by the {@code multiplicacao_ou_divisao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterMultiplicacao_ou_divisao(MattyParser.Multiplicacao_ou_divisaoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code multiplicacao_ou_divisao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitMultiplicacao_ou_divisao(MattyParser.Multiplicacao_ou_divisaoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code id}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterId(MattyParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code id}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitId(MattyParser.IdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code fracao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterFracao(MattyParser.FracaoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code fracao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitFracao(MattyParser.FracaoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code equacao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterEquacao(MattyParser.EquacaoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code equacao}
	 * labeled alternative in {@link MattyParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitEquacao(MattyParser.EquacaoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code nao_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterNao_logico(MattyParser.Nao_logicoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code nao_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitNao_logico(MattyParser.Nao_logicoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code bool}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterBool(MattyParser.BoolContext ctx);
	/**
	 * Exit a parse tree produced by the {@code bool}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitBool(MattyParser.BoolContext ctx);
	/**
	 * Enter a parse tree produced by the {@code maior_ou_igual}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterMaior_ou_igual(MattyParser.Maior_ou_igualContext ctx);
	/**
	 * Exit a parse tree produced by the {@code maior_ou_igual}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitMaior_ou_igual(MattyParser.Maior_ou_igualContext ctx);
	/**
	 * Enter a parse tree produced by the {@code maior}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterMaior(MattyParser.MaiorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code maior}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitMaior(MattyParser.MaiorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code e_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterE_logico(MattyParser.E_logicoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code e_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitE_logico(MattyParser.E_logicoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code menor}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterMenor(MattyParser.MenorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code menor}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitMenor(MattyParser.MenorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code menor_ou_igual}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterMenor_ou_igual(MattyParser.Menor_ou_igualContext ctx);
	/**
	 * Exit a parse tree produced by the {@code menor_ou_igual}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitMenor_ou_igual(MattyParser.Menor_ou_igualContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ou_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterOu_logico(MattyParser.Ou_logicoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ou_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitOu_logico(MattyParser.Ou_logicoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code diferente}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterDiferente(MattyParser.DiferenteContext ctx);
	/**
	 * Exit a parse tree produced by the {@code diferente}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitDiferente(MattyParser.DiferenteContext ctx);
	/**
	 * Enter a parse tree produced by the {@code prioridade_de_operacoes_logicas}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterPrioridade_de_operacoes_logicas(MattyParser.Prioridade_de_operacoes_logicasContext ctx);
	/**
	 * Exit a parse tree produced by the {@code prioridade_de_operacoes_logicas}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitPrioridade_de_operacoes_logicas(MattyParser.Prioridade_de_operacoes_logicasContext ctx);
	/**
	 * Enter a parse tree produced by the {@code igual}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterIgual(MattyParser.IgualContext ctx);
	/**
	 * Exit a parse tree produced by the {@code igual}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitIgual(MattyParser.IgualContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ou_exclusivo_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void enterOu_exclusivo_logico(MattyParser.Ou_exclusivo_logicoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ou_exclusivo_logico}
	 * labeled alternative in {@link MattyParser#booleano}.
	 * @param ctx the parse tree
	 */
	void exitOu_exclusivo_logico(MattyParser.Ou_exclusivo_logicoContext ctx);
}