#include <stdio.h>

// Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso
// o valor somado seja maior que 20, este deverá ser apresentado somando-se a
// ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser
// apresentado subtraindo-se 5.

int main(void) {

  int valor1, valor2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);

  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);

  int soma = valor1 + valor2;

  if (soma > 20) {
    int resultado = soma + 8;
    printf(" Resultado +8: %d\n", resultado);
  } else {
    int resultado = soma - 5;
    printf(" Resultdo -5: %d\n", resultado);
  }

  return 0;
}
