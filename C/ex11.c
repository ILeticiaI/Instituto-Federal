#include <stdio.h>

int main(void) {

  // Faça um programa que leia 3 números e imprima o maior deles.

  int num1, num2, num3;

  // Solicita os três números
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  printf("Digite o terceiro número: ");
  scanf("%d", &num3);

  // Encontra o maior número entre os três
  int maior = num1;

  if (num2 > maior) {
    maior = num2;
  }

  if (num3 > maior) {
    maior = num3;
  }

  // Imprime o maior número
  printf("O maior número é: %d\n", maior);

  return 0;
}
}