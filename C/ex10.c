#include <stdio.h>

int main(void) {

  // Faça um programa em C que leia três números inteiros e imprima os três em
  // ordem crescente.  return 0;

  int num1, num2, num3;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  printf("Digite o terceiro número: ");
  scanf("%d", &num3);

  if (num1 > num2) {
    int var = num1;
    num1 = num2;
    num2 = var;
  }
  if (num2 > num3) {
    int var = num2;
    num2 = num3;
    num3 = var;
  }
  if (num1 > num2) {
    int var = num1;
    num1 = num2;
    num2 = var;
  }

  printf("Números em ordem crescente: %d, %d, %d\n", num1, num2, num3);

  return 0;
}
}