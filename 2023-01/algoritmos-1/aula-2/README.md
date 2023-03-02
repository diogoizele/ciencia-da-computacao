# Aula 2

## Teste de mesa

O teste de mesa se trata de uma técnica para desenvolver um algoritmo, mapeando e planejando previamente antes da codificação suas possíveis entradas, processamento e respectivas saídas. Um algoritmo só é correto se produz o resultado esperado para qualquer entrada possível.

Para isso, utilizamos o teste de mesa, sendo este o meio pelo qual podemos acompanhar a execução de um algoritmo, passo a passo, ou instrução a instrução. Como já mensionado, o teste de mesa ocorre antes da codificação, de forma a simular manualmente a execução do algoritmo, atentando para as entradas, processamentos e saídas de dados.

Como vantagem, o teste de mesa ajuda a aprender a verificar se o algoritmo leva a um resultado esperado, através da simulação de valores (prova real), como também possibilita compreender a lógica utililzada e encontrar possíveis erros existentes.

### Como realizar o teste de mesa

1. Providencie papel e caneta ou algum outro meio de anotação.
2. Identifique as variáveis envolvidas.
3. Crie uma tabela com linhas e colunas.
4. Inicie a leitura de cada instrução de cima para baixo e da esquerda para a direit, anotando os resultados na tabela.

- Na primeira linha indentifique as variáveis.
- Na primeira coluna escreva a linha da instrução.
- Nas demais colunas insira os valores das variáveis na linha em questão:

| Linha | A   | B   | C   |
| ----- | --- | --- | --- |
|       |     |     |     |
|       |     |     |     |
|       |     |     |     |
|       |     |     |     |

- Se o valor foi lido, coloque-o entre parênteses.
- Se o valor foi escrito, coloque-o entre chaves.
- Se o valor foi resultado de uma operação, somente escreva seu valor.
- Quando uma variável **não possui valor** em determinada linha coloque a interrogação "?".

Abaixo terá um exemplo do algoritmo soma escrito em pseudocódigo e seu respectivo teste de mesa:

```
algoritmo "soma"

var
    a, b, c: inteiro

inicio
    escreva ("Digite o primeiro número: ")
    leia (a)

    escreva ("Digite o segundo número: ")
    leia (b)

    c <- a + b
    escreva ("A soma é: ", c)

fimalgoritmo
```

| Linha | A   | B   | C    |
| ----- | --- | --- | ---- |
| 4     | ?   | ?   | ?    |
| 8     | (5) | ?   | ?    |
| 10    |     | (8) | ?    |
| 11    |     |     | 13   |
| 12    |     |     | {13} |

Explicando a representação desse exemplo de teste de mesa:

- Na linha 4, a variável **a**, **b** e **c** não possui valor, pois ainda não foi lido, logo, colocamos a interrogação "?".
- Na linha 8, a variável **a** recebe o valor 5, logo, colocamos entre parênteses. A variável **b** e **c** ainda não possui valor, logo, colocamos a interrogação "?".
- Na linha 10, a variável **a** continua com o valor 5, logo, não precisamos colocar entre parênteses. A variável **b** recebe o valor 8, logo, colocamos entre parênteses. A variável **c** ainda não possui valor, logo, colocamos a interrogação "?".
- Na linha 11 a variável **c** recebe o resultado da soma entre **a** e **b**, logo, colocamos o valor 13. A variável **a** continua com o valor 5, logo, não precisamos colocar entre parênteses. A variável **b** continua com o valor 8, logo, não precisamos colocar entre parênteses.
- Na linha 12 a variável **c** é escrita, logo, colocamos entre chaves.

Por fim, existem várias metodologias para fazer os testes de mesa. Alguns métodos são simplificados focando apenas nas modificações das variáveis sem detalhes das linhas ou mesmo o histórico dos valores recebidos, porém isso dificulta a reconstituição do passo a passo, e lembre-se, testes de mesa são essenciais para algoritmos complexos.

## Tarefa

### [Lista de exercícios 1](tarefa/lista-de-exercicios-1.pdf)

1. [Exercício 1](tarefa/lista-1-exercicio-1.drawio.pdf)
2. [Exercício 2](tarefa/lista-1-exercicio-2.drawio.pdf)
3. [Exercício 3](tarefa/lista-1-exercicio-3.drawio.pdf)
4. [Exercício 4](tarefa/lista-1-exercicio-4.drawio.pdf)
