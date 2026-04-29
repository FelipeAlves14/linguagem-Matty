# Matty

- [Texto Síntese](#texto-síntese)
- [Tabela de Similares](#tabela-de-similares)
- [Lista de Demandas](#lista-de-demandas)
- [Tabela de Ferramentas](#tabela-de-ferramentas)

## Texto síntese

Olhando para como são feitas operações matemáticas, das mais simples até as mais complexas hoje em dia em linguagens de programação, nota-se uma variedade muito pequena de operações possíveis que são realizadas de forma nativa por esses softwares, levando a refletir sobre a importância da matemática para a programação, e das operações que a compõem que, ainda que simples, não tem uma composição nativa ou então amigável para o usuário da linguagem, levando a importação de bibliotecas para realização dessas operações. Portanto, foi proposto a criação da linguagem `Matty`, uma linguagem simples focada inteiramente em operações matemáticas simples já existentes nativamente em várias linguagens, com a adição de outras operações que, por mais que sejam simples, não contém uma implementação nativa por parte da linguagem, como é o caso de operações com frações, raízes, equações simples, regras de três simples e logaritmos. Com a criação desta linguagem, a resolução de problemas matemáticos se torna mais intuitiva, legível e fácil de se aplicar, sem necessidades ou dependências de bibliotecas e códigos externos importados, assim carregando recursos a mais e comprometendo o uso de memória na execução do programa. Por se tratar de um aditivo ao que já existe, Matty procura conter uma sintaxe usual e similar as linguagens mais utilizadas em 2026, a fim de aproximar os(as) programadores(as) para esta novidade da matemática.

## Tabela de Similares

| Linguagem | Descrição | Diferenciais |
| :-------- | --------- | ------------ |
| Python | Linguagem robusta com vários auxiliares, podendo solucionar vários tipos de problemas relacionados a matemática e entre outras diversas áreas e subáreas | - Soluções matemáticas propostas por Matty são feitas através de pacotes importados ou conjunto de operações primitivas |
| Julia | Linguagem moderna e eficiente focada na resolução de problemas matemáticos e científicos, unindo a facilidade do Python com a eficiência do C/C++ | - Soluções matemáticas propostas por Matty são feitas através de pacotes importados ou conjunto de operações primitivas |

## Lista de Demandas

- Criação de um tipo primitivo `fraction` para realizar operações de soma, subtração, multiplicação e divisão com frações, juntamente com a sua sintaxe
- Criação de sintaxe para representar operações de raízes, equações, "regras de três" e logaritmos
- Criação de um tipo simbólico, representando incógnitas em equações e "regras de três"
- Mantimento de operações já existentes em linguagens de programação como condicionais, entrada e saída de dados e loops a fim de manter a base das linguagens de programação, assim tornando a linguagem flexível para diferentes soluções de problemas

## Tabela de Ferramentas

| Ferramenta | Funcionalidade |
| :--------- | -------------- |
| ANTLR | Elaboração da gramática em .g4 para operações existentes e novas propostas para em seguida gerar o lexer e o parser. |
