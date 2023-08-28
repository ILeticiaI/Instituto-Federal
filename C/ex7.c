#include <stdio.h>

int main(void) {
  // Faça um programa em C que leia um número e indique se o número está compre-
  // endido entre 20 e 50 ou não.

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero >= 20 && numero <= 50) {
    printf("Está entre 20 e 50 \n");
  } else {
    printf("Não está entre 20 e 50\n");
  }

  return 0;
}