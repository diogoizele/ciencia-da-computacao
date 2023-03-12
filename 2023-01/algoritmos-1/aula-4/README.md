# Aula 4

> Um programa sequencial é um programa que executa as instruções uma após a outra, de cima para baixo, da esquerda para a direita, sem pular nenhuma instrução.

A medida em que os códigos vão ficando mais complexos, faz-se necessário a utilização de estruturas condicionais. Essas estruturas permitem que o programa execute uma instrução ou outra dependendo de uma condição.

As estruturas condicionais são utilizadas para fazer comparações de tal forma que possamos simular uma decisão e escolher apenas um dos caminhos possíveis para seguir.

## Estruturas condicionais

### Operadores relacionais

Os operadores relacionais são utilizados para comparar valores e retornar um valor lógico. Os operadores relacionais são:

| Operador | C++ | Exemplo | Significado             |
| -------- | --- | ------- | ----------------------- |
| ==       | ==  | x == 2  | x é igual a 2?          |
| !=       | !=  | x != 2  | x é diferente de 2?     |
| >        | >   | x > 2   | x é maior que 2?        |
| <        | <   | x < 2   | x é menor que 2?        |
| >=       | >=  | x >= 2  | x é maior ou igual a 2? |
| <=       | <=  | x <= 2  | x é menor ou igual a 2? |

### Teste condicional encadeado

- Seleção encadeada ou aninhada consiste em caso verdadeiro ou falso iniciar um novo teste `se`.

> Importante: um código que recebe apenas uma intrução não precisa de chaves. A partir disso, a utilização da palavra reservada `else if`, não é nada mais do que uma forma de escrever um novo `if` dentro do `else`, sem precisar de chaves.

```cpp

if (condicao1) {
    // instrucao1
} else if (condicao2) {
    // instrucao2
} else if (condicao3) {
    // instrucao3
} else {
    // instrucao4
}

```

O código acima é equivalente a:

```cpp

if (condicao1) {
    // instrucao1
} else {
    if (condicao2) {
        // instrucao2
    } else {
        if (condicao3) {
            // instrucao3
        } else {
            // instrucao4
        }
    }
}

```

### Condição composta

- Condição composta: ocorre quando existe mais de uma condição a ser avaliada no mesmo teste.
- Obrigatoriamente devem ser analisadas com um operador lógico entre as condições.

| Operador Lógico | C++       |
| --------------- | --------- |
| E               | &&, and   |
| OU              | \|\| , or |
| OU EXCLUSIVO    | ^, xor    |
| NÃO             | !         |

### Seleção múltiplas

- Seleção múltipla ou alternativa: ocorre quando existem mais de duas alternativas a serem escolhidas.
- O comando switch só testa igualdades.
- A opção default só será executada se nenhuma das outras opções for executada.
