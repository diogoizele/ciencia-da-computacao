/**
 * Escreva um programa que receba o valor bruto
 * do salário de um funcionário e o valor da
 * prestação de um empréstimo, em seguida o
 * sistema deverá calcular o percentual que esta
 * prestação representa no salário bruto e caso o
 * percentual for menor ou igual à 25% do salário
 * a consignação será concedida, caso contrário
 * deverá exibir mensagem dizendo que o valor da
 * prestação é maior que o permitido.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define PERCENTUAL_VALIDO 0.25

using namespace std;

int main() {

   float salario, prestacao;

   cout << "Digite o salário de um funcionário: ";
   cin >> salario;

   cout << "Digite o valor da prestação: ";
   cin >> prestacao;

   if (prestacao / salario <= PERCENTUAL_VALIDO)
      cout << "Emprestimo aprovado!";
   else
      cout << "Emprestimo não aprovado!" << endl
           << "prestação maior que 25% do salário!";

   cout << endl;

   return 0;
}
