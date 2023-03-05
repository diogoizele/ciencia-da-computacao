/**
 * Escreva um algoritmo para ler o número total
 * de eleitores de um município, o número de
 * votos brancos, nulos e válidos. Calcular e
 * escrever o percentual que cada um representa
 * em relação ao total de eleitores.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int total, brancos, nulos, validos;

   cout << "Digite o número total de eleitores do município: ";
   cin >> total;

   cout << "Digite o número de votos brancos: ";
   cin >> brancos;

   cout << "Digite o número de votos nulos: ";
   cin >> nulos;

   cout << "Digite o número de votos válidos: ";
   cin >> validos;

   cout << fixed;
   cout.precision(2);

   cout << "Percentual de votos: "
        << "\n - Brancos: " << ((float)brancos / total) * 100 << "%"
        << "\n - Nulos: " << ((float)nulos / total) * 100 << "%"
        << "\n - Válidos: " << ((float)validos / total) * 100 << "%" << endl;

   return 0;
}
