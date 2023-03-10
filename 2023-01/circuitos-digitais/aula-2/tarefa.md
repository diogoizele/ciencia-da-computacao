# Conversão de bases numéricas

## 1. Realizar a conversão dos números

### 1.1 Número (28)<sub>10</sub> para

<details>
<summary>1.1.1 Binário</summary>

28 / 2 = 14, resto 0
14 / 2 = 7, resto 0
7 / 2 = 3, resto 1
3 / 2 = 1, resto 1

A partir do último resultado, concatenado com os outros restos, temos o binário: 11100

</details>

<details>
<summary>1.1.2 Octal</summary>

28 / 8 = 3, resto 4
3 / 8 = 0, resto 3

A partir do último resultado, concatenado com os outros restos, temos o octal: 34

</details>

<details>
<summary>1.1.3 Hexadecimal</summary>

28 / 16 = 1, resto 12
1 / 16 = 0, resto 1

> ⁉️ 12 = C

A partir do último resultado, concatenado com os outros restos, temos o hexadecimal: 1C

</details>

### 1.2 Número (160)<sub>10</sub> para

<details>
<summary>1.2.1 Binário</summary>

160 / 2 = 80, resto 0
80 / 2 = 40, resto 0
40 / 2 = 20, resto 0
20 / 2 = 10, resto 0
10 / 2 = 5, resto 0
5 / 2 = 2, resto 1
2 / 2 = 1, resto 0

A partir do último resultado, concatenado com os outros restos, temos o binário: 10100000

</details>

<details>
<summary>1.2.2 Octal</summary>

160 / 8 = 20, resto 0
20 / 8 = 2, resto 4
2 / 8 = 0, resto 2

A partir do último resultado, concatenado com os outros restos, temos o octal: 240

</details>

<details>
<summary>1.2.3 Hexadecimal</summary>

160 / 16 = 10, resto 0
10 / 16 = 0, resto 10

> ⁉️ 10 = A

A partir do último resultado, concatenado com os outros restos, temos o hexadecimal: A0

</details>

### 1.3 Número (131)<sub>10</sub> para

<details>
<summary>1.3.1 Binário</summary>

131 / 2 = 65, resto 1
65 / 2 = 32, resto 1
32 / 2 = 16, resto 0
16 / 2 = 8, resto 0
8 / 2 = 4, resto 0
4 / 2 = 2, resto 0
2 / 2 = 1, resto 0

A partir do último resultado, concatenado com os outros restos, temos o binário: 10000011

</details>

<details>
<summary>1.3.2 Octal</summary>

131 / 8 = 16, resto 3
16 / 8 = 2, resto 0
2 / 8 = 0, resto 2

A partir do último resultado, concatenado com os outros restos, temos o octal: 203

</details>

<details>

<summary>1.3.3 Hexadecimal</summary>

131 / 16 = 8, resto 3
8 / 16 = 0, resto 8

A partir do último resultado, concatenado com os
outros restos, temos o hexadecimal: 83

</details>

### 1.4 Número (FA1)<sub>16</sub> para

<details>
<summary>1.4.1 Decimal</summary>

> ⁉️ 15 = F
> ⁉️ 10 = A

FA1 = 15 _ 16<sup>2</sup> + 10 _ 16<sup>1</sup> + 1 \* 16<sup>0</sup>

FA1 = 3840 + 160 + 1

FA1 = 4001

</details>

<details>
<summary>1.4.2 Binário</summary>

4001 / 2 = 2000, resto 1
2000 / 2 = 1000, resto 0
1000 / 2 = 500, resto 0
500 / 2 = 250, resto 0
250 / 2 = 125, resto 0
125 / 2 = 62, resto 1
62 / 2 = 31, resto 0
31 / 2 = 15, resto 1
15 / 2 = 7, resto 1
7 / 2 = 3, resto 1
3 / 2 = 1, resto 1

Ou

F = 15 = 1111
A = 10 = 1010
1 = 1 = 0001

Juntando isso: 111110100001

A partir do último resultado, concatenado com os outros restos, temos o binário: 111110100001

</details>

<details>
<summary>1.4.3 Octal</summary>

Binário: 111110100001 = `111.110.100.001`

- Separando então em grupos de 3 bits:

  - 111
  - 110
  - 100
  - 001

- Convertendo cada grupo para octal:
  - 111 = 7
  - 110 = 6
  - 100 = 4
  - 001 = 1

Juntando o resultado: 7641

</details>

1.5 Número (63)<sub>8</sub> para

<details>
<summary>1.5.1 Decimal</summary>

| 8<sup>1</sup> | 8<sup>0</sup> |
| ------------- | ------------- |
| 6             | 3             |

- 63 = 6 _ 8<sup>1</sup> + 3 _ 8<sup>0</sup>
- 63 = 48 + 3
- 63 = 51

</details>

<details>
<summary>1.5.2 Binário</summary>

6 = 110
3 = 011

Juntando o resultado: 110011

</details>

<details>
<summary>1.5.3 Hexadecimal</summary>

Binário: 110011 = `11.0011`

- Separando então em grupos de 4 bits:

  - 00**11**
  - **0011**

- Convertendo cada grupo para hexadecimal:

- 11 = 3
- 0011 = 3

Juntando o resultado: 33
