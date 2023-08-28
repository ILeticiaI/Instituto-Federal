#include <stdio.h>

// A prefeitura contratou uma firma especializada para manter os níveis de
// poluição considerados ideais para um país do 1o mundo. As indústrias, maiores
// responsá- veis pela poluição, foram classificadas em três grupos. Sabendo-se
// que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é
// até 0,25, fazer um programa que possa imprimir intimações de acordo com o
// índice e a tabela a seguir:

//Índice Indústrias que receberão intimação
// 0,3 1o gurpo
// 0,4 1o e 2o grupos
// 0,5 1o, 2o e 3o grupos

int main() {
  float indicePoluicao;

  // Solicita o índice de poluição ao usuário
  printf("Digite o índice de poluição: ");
  scanf("%f", &indicePoluicao);

  // Verifica o índice de poluição e imprime as intimações correspondentes
  if (indicePoluicao >= 0.5) {
    printf("Intimação para o 1o, 2o e 3o grupos de indústrias.\n");
  } else if (indicePoluicao >= 0.4) {
    printf("Intimação para o 1o e 2o grupos de indústrias.\n");
  } else if (indicePoluicao >= 0.3) {
    printf("Intimação para o 1o grupo de indústrias.\n");
  } else if (indicePoluicao <= 0.25) {
    printf("Níveis de poluição aceitáveis.\n");
  } else {
    printf("Índice de poluição inválido.\n");
    return 1; // Saída com erro
  }

  return 0;
}
