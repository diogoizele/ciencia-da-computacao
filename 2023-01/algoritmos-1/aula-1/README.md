# Aula 1

> ⁉️ **Lógica** é a arte de pensar bem. A técnica de encadear os pensamentos de modo a obter uma conclusão certa, e está normalmente relacionada à coerência e à racionalidade.

> ⁉️ **Algoritmo** é um conjunto finito de instruções que, quando executadas, produzem um resultado.

## Técnicas de desenvolvimento estruturado de algoritmos

- Usar somente um verbo por frase.
- Imaginar que você está desenvolvendo um algoritmo para outras pessoas entenderem.
- Usar frases curtas e simples.
- Ser o mais preciso possível.
- Procurar usar palavras que não tenham ambiguidade.

## Fases na construção de um algoritmo

- **Entrada** - dados de entrada para o algoritmo.
- **Processamento** - procedimentos utilizados para chegar no resultado final.
- **Saída** - dados já processados.

Basicamente são 4 fases na construção de um algoritmo:

1. **Entendimento do problema**.
2. **Criação de uma sequência de operações para solução do problema**.
3. **Execução desta sequência**.
4. **Verificação se o resultado está adequado e solucionou o problema**.

## Formas de representar um algoritmo

- Diagrama de blocos/fluxograma: é uma forma padronizada e eficaz para representar os passos lógicos de um determinado processamento.

![Diagrama de blocos](./../imagens/mapa-diagrama-de-bloco.png)

- Diagrama de chapin: diagrama que apresenta uma visão hierárquica e estruturada da lógica do programa.

![Diagrama de chapin](./../imagens/Diagramas-Chapin-Fluxogramas3.jpeg)

- Português estruturado ou pseudocódigo: é uma linguagem de programação que utiliza palavras-chave para representar as estruturas de controle de um programa.

```
algoritmo "nome do algoritmo"

var
    n1, n2, soma: inteiro;

inicio
    escreva("Digite o primeiro número: ");
    leia(n1);
    escreva("Digite o segundo número: ");
    leia(n2);
    soma <- n1 + n2; // ou soma = n1 + n2
    escreva("A soma dos números é: ", soma);
fim algoritmo
```

- **Variável**: é um espaço na memória do computador que pode ser utilizado para armazenar um valor. O valor armazenado pode ser alterado durante a execução do programa.
- **Expressão**: um conjunto de variáveis e constantes que se relacionam por meio de operadores aritméticos.

## Tarefa - Meu primeiro algoritmo:

### Escreva o algoritmo para trocar uma lâmpada.

1. Verifique se a lâmpada está acesa, se estiver, apague-a.
2. Verifique se você alcança a lâmpada, se não alcançar, pegue uma escada.
3. Pegue a nova lâmpada.
4. Caso você tenha pego uma escada, suba até o local da lâmpada, caso contrário, vá até o local da lâmpada.
5. Gire a lâmpada para retirar a antiga.
6. Se a nova lâmpada estiver embalada, retire a embalagem.
7. Coloque a nova lâmpada no lugar da antiga, e gire de volta para fixa-lá.
8. Se você tiver pego uma escada, desça da escada.
9. Vá até o interruptor.

### Escreva o algoritmo para somar dois números e mostrar o resultado da soma.

1. Leia o primeiro número.
2. Armazene o primeiro número em uma variável.
3. Leia o segundo número.
4. Armazena o segundo número em uma variável.
5. Some os dois números e armazene o resultado em uma variável.
6. Mostre o resultado da soma.

### Escreva um algoritmo para analisar um número inteiro qualquer e classificar se o número é par ou ímpar.

1. Leia o número.
2. Armazene o número em uma variável.
3. Verifique se o número % 2 é igual a 0.
4. Se for igual a 0, o número é par, caso contrário, o número é ímpar.
