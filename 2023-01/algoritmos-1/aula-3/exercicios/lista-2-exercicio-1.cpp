/**
 * Faça um programa que receba o preço de um produto,
 * calcule e mostre o novo preço, sabendo-se que este
 * sofreu um desconto de 10 %.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define DESCONTO 10  // 10 %

using namespace std;

int main() {

   float precoInicial, precoDesconto;

   cout << "Digite o preço de um produto: ";
   cin >> precoInicial;

   precoDesconto = precoInicial - (precoInicial * ((float)DESCONTO / 100));

   cout << fixed;
   cout.precision(2);

   cout << "Com um valor inicial de R$ " << precoInicial << " e um desconto de "
        << DESCONTO << "%, o valor final será de: R$ " << precoDesconto << endl;

   return 0;
}
