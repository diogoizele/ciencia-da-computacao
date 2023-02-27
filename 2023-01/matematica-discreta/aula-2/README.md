# Aula 2 - Proposições Lógicas

O objetivo do estudo da lógica e o argumento, também chamado de proposição e também entender se o arguento é válido ou não.

## Lógica simbólica

A lógica simbólica, também conhecida como lógica formal, é a parte da lógica que se dedica ao estudo das formas dos argumentos. Ela é construída a partir de linguagens formais, que são constituídas apenas por símbolos, o que lhe permite abstrair o conteúdo das proposições e atingir um grau de precisão que a linguagem cotidiana não possui.

## Proposições

O raciocínio lógico opera com proposições. Uma proposição é o encadeamento de termos ou palavras através de uma cópula verbal ou não, que expressam o conteúdo de um juízo, como verdadeiro ou falso.

Dizemos que o valor lógico de uma proposição é a verdade (1) se a proposição é verdadeira, ou falso (0) se a proposição é falsa.

### Proposições simples

São sentenças afirmativas com sentido completo. Geralmente utilizamos letras minúsculas para nos referir as proposições simples.

### Proposições compostas

Uma preposição composta une duas ou mais proposições simples com os conectivos **_"e"_**, **_"ou"_**, **_"se..., então..."_** e **_"se e somente se..."_**. As proposições compostas são indicadas por letras maiúsculas.

### Princípios fundamentais da lógica matemática

a) **Princípio da não contradição**: uma proposição não pode ser verdadeira e falsa ao mesmo tempo.
b) **Princípio da terceira excluída**: uma proposição não pode ser verdadeira e falsa ao mesmo tempo.

### Tabelas verdade

Uma maneira organizada de analisar todas as possibilidades para uma proposição. Para construir uma tabela verdade usa-se o critério: número de linhas = 2<sup>nº proposições</sup>. Por exemplo com 2 proposições temos 2<sup>2</sup> = 4 linhas.

| P   | Q   |
| --- | --- |
| 0   | 0   |
| 0   | 1   |
| 1   | 0   |
| 1   | 1   |

### Operações lógicas

#### Negação

A negação de uma proposição é a proposição que tem o mesmo valor lógico da proposição original, mas com sentido contrário. A negação de uma proposição é indicada por **_"~"_**, **_"¬"_** ou **_"'"_**.

Exemplos:

- p: Hoje está frio.
- p': Hoje está quente (oposto).
- p': Hoje não está frio.
- p': Não é verdade que hoje está frio.

#### Conjunção

A conjunção de duas proposições é a proposição que é verdadeira se e somente se ambas as proposições são verdadeiras. A conjunção de duas proposições é indicada por **_"^"_** ou **_"e"_**.

Exemplos:

- p: Hoje está frio.
- q: Hoje está chovendo.
- p ^ q: Hoje está frio e está chovendo.

| P   | Q   | P ^ Q |
| --- | --- | ----- |
| 0   | 0   | 0     |
| 0   | 1   | 0     |
| 1   | 0   | 0     |
| 1   | 1   | 1     |

#### Disjunção inclusiva

A disjunção inclusiva de duas proposições é a proposição que é verdadeira se e somente se pelo menos uma das proposições é verdadeira. A disjunção inclusiva de duas proposições é indicada por **_"v"_**, **_"+"_** ou **_"ou"_**.

Exemplos:

- p: Hoje está frio.
- q: Hoje está chovendo.
- p v q: Hoje está frio ou está chovendo.

| P   | Q   | P v Q |
| --- | --- | ----- |
| 0   | 0   | 0     |
| 0   | 1   | 1     |
| 1   | 0   | 1     |
| 1   | 1   | 1     |

#### Disjunção exclusiva

A disjunção exclusiva de duas proposições é a proposição que é verdadeira se e somente se uma das proposições é verdadeira, mas não ambas. A disjunção exclusiva de duas proposições é indicada por **_"⨁"_** ou **_"ou... ou..."_**.

Exemplos:

- p: Hoje está frio.
- q: Hoje está chovendo.
- p ⨁ q: Ou hoje está frio ou está chovendo.

| P   | Q   | P ⨁ Q |
| --- | --- | ----- |
| 0   | 0   | 0     |
| 0   | 1   | 1     |
| 1   | 0   | 1     |
| 1   | 1   | 0     |

#### Condicional

A condicional de duas proposições é a proposição que é verdadeira se e somente se a primeira proposição é falsa ou a segunda é verdadeira. A condicional de duas proposições é indicada por **_"->"_** ou **_"se..., então..."_**.

Exemplos:

- p: Hoje está frio.
- q: Hoje está chovendo.
- p -> q: Se hoje está frio, então está chovendo.

| P   | Q   | P -> Q |
| --- | --- | ------ |
| 0   | 0   | 1      |
| 0   | 1   | 1      |
| 1   | 0   | 0      |
| 1   | 1   | 1      |

#### Bicondicional

A bicondicional de duas proposições é a proposição que é verdadeira se e somente se ambas as proposições são verdadeiras ou ambas são falsas. A bicondicional de duas proposições é indicada por **_"<->"_** ou **_"se e somente se..."_**.

Exemplos:

- p: Hoje está frio.
- q: Hoje está chovendo.
- p <-> q: Se e somente se hoje está frio, então está chovendo.

| P   | Q   | P <-> Q |
| --- | --- | ------- |
| 0   | 0   | 1       |
| 0   | 1   | 0       |
| 1   | 0   | 0       |
| 1   | 1   | 1       |

#### Prioridade das operações lógicas na resolução das tabelas verdades

Na lógica seguimos as mesmas orientações que as expressões numéricas sobre os sinais: primeiro resolve os parênteses, na sequência os colchetes e por fim as chaves.

Quanto aos conectivos:

1. Primeiro negação.
2. Conjunção e disjunção na ordem que aparecem.
3. Resolver condicional.
4. Por fim resolver bicondicional.

### Classificação de uma proposição composta

As proposições compostas são classificadas de acordo com sua coluna de resposta.

#### Tautologia

Toda proposição cuja coluna da resposta final, na tabela verdade, apresentar somente VERDADE (V), isto é, somente 1, é uma tautologia.

- (p . p')'

| p   | p'  | p . p' | (p . p')' |
| --- | --- | ------ | --------- |
| 0   | 1   | 0      | 1         |
| 1   | 0   | 0      | 1         |
| 0   | 1   | 0      | 1         |
| 1   | 0   | 0      | 1         |

#### Contradição

Toda proposição cuja coluna da resposta final, na tabela verdade, apresentar somente FALSO (F), isto é, somente 0, é uma contradição.

- p' . (p . q')

| p   | q   | p'  | q'  | p . q' | p' . (p . q') |
| --- | --- | --- | --- | ------ | ------------- |
| 0   | 0   | 1   | 1   | 0      | 0             |
| 0   | 1   | 1   | 0   | 0      | 0             |
| 1   | 0   | 0   | 1   | 0      | 0             |
| 1   | 1   | 0   | 0   | 0      | 0             |

#### Contingência

Toda proposição cuja coluna da resposta final, na tabela verdade, apresentar tanto VERDADE (V) quanto FALSO (F), isto é, apresentar 1 e 0, é uma contingência.

p + q -> p

| p   | q   | p + q | p + q -> p |
| --- | --- | ----- | ---------- |
| 0   | 0   | 0     | 1          |
| 0   | 1   | 1     | 0          |
| 1   | 0   | 1     | 1          |
| 1   | 1   | 1     | 1          |
