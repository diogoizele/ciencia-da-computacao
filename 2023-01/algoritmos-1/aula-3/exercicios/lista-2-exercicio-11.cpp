/**
 * Uma locadora de carros precisa da sua ajuda
 * para cobrar seus serviços. Escreva um programa
 * que pergunte a quantidade de Km percorridos por
 * um carro alugado e a quantidade de dias pelos
 * quais ele foi alugado. Calcule o preço total a
 * pagar, sabendo que o carro custa R$90 por dia e
 * R$0,20 por Km rodado.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   float quantKM, valorFinal = 0;
   int diasAlugado;

   cout << "Digite a quantidade de Km percorridos: ";
   cin >> quantKM;

   cout << "Digite a quantidade de dias alugados: ";
   cin >> diasAlugado;

   valorFinal = float((diasAlugado * 90) + ((float)quantKM * 0.2));

   cout << fixed;
   cout.precision(2);

   cout << "O valor final a pagar será de: R$ " << valorFinal << endl;

   return 0;
}
