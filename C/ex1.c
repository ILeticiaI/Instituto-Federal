#include <stdio.h>

int main(void) {


  //Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição,
//caso o resultado seja maior que 10, apresentá-lo.

  
  int valor1, valor2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);

  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);

  int soma = valor1 + valor2;

  if (soma > 10) {
    printf(" %d\n", soma);
  }

  return 0;
}