#include <cstdio>
#include <cstdlib>
#include <iostream>

#define HORAS 3600
#define MINUTOS 60

using namespace std;

int main() {

   int tempo, horas, minutos, segundos;

   cout << "Digite a quantidade de tempo em segundos: ";
   cin >> tempo;

   horas = tempo / HORAS;
   tempo = tempo % HORAS;

   minutos = tempo / MINUTOS;
   tempo = tempo % MINUTOS;

   segundos = tempo;

   cout << fixed;
   cout.precision(2);

   cout << "Tempo:\n";
   cout << horas << ":" << minutos << ":" << segundos << endl;
   return 0;
}
