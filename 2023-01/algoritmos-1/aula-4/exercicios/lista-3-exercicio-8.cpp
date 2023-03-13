/**
 * Elabore um algoritmo que receba um ano
 * (numérico inteiro) e o número do mês
 * (1 – Janeiro, 2 – Fevereiro, e assim
 * sucessivamente) informe se o ano é bissexto ou
 * não. Lembrete: São bissextos todos os anos
 * múltiplos de 400, ex.: 1600, 2000, 2400,
 * 2800... São bissextos todos os múltiplos de 4
 * e não múltiplos de 100, ex.: 1996, 2004, 2008,
 * 2012, 2016... Não são bissextos todos os demais
 * anos. Usando o comando switch exiba o número
 * de dias do mês informado, sabendo que nos anos
 * que não são bissexto o mês 2 (fevereiro) tem
 * 28 dias.
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

   int mes, ano;
   bool isBissexto = false;

   cout << "Digite um número inteiro para o ano: ";
   cin >> ano;

   cout << "Digite o mês: ";
   cin >> mes;

   if (ano % 4 == 0)
      if (ano % 100 == 0)
         if (ano % 400 == 0)
            isBissexto = true;
         else
            isBissexto = false;
      else
         isBissexto = false;
   else
      isBissexto = false;

   if (isBissexto)
      cout << "Ano é bissexto";
   else
      cout << "Ano não é bissexto";

   cout << endl;

   switch (mes) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
         cout << "O mês tem 31 dias";
         break;
      case 2:
         if (isBissexto)
            cout << "O mês tem 29 dias";
         else
            cout << "O mês tem 28 dias";
         break;
      default:
         cout << "O mês tem 30 dias";
   }

   return 0;
}
