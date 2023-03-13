/**
 * Escreva um programa que receba três valores
 * inteiros, A, B, C, verificar se eles podem ser
 * valores dos lados de um triangulo e, se forem,
 * se é um triângulo escaleno, equilátero ou
 * isóscele, considerando os seguintes conceitos:
 * • O comprimento de cada lado de um triangulo
 * é menor do que a soma dos outros dois lados.
 *
 * • Chama-se equilátero o triângulo que tem
 * três lados iguais.
 *
 * • Denominam-se isósceles o triângulo que tem
 * o comprimento de dois lados iguais.
 *
 * • Recebe o nome de escaleno o triângulo que
 * tem os três lados diferentes.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int a, b, c;

   cout << "Digite o valor de a: ";
   cin >> a;

   cout << "Digite o valor de b: ";
   cin >> b;

   cout << "Digite o valor de c: ";
   cin >> c;

   if (a + b < c || a + c < b || b + c < a) {
      cout << "Não se trata de um triângulo..." << endl;
      return 1;
   }

   if (a == b && b == c && a == c)
      cout << "Triângulo equilátero!" << endl;
   else if (a != b && b != c && a != c)
      cout << "Triângulo escaleno!" << endl;
   else
      cout << "Triângulo isóceles!" << endl;

   return 0;
}
