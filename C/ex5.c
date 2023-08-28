#include <stdio.h>

int main(void) {
  // Faça um programa em C que leia um número e informe se ele é divisível por 3
  // e por 7.  return 0;

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero % 3 == 0 && numero % 7 == 0) {
    printf("É múltiplo de 3 e 7\n");
  } else {
    printf("Não é múltiplo de 3 e 7\n");
  }

  return 0;
}