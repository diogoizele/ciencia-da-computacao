#include <stdio.h>

int main() {
  int size = 3;
  int list[] = {5, 8, 3};
  int operations = 0;

  int min = list[0];  // 1 atribuicao
  int max = list[0];  // 1 atribuicao
  operations += 2;    // 2 atribuicoes

  for (int i = 1; i < size; i++) {
    printf("\n------------------------------\n");
    printf(
        "%dº repetição\n\n1º comparação -> verifica se %d é menor que o mínimo "
        "%d",
        i, list[i], min);

    operations += 1;  // 1 comparacao
    if (list[i] < min) {
      printf("\nComo %d é menor que %d, %d é o novo mínimo", list[i], min,
             list[i]);
      min = list[i];  // 1 atribuicao
      operations += 1;

      continue;
    }

    printf("\n2º comparação -> verifica se %d é maior que o máximo %d\n",
           list[i], max);

    operations++;  // 1 comparacao
    if (list[i] > max) {
      printf("\nComo %d é maior que %d, %d é o novo máximo", list[i], max,
             list[i]);

      max = list[i];  // 1 atribuicao
      operations++;
    }

    printf("\n------------------------------\n");
  }

  printf("\n------------------------------\n");
  int meio = (list[0] + list[1] + list[2]) - (min + max);  // 1 atribuicao
  printf("\nCalcula o meio: (%d + %d + %d) - (%d + %d)", list[0], list[1],
         list[2], min, max);
  operations++;  // 1 atribuicao

  printf("\n\n");
  printf("\nMínimo: %d", min);
  printf("\nMeio: %d", meio);
  printf("\nMáximo: %d", max);

  printf("\n\n");
  printf("O número total de operações foi de %d", operations);

  return 0;
}