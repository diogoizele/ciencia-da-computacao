/**
 * Escreva um programa que leia a idade de um
 * nadador, classifique-o em uma das seguintes
 * categorias:
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
   int idade;

   cout << "Digite a idade do nadador: ";
   cin >> idade;

   if (idade >= 5) {
      cout << endl;
      cout << "A categoria da idade " << idade << " é: ";
      switch (idade) {
         case 5 ... 7:
            cout << "Infantil";
            break;
         case 8 ... 10:
            cout << "Infanto-juvenil";
            break;
         case 11 ... 13:
            cout << "Juvenil A";
            break;
         case 14 ... 17:
            cout << "Juvenil B";
            break;
         default:
            cout << "Adulto";
      }
      cout << endl;
   }

   return 0;
}
