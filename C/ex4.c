#include <stdio.h>

int main(void) {

  // Faça um programa que leia um número e informe se ele é ou não divisível
  // por 5.

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero % 5 == 0) {
    printf("É múltiplo de 5\n");
  } else {
    printf("Não é múltiplo de 5\n");
  }

  return 0;
}