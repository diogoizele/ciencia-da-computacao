/**
 * Escreva um programa que leia um número inteiro
 * qualquer e verifique se o número é divisível
 * por 3 e por 5, o programa deverá apresentar
 * como saída as palavras: “DIVISÍVEL” caso o
 * número for divisível por 3 e por 5 ou
 * “NÃO DIVISÍVEL” caso ele não for divisível.
 * Construa também o diagrama de blocos deste
 * exercício.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int numero;

   cout << "Digite um inteiro qualquer: ";
   cin >> numero;

   if (numero % 3 == 0 || numero % 5 == 0)
      cout << "DIVISÍVEL";
   else
      cout << "NÃO DIVISÍVEL";

   return 0;
}
