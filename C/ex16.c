#include <stdio.h>

int main(void) {

  // A confederação brasileira de natação irá promover eliminatórias para o
  // próximo mundial.Faça um programa em C que receba a idade de um nadador e
  // imprima a sua categoria segundo a tabela a seguir
  //: Categoria Idade Infantil A 5 -
  // 7 anos Infantil B 8 - 10 anos Juvenil A 11 - 13 anos Juvenil B 14 -
  // 17 anos Sênior maiores de 18 anos

  int idade;

  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);

  if (idade >= 5 && idade <= 7) {
    printf("Categoria: Infantil A\n");
  } else if (idade >= 8 && idade <= 10) {
    printf("Categoria: Infantil B\n");
  } else if (idade >= 11 && idade <= 13) {
    printf("Categoria: Juvenil A\n");
  } else if (idade >= 14 && idade <= 17) {
    printf("Categoria: Juvenil B\n");
  } else if (idade >= 18) {
    printf("Categoria: Sênior\n");
  } else {
    printf("Idade não se encaixa em nenhuma categoria.\n");
  }

  return 0;
}