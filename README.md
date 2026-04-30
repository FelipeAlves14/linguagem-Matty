# Matty

- [Reconhecimento](#reconhecimento)
- [Definição](#definição)
- [Estruturação](#estruturação)

---

## Reconhecimento
- [Texto Síntese](#texto-síntese)
- [Tabela de Similares](#tabela-de-similares)
- [Lista de Demandas](#lista-de-demandas)
- [Tabela de Ferramentas](#tabela-de-ferramentas)

---

### Texto síntese

Olhando para como são feitas operações matemáticas, das mais simples até as mais complexas hoje em dia em linguagens de programação, nota-se uma variedade muito pequena de operações possíveis que são realizadas de forma nativa por esses softwares, levando a refletir sobre a importância da matemática para a programação, e das operações que a compõem que, ainda que simples, não tem uma composição nativa ou então amigável para o usuário da linguagem, levando a importação de bibliotecas para realização dessas operações. Portanto, foi proposto a criação da linguagem `Matty`, uma linguagem simples focada inteiramente em operações matemáticas simples já existentes nativamente em várias linguagens, com a adição de outras operações que, por mais que sejam simples, não contém uma implementação nativa por parte da linguagem, como é o caso de operações com frações, raízes, equações simples, regras de três simples e logaritmos. Com a criação desta linguagem, a resolução de problemas matemáticos se torna mais intuitiva, legível e fácil de se aplicar, sem necessidades ou dependências de bibliotecas e códigos externos importados, assim carregando recursos a mais e comprometendo o uso de memória na execução do programa. Por se tratar de um aditivo ao que já existe, Matty procura conter uma sintaxe usual e similar as linguagens mais utilizadas em 2026, a fim de aproximar os(as) programadores(as) para esta novidade da matemática.

### Tabela de Similares

| **Linguagem** | **Descrição** | **Diferenciais** |
| :-------- | --------- | ------------ |
| Julia | Linguagem moderna e eficiente focada na resolução de problemas matemáticos e científicos, unindo a facilidade do Python com a eficiência do C/C++ | - Soluções matemáticas propostas por Matty são feitas através de pacotes importados ou conjunto de operações primitivas |
| Python | Linguagem robusta com vários auxiliares, podendo solucionar vários tipos de problemas relacionados a matemática e entre outras diversas áreas e subáreas | - Soluções matemáticas propostas por Matty são feitas através de pacotes importados ou conjunto de operações primitivas |

### Lista de Demandas

- Criação de um tipo primitivo `fraction` para realizar operações de soma, subtração, multiplicação e divisão com frações, juntamente com a sua sintaxe
- Criação de sintaxe para representar operações de raízes, equações, "regras de três" e logaritmos
- Criação de sintaxe para representar incógnitas em equações e "regras de três"
- Mantimento de operações já existentes em linguagens de programação como condicionais, e entrada e saída de dados a fim de manter a base das linguagens de programação, assim tornando a linguagem flexível para diferentes soluções de problemas

### Tabela de Ferramentas

| **Ferramenta** | **Funcionalidade** |
| :--------- | -------------- |
| ANTLR | Elaboração da gramática em .g4 para operações existentes e novas propostas para em seguida gerar o lexer e o parser. |

---

## Definição

- [Tabela de tipos](#tabela-de-tipos)
- [Tabela de operadores](#tabela-de-operadores)
- [Tabela de estruturas da linguagem](#tabela-de-estruturas-da-linguagem)
- [Tabela de palavras-reservadas](#tabela-de-palavras-reservadas)

### Tabela de tipos

| **Nome do tipo** | **Descrição** |
| :--------------- | ------------- |
| Bool | Tipo booleano usado para representar expressões de verdadeiro/falso |
| Decimal | Tipo numérico usado para representar números que contém partes fracionárias separadas por `.` |
| Fraction | Tipo numérico usado para representar números fracionários |
| Integer | Tipo numérico usado para representar números sem partes fracionárias |
| String | Tipo textual usado para representar cadeias de caracteres |

### Tabela de operadores

| **Operador** | **Descrição** |
| :----------- | ------------- |
| ; | Fim de um comando |
| + | Soma de tipos numéricos |
| - | Subtração de tipos numéricos |
| * | Multiplicação de tipos numéricos |
| / | Divisão de tipos numéricos |
| // | Divisão inteira de tipos numéricos |
| /// | Declaração de uma fração |
| ^ | Potenciação de tipos numéricos |
| \/ | Operação de raízes de tipos numéricos |
| ´´ | Declaração de um bloco de equação |
| (&#124; - &#124;) | Operação de "regra de três" diretamente proporcional com tipos numéricos |
| (&#124; ~ &#124;) | Operação de "regra de três" inversamente proporcional com tipos numéricos |
| logX_Y | Operação logarítmica com tipos numéricos |
| > | Operador booleano "maior que" |
| < | Operador booleano "menor que" |
| >= | Operador booleano "maior ou igual que" |
| <= | Operador booleano "menor ou igual que" |
| == | Operador booleano "igual a" |
| != | Operador booleano "diferente de" |
| () | Priorização de operações matemáticas ou bloco de condição |
| {} | Definição de bloco de código |
| ->> | Iniciação de uma linha comentada |

### Tabela de estruturas da linguagem

| **Estrutura da Linguagem** | **Descrição** | **Estrutura Exemplo** |
| :------------------------- | ------------- | :-------------------- |
| Declaração de variável | Armazenamento de valores da linguagem em um espaço variável de memória | `a = 2 + 2;` |
| Declaração de equação | Declara uma equação que retorna um resultado numérico dada uma expressão completa com uma incógnita "x" | `a = ´2x = 9´;` |
| Condicional | Declaração de condição para executar blocos de código dado um booleano | `if(x == y){...}else{...}` |
| Definição de uma "regra de três" | Declara uma operação de regra de três dado 3 valores e uma incógnita "x" | a = (3 &#124; 100 - x &#124; 300); |
| Definição de uma raíz | Declara uma operação de raíz dado um índice (caso não exista índice, utiliza-se 2) e um radicando | `a = 3\/8;` |
| Definição de um logaritmo | Declara uma operação de logaritmo dado um logaritmando e uma base (caso não exista base, utiliza-se 10) | `a = log8_2;` |
| Operação com fração | Realiza uma operação qualquer com números fracionários | `a = 2///3 + 4///6;` |
| Entrada de dados | Abre a entrada de dados pelo usuário | `a = read;` |
| Saída de dados | Executa a saída de dados do programa | `print(2 + 2);` |

### Tabela de palavras-reservadas

| **Palavra-chave** | **Descrição** | **Exemplo de Uso** |
| :---------------- | ------------- | :----------------- |
| if/else | Declaração de um bloco condicional | `if(x == y){...}else{...}` |
| read | Realiza entrada de dados por parte do usuário | `read;` |
| print | Executa a saída de dados do programa | `print(2 + 2);` |
| log | Realiza a operação de logaritmo | `log100` |
| true/false | Valores booleanos possíveis | `true != false` |
| ->> | Comentário de código | `->> Código comentado :D` |

---

## Estruturação

- [Documento de ambiente de trabalho](#documento-de-ambiente-de-trabalho)

### Documento de ambiente de trabalho

| **Utilidade** | **Ferramenta** |
| ------------- | :------------- |
| Ferramenta de versionamento e armazenamento de código | Github |
| Ambiente de Desenvolvimento Integrado (IDE) | Visual Studio Code |
| Sistema Operacional | Windows |
