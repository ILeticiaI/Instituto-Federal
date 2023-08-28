#include <stdio.h>

int main() {
  int numeroMes;

  // Solicita o número do mês ao usuário
  printf("Digite um número inteiro entre 1 e 12: ");
  scanf("%d", &numeroMes);

  // Verifica se o número do mês está dentro do intervalo válido
  if (numeroMes >= 1 && numeroMes <= 12) {
    // Imprime o mês correspondente
    switch (numeroMes) {
    case 1:
      printf("Janeiro\n");
      break;
    case 2:
      printf("Fevereiro\n");
      break;
    case 3:
      printf("Março\n");
      break;
    case 4:
      printf("Abril\n");
      break;
    case 5:
      printf("Maio\n");
      break;
    case 6:
      printf("Junho\n");
      break;
    case 7:
      printf("Julho\n");
      break;
    case 8:
      printf("Agosto\n");
      break;
    case 9:
      printf("Setembro\n");
      break;
    case 10:
      printf("Outubro\n");
      break;
    case 11:
      printf("Novembro\n");
      break;
    case 12:
      printf("Dezembro\n");
      break;
    }
  } else {
    printf("Não existe mês com este número.\n");
  }

  return 0;
}