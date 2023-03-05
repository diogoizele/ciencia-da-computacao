/**
 * Faça um algoritmo que leia um valor inteiro e
 * apresente os resultados do quadrado e do cubo
 * do valor lido.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int valor;

   cout << "Digite um valor inteiro: ";
   cin >> valor;

   cout << "Valor inteiro: " << valor
        << "\nValor ao quadrado: " << (valor * valor)
        << "\nValor ao cubo: " << (valor * valor * valor) << endl;

   return 0;
}
