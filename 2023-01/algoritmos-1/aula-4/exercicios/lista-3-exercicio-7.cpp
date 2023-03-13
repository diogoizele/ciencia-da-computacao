/**
 * Escreva um programa que leia um número inteiro
 * qualquer no intervalo entre 11 e 999 (caso o
 * número não estiver no intervalo apresentar
 * mensagem de “NÚMERO INVÁLIDO” e encerrar o
 * programa), se o número estiver no intervalo
 * permitido apresente a soma dos seus algarismo.
 * Por exemplo o número 251 (2 + 5 + 1) a
 * resposta é 8
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int inteiro, cent = 0, dez, uni, soma, inteiroInicial;

   cout << "Digite um inteiro qualquer entre 11 e 999: ";
   cin >> inteiro;

   inteiroInicial = inteiro;

   if (inteiro < 11 || inteiro > 999) {
      cout << "NÚMERO INVÁLIDO";
      return 1;
   }

   if (inteiro >= 100) {
      cent = inteiro / 100;
      inteiro %= 100;
   }

   dez = inteiro / 10;
   uni = inteiro % 10;

   soma = cent + dez + uni;

   cout << "A soma dos algarismos do número " << inteiroInicial << "( ";
   if (cent != 0) cout << cent << " + ";
   cout << dez << " + " << uni << " ) = " << soma << endl;

   return 0;
}
