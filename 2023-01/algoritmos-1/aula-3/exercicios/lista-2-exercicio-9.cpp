/**
 * O custo ao consumidor de um carro novo é a
 * soma do custo de fábrica com a percentagem do
 * distribuidor e dos impostos (aplicados ao custo
 * de fábrica). Supondo que a percentagem do
 * distribuidor seja de 28% e os impostos de 45%,
 * escrever um algoritmo que leia o custo de
 * fábrica de um carro e escreva o custo ao
 * consumidor.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define DISTRIBUIDOR 0.28
#define IMPOSTO 0.45

using namespace std;

int main() {

   float custoFabrica, valorFinal;  // impostos aplicados ao custoFabrica

   cout << "Digite o custo de fábrica do automóvel: ";
   cin >> custoFabrica;

   valorFinal =
       custoFabrica + (IMPOSTO * custoFabrica) + (DISTRIBUIDOR * custoFabrica);

   cout << "O custo final para o consumidor é: " << valorFinal << endl;

   return 0;
}
