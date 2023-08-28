#include <stdio.h>

int main(void) {

  // Faça um programa que leia um número e imprima uma das mensagens: "Maior
  // do que 20", "Igual a 20"ou "Menor do que 20".

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero > 20) {
    printf("É maior que 20\n");
  }
  if (numero >= 20) {
    printf("É maior ou igual a 20");
  }
  if (numero < 20) {
    printf("É menor que 20");
  }
  return 0;
}