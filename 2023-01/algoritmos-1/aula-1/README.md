# Aula 1

## Aula

O professor apresentou um problema que consistia em 3 elementos numéricos, onde o objetivo era ordenalos do menor para o maior. Para isso, foi apresentado dois tipos de algoritmos com eficiências diferentes.

```
A = 5     B = 8     C = 3

AUX // para auxiliar na troca

```

Inicialmente foi apresentado um algoritmo semelhante ao bubble-sort, onde o professor inicialmente verifica:

- Se A é maior que B, então troca A com B
- Se B é maior que C, então troca B com C
- Se A é maior que B, então troca A com B

Após isso o professor nos apresentou um outro algoritmo para este problema com apenas 3 elementos.

> ⚠️ **Atenção**: Este algoritmo só é mais eficiente para 3 elementos, para mais elementos, o algoritmo anterior é mais eficiente.

Aqui utilizaremos duas "variáveis" que representarão o MAIOR e o MENOR elemento.

Inicialmente o valor de MAIOR e MENOR será o primeiro elemento, ou seja, A.

```

MAIOR = A
MENOR = A

```

Em seguida, comparo se B é maior que MAIOR, se for, então MAIOR recebe B, caso contrário, comparo se B é menor que MENOR, se for, então MENOR recebe B.

Agora, comparo se C é maior que MAIOR, se for, então MAIOR recebe C, caso contrário, comparo se C é menor que MENOR, se for, então MENOR recebe C.

Por fim para encontrar um elemento que fica no meio, basta realizar o seguinte cálculo:

```

MEIO = A + B + C - MAIOR - MENOR

```

## Tarefa

### Meu primeiro algoritmo:

#### Escreva o algoritmo para trocar uma lâmpada.

1. Verifique se a lâmpada está acesa, se estiver, apague-a.
2. Verifique se você alcança a lâmpada, se não alcançar, pegue uma escada.
3. Pegue a nova lâmpada.
4. Caso você tenha pego uma escada, suba até o local da lâmpada, caso contrário, vá até o local da lâmpada.
5. Gire a lâmpada para retirar a antiga.
6. Se a nova lâmpada estiver embalada, retire a embalagem.
7. Coloque a nova lâmpada no lugar da antiga, e gire de volta para fixa-lá.
8. Se você tiver pego uma escada, desça da escada.
9. Vá até o interruptor.

#### Escreva o algoritmo para somar dois números e mostrar o resultado da soma.

#### Escreva um algoritmo para analisar um número inteiro qualquer e classificar se o número é par ou ímpar.
