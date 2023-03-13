/**
 * Escreva um programa que leia as coordenadas
 * (x,y) de um ponto em um plano cartesiano
 * (conforme figura apresentada abaixo) e
 * determine em qual quadrante ele se encontra.
 * Se o ponto estiver sobre um dos eixos, o
 * programa deve apresentar esta informação e
 * qual o eixo, se estiver na origem (união dos
 * dois eixos) deve apresentar esta informação.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int x, y;

   cout << endl << ">PLANO CARTESIANO!" << endl;

   cout << "Digite a coordenada x: ";
   cin >> x;

   cout << "Digite a coordenada y: ";
   cin >> y;

   cout << endl;

   if (y == 0 && x == 0)
      cout << "Origem das posições!";
   else if (y == 0)
      cout << "Coordenada sobre o eixo X!";
   else if (x == 0)
      cout << "Coordenada sobre o eixo Y!";
   else if (x > 0)
      if (y > 0)
         cout << "Primeiro quadrante!";
      else
         cout << "Quarto quadrante!";
   else if (y > 0)
      cout << "Segundo quadrante!";
   else
      cout << "Terceiro quadrante!";

   return 0;
}
