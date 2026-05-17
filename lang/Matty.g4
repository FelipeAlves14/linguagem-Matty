grammar Matty;

programa: (seqComando)+ EOF; // sequência de comandos

seqComando: comando ';' (comando ';')*;

comando:
	ID (',' ID)* '=' valor (',' valor)*										# atribuicao
	| 'for' ID 'to' expressao 'at' expressao comando						# loop
	| 'make' expressao 'times' comando										# repita
	| 'choose' '(' expressao '):' (expressao ':' comando)* '_' ':' comando	# escolha
	| 'skip'																# skip
	| 'if' '(' booleano ')' comando (
		'elif' '(' booleano ')' comando
	)* 'else' comando						# se
	| 'while' '(' booleano ')' 'do' comando	# loop
	| 'print' '(' (valor (',' valor)*)? ')'	# exiba
	| '{' seqComando '}'					# bloco;

valor: expressao | booleano | STRING;

expressao:
	INT			# inteiro
	| DECIMAL	# decimal
	| FRACTION	# fracao
	| 'read'	# leia
	| ID		# id
	| '(' (expressao | 'x') '|' (expressao | 'x') ('-' | '~') (
		expressao
		| 'x'
	) '|' (expressao | 'x') ')'					# regraDeTres
	| 'log' expressao ('_' expressao)?			# logaritmo
	| '\\' (expressao)? '/' expressao			# raiz
	| expressao '^' expressao					# potenciacao
	| expressao ('*' | '/' | '//') expressao	# multiplicacaoOuDivisao
	| expressao ('+' | '-') expressao			# somaOuSubtracao
	| '(' expressao ')'							# prioridadeDeOperacoes;

booleano:
	BOOLEANO					# bool
	| expressao '==' expressao	# igual
	| expressao '<=' expressao	# menorOuIgual
	| expressao '<' expressao	# menor
	| expressao '>' expressao	# maior
	| expressao '>=' expressao	# maiorOuIgual
	| expressao '!=' expressao	# diferente
	| '!' booleano				# naoLogico
	| booleano 'and' booleano	# eLogico
	| booleano 'or' booleano	# ouLogico
	| booleano 'xor' booleano	# ouExclusivoLogico
	| '(' booleano ')'			# prioridadeDeOperacoesLogicas;

BOOLEANO: 'true' | 'false';
DECIMAL: ('0' ..'9')+ '.' ('0' ..'9')+;
FRACTION: (INT | DECIMAL) '///' (INT | DECIMAL);
ID: ('a' ..'z')+;
INT: ('0' ..'9')+;
STRING: '"' .*? '"';
COMENTARIO: '->>' .*? '\n' -> skip;
ESPACO: [ \t\n\r] -> skip;