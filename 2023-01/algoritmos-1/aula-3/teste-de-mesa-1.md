# Teste de mesa 1

## Algoritmo

```
algoritmo "troca"

var
    a, b: inteiro

inicio

  escreva("Informe o valor de A: ");
  leia(a);

  escreva("Informe o valor de B:");
  leia(b);

  a <- b;
  b <- a;

  escreva("Mostre: ", a);
  escreva("Mostre: ", b);

fimalgoritmo

```

## Teste de mesa

| Linha | A   | B   |
| ----- | --- | --- |
| 4     | ?   | ?   |
| 8     | (2) | ?   |
| 10    |     | (5) |
| 11    | 5   |     |
| 12    |     | 5   |
| 13    | {5} |     |
| 14    |     | {5} |

No teste acima, falta uma variável auxiliar, que é a variável `c`. Ela é necessária para que a troca seja feita corretamente e o valor de `a` não seja perdido.

## Correção

```
algoritmo "troca"

var
    a, b, aux: inteiro

inicio

  escreva("Informe o valor de A: ");
  leia(a);

  escreva("Informe o valor de B:");
  leia(b);

  aux <- b;
  b <- a;
  a <- aux;

  escreva("Mostre: ", a);
  escreva("Mostre: ", b);

fimalgoritmo

```

| Linha | A   | B   | AUX |
| ----- | --- | --- | --- |
| 4     | ?   | ?   | ?   |
| 8     | (2) | ?   | ?   |
| 10    |     | (5) | ?   |
| 12    |     |     | 5   |
| 13    |     | 2   |     |
| 14    | 5   |     |     |
| 16    | {5} |     |     |
| 17    |     | {2} |     |
