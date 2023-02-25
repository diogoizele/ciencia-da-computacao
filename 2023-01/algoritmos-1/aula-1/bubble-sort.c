#include <stdio.h>

int main() {

   int size = 3;
   int repeatQuantity = size - 1;  // 2 because the last element is not compared
   int list[] = {8, 5, 3};
   int operations = 0;

   for (int i = 0; i < repeatQuantity; i++) {
      for (int j = 0; j < repeatQuantity - i; j++) {
         printf("\n------------------------------\n");
         printf(
             "%dº repetição %dº comparação -> compara %d "
             "com %d\n",
             i + 1, j + 1, list[j], list[j + 1]);

         // 1 comparação
         if (list[j] > list[j + 1]) {

            printf(
                "\nComo %d é maior que %d, troca "
                "os valores\n",
                list[j], list[j + 1]);
            printf(
                "\n1º %d é colocado em uma "
                "variável auxiliar",
                list[j]);
            printf("\n2º %d é colocado no lugar de %d", list[j + 1], list[j]);
            printf(
                "\n3º auxiliar contendo %d é "
                "colocado no lugar de %d",
                list[j], list[j + 1]);
            printf(
                "\n------------------------------"
                "\n");

            int aux = list[j];      // 1 atribuicao
            list[j] = list[j + 1];  // 1 atribuicao
            list[j + 1] = aux;      // 1 atribuicao

            operations += 3;
         }

         operations += 1;  // 1 pela comparação
      }
      printf("\n\n");
   }

   printf("\n\n");
   printf("O número total de operações foi de %d", operations);

   return 0;
}