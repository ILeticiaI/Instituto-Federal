#include <stdio.h>

int main(void) {
  // Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota
  // da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1,
  // a nota da prova 2, a média das notas e uma das mensagens: "Aprovado",
  // "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para
  //reprovação e as demais em prova final).

  char nome[50];
  float notaProva1, notaProva2, media;

  // Solicita o nome e as notas ao usuário
  printf("Digite o nome do aluno: ");
  scanf("%s", nome);

  printf("Digite a nota da prova 1: ");
  scanf("%f", &notaProva1);

  printf("Digite a nota da prova 2: ");
  scanf("%f", &notaProva2);

  // Calcula a média das notas
  media = (notaProva1 + notaProva2) / 2;

  // Verifica a situação do aluno e exibe a mensagem correspondente
  printf("\nNome do aluno: %s\n", nome);
  printf("Nota da prova 1: %.2f\n", notaProva1);
  printf("Nota da prova 2: %.2f\n", notaProva2);
  printf("Média das notas: %.2f\n", media);

  if (media >= 7.0) {
    printf("Situação: Aprovado\n");
  } else if (media < 3.0) {
    printf("Situação: Reprovado\n");
  } else {
    printf("Situação: Em Prova Final\n");
  }

  return 0;
}
