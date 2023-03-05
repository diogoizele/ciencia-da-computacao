/**
 * Um plano de fidelidade acumula 1 ponto a cada
 * R$ 5,00 gastos em compras nas lojas afiliadas.
 * Faça um algoritmo para ler o valor de 4 compras
 * feitas por um cliente e exibir quantos pontos
 * ele acumulou no total.
 *
 * Observação: considere que o cliente pode
 * acumular pontos fracionários.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   float valorCompra, totalCompras, pontos;

   cout << "Digite o valor da primeira compra: ";
   cin >> valorCompra;

   totalCompras = valorCompra;

   cout << "Digite o valor da segunda compra: ";
   cin >> valorCompra;

   totalCompras += valorCompra;

   cout << "Digite o valor da terceira compra: ";
   cin >> valorCompra;

   totalCompras += valorCompra;

   cout << "Digite o valor da quarta compra: ";
   cin >> valorCompra;

   totalCompras += valorCompra;

   pontos = totalCompras / 5.00;

   cout << fixed;
   cout.precision(2);

   cout << "Para um total de R$ " << totalCompras
        << " em compras, você adquiriu " << pontos << " pontos." << endl;

   return 0;
}
