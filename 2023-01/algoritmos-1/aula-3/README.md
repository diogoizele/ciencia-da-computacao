# Aula 3

## Histórico

Em 1972 no laboratório de Bell, Dennis M. Ritchie e Ken Thompson criariam a evolução da linguagem **B** de Thompson, a linguagem **C**. A linguagem C foi criada para ser uma linguagem de programação de propósito geral, com um conjunto de comandos simples e de fácil aprendizado, que permitisse a criação de programas de computador de alta qualidade. A linguagem C foi desenvolvida para ser compilada em código de máquina, ou seja, para ser executada diretamente pelo computador.

A linguagem que usaremos na disciplina descende da linguagem C, sendo ela o **C++**. O C++ é uma linguagem de programação compilada, multi-paradigma, imperativa, orientada a objetos, genérica e de propósito geral. O C++ foi criado por Bjarne Stroustrup em 1979, como uma extensão da linguagem C.

### Características

No C++ temos as seguintes características:

- Linguagem compilada
- Linguagem de nível médio
  - Combina elementos das linguagens de alto nível com as funcionalidades da linguagem _Assembly_, que é de baixo nível
  - Programação estruturada (paradigma imperativo) e modular (paradigma de orientação a objetos)
- Portabilidade
  - Programas em C e C++ podem ser compilados e executados sem alterações em diferentes plataformas.
- Eficiência e economia
  - Programas são executados em menos tempo e ocupam pouco espaço de armazenamento.

Um programa é a maneira de se comunicar com um computador e a única linguagem que o computador entende é a linguagem de máquina. A linguagem de máquina é formada por sequências de zeros e uns, que são chamados de _bits_. Um bit pode ter dois valores: 0 ou 1. Um byte é formado por 8 bits. Um byte pode ter 256 valores diferentes, que são representados por números de 0 a 255. Um byte é o menor tamanho de informação que o computador pode manipular.

Por esse motivo, todos os programas que se comunicam com o computador devem estar em linguagem de máquina. Porém para nós seres humanos, seria inviável o desenvolvimento de programas muito complexos através da linguagem de máquina. Por isso, foram criadas as linguagens de programação, que são linguagens que são mais fáceis de serem entendidas por nós, mas que são traduzidas para a linguagem de máquina pelo computador.

Essa tradução para linguagem de máquina é classificada em duas categorias: **compilada** e **interpretada**.

## Interpretador

Um interpretador lê a primeira instrução do programa, faz a consistência de sua sintaxe e se não houver erro converte-a para linguagem de máquina para depois executá-la. Depois disso, segue para a próxima instrução repetindo o processo até a última linha do código. O interpretador é um programa que executa o programa que está sendo interpretado, sendo assim, ele precisa estar presente todas as vezes que vamos executar o programa.

## Compilador

O compilador lê todas as instruções e faz a consistência da sintaxe, se não houver erro converte para a linguagem de máquina gerando um **arquivo objeto**. Esse arquivo objeto poderá ser executado sem a necessidade de um interpretador e poderá ser executado em qualquer máquina que possuir a mesma arquitetura.

Na sequência da compilação são agregadas ao arquivo, rotinas em linguagem de máquina que lhe permitirão a execução. Isto é feito pelo _linkeditor_, que além de juntar as rotinas, cria o produto final ou **arquivo executável**.

Como comparativo, a velocidade de execução de um programa compilado chega a ser 20 vezes mais rápida em comparação ao interpretado. O programa compilado e linkeditado pode ser executado diretamente sobre o sistema operacional, não necessitando de nenhum outro software. Programas `.exe`, ou seja, executáveis, não podem ser alterados, o que protege o código fonte.

## Testes de mesa

Exemplos de teste de mesa feitos em aula:

- [Teste 1](teste-de-mesa-1.md)
