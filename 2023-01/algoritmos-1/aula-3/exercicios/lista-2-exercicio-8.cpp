/**
 * Considerando que para um consórcio, sabe-se o
 * número total de prestações, a quantidade de
 * prestações já pagas e o valor atual da
 * prestação, escreva um algoritmo que determine
 * o total pago pelo consorciado e o saldo devedor.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int numTotalPrestacoes, quantPrestacoesPagas, quantPrestacoesNaoPaga;
   float valorPrestacao, totalPago, saldoDevedor;

   cout << "Consórcio" << endl;

   cout << "Digite o número total de prestações: ";
   cin >> numTotalPrestacoes;

   cout << "Digite a quantidade de prestações que já foram pagas: ";
   cin >> quantPrestacoesPagas;

   cout << "Digite o valor da prestação: ";
   cin >> valorPrestacao;

   quantPrestacoesNaoPaga = numTotalPrestacoes - quantPrestacoesPagas;
   totalPago = (float)quantPrestacoesPagas * valorPrestacao;
   saldoDevedor = (float)quantPrestacoesNaoPaga * valorPrestacao;

   cout << fixed;
   cout.precision(2);

   cout << "\nO valor total já pago é: " << totalPago << endl
        << "O valor que ainda falta ser pago é: " << saldoDevedor << endl;

   return 0;
}
