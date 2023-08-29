#include <stdio.h>

int main(void) {
  // Faça um programa que permita entrar com a nota da prova 1 e a nota
  // da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1,
  // a nota da prova 2, a média das notas e uma das mensagens: "Aprovado",
  // "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para
  //reprovação e as demais em prova final).

  float notaProva1, notaProva2, media;

  printf("Digite a nota da prova 1: ");
  scanf("%f", &notaProva1);

  printf("Digite a nota da prova 2: ");
  scanf("%f", &notaProva2);

  media = (notaProva1 + notaProva2) / 2;

  printf("Nota da prova 1: %.2f\n", notaProva1);
  printf("Nota da prova 2: %.2f\n", notaProva2);
  printf("Média das notas: %.2f\n", media);

  if (media >= 7.0) {
    printf(" Aprovado\n");
  } else if (media < 3.0) {
    printf("Reprovado\n");
  } else {
    printf("Em Prova Final\n");
  }

  return 0;
}
