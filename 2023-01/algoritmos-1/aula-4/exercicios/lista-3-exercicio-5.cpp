/**
 * Escreva um programa que leia as notas de um
 * aluno em três disciplinas (matemática, física
 * e química), verificar se as notas são válidas,
 * uma nota para ser considerada válida deve ter
 * valor entre 0.0 e 10.0, caso alguma nota não
 * for válida informar ao usuário e finalizar o
 * programa, receba também o percentual de
 * frequência que pode ser entre 0.0 e 100.0
 * (validar a frequência também). Caso as três
 * notas e a frequência estejam no intervalo
 * válido, calcule a média aritmética do aluno
 * e determine se ele foi aprovado ou reprovado
 * (média >= 7 e frequência >= 75.0% é aprovado,
 *  caso contrário reprovado)
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define MAX_NOTA_VALIDA 10.0
#define MIN_NOTA_VALIDA 0.0
#define MAX_FREQ_VALIDA 100.0
#define MIN_FREQ_VALIDA 0.0
#define MEDIA_VALIDA 7
#define FREQ_VALIDA 75.0

using namespace std;

int main() {

   float notaMatematica, notaFisica, notaQuimica, frequencia, media;

   cout << "Digite a nota de matemática: ";
   cin >> notaMatematica;

   cout << "Digite a nota de física: ";
   cin >> notaFisica;

   cout << "Digite a nota de química: ";
   cin >> notaQuimica;

	cout << "Digite a frequência: ";
	cin >> frequencia;

   if (notaMatematica < MIN_NOTA_VALIDA || notaMatematica > MAX_NOTA_VALIDA ||
       notaFisica < MIN_NOTA_VALIDA || notaFisica > MAX_NOTA_VALIDA ||
       notaQuimica < MIN_NOTA_VALIDA || notaQuimica > MAX_NOTA_VALIDA) {
      cout << "Alguma nota inválida!" << endl;
      return 1;
   }

   if (frequencia < MIN_FREQ_VALIDA || frequencia > MAX_FREQ_VALIDA) {
      cout << "Frequência inválida!" << endl;
      return 1;
   }

   media = (notaMatematica + notaFisica + notaQuimica) / 3;

   if (media >= (float)MEDIA_VALIDA && frequencia >= FREQ_VALIDA)
      cout << "APROVADO!" << endl;
   else
      cout << "REPROVADO!" << endl;

   return 0;
}
