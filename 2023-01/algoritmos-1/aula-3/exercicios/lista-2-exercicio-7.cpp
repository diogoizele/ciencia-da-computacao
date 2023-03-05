#include <cstdio>
#include <cstdlib>
#include <iostream>

#define ANO 365
#define MES 30

using namespace std;

int main() {

   int dias, anos, meses;

   cout << "Digite sua idade em dias (Ex: 365 corresponde a 1 ano): ";
   cin >> dias;

   anos = dias / ANO;
   dias = dias % ANO;

   meses = dias / MES;
   dias = dias % MES;

   cout << "\nExercício 7\n"
        << anos << " ano(s)\n"
        << meses << " mes(es)\n"
        << dias << " dia(s)" << endl;

   return 0;
}
