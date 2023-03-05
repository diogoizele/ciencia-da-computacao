/**
 * Suponha que um caixa eletrônico disponha apenas
 * de notas de 1, 2, 5, 10, 20, 50 e 100 reais.
 * Considerando que alguém está sacando um
 * determinado valor, escreva um algoritmo que
 * mostre a quantidade de cada tipo de notas que
 * o caixa deve fornecer. Suponha que o sistema
 * monetário não utilize centavos.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define UM 1
#define DOIS 2
#define CINCO 5
#define DEZ 10
#define VINTE 20
#define CINQUENTA 50
#define CEM 100

using namespace std;

int main() {

   int valor, resto;

   cout << "Digite um valor a ser sacado (desconsidere os centavos): ";
   cin >> valor;

   cout << fixed;

   cout << "\nCaixa Eletrônico: ";

   cout << "\n- Notas de R$ 100: " << valor / CEM;
   valor = valor % CEM;

   cout << "\n- Notas de R$ 50: " << valor / CINQUENTA;
   valor = valor % CINQUENTA;

   cout << "\n- Notas de R$ 20: " << valor / VINTE;
   valor = valor % VINTE;

   cout << "\n- Notas de R$ 10: " << valor / DEZ;
   valor = valor % DEZ;

   cout << "\n- Notas de R$ 5: " << valor / CINCO;
   valor = valor % CINCO;

   cout << "\n- Notas de R$ 2: " << valor / DOIS;
   valor = valor % DOIS;

   cout << "\n- Notas de R$ 1 " << valor / UM;
   valor = valor % UM;

   cout << endl;

   return 0;
}
