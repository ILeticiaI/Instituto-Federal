#include <stdio.h>

int main(void) {
  // Faça um programa que leia a idade de uma pessoa e informe:
  //• Se é maior de idade
  //• Se é menor de idade
  //• Se é maior de 65 anos  return 0;

  int idade;

  printf("Digite a idade: ");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("Maior de idade\n");
  } else {
    printf("Menor de idade\n");
  }

  if (idade > 65) {
    printf("Maior de 65 anos\n");
  }

  return 0;
}
