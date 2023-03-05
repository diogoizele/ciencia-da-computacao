/**
 * Sabendo-se que 100 quilowatts de energia custa
 * um sétimo do salário mínimo, fazer um algoritmo
 * que receba o valor do salário mínimo e a
 * quantidade de quilowatts gasta por uma
 * residência.
 *
 * calcule e mostre:
 * ● O valor em reais de cada quilowatt
 * ● O valor em reais a ser pago
 * ● O novo valor a ser pago por essa residência
 *   com um desconto de 10%.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   float salarioMinimo, quantQuilowatts, setimos, valorQuilowatt,
       valorCadaQuilowatt, valorDesconto;

   cout << "Digite qual o valor do salário mínimo: ";
   cin >> salarioMinimo;

   cout << "Digite a quantidade de quilowatts gasta: ";
   cin >> quantQuilowatts;

   setimos = salarioMinimo / 7;
   valorQuilowatt = (quantQuilowatts / 100) * setimos;
   valorCadaQuilowatt = valorQuilowatt / quantQuilowatts;
   valorDesconto = valorQuilowatt - (valorQuilowatt * 0.1);  // 10% de desconto

   cout << fixed;
   cout.precision(2);

   cout << "Valor em reais de cada quilowatt: R$" << valorCadaQuilowatt
        << "\nValor a ser pago: R$" << valorQuilowatt << "\nValor desconto: R$"
        << valorDesconto << endl;

   return 0;
}
