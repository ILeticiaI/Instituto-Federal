#include <stdio.h>

// Implemente um programa que leia o código de um determinado produto e mostre a
// sua classificação. Código Classificação 1 - Alimento não-perecível 2, 3 ou 4
// - Alimento perecível 5 ou 6 - Vestuário 7 - Higiene pessoal 8, 9, 10 -
// Utensílios domésticos Qualquer outro código - Inválido

int main(void) {

  int alimento;

  printf("Digite o codigo do alimento: ");
  scanf("%d", &alimento);

  if (alimento == 1) {
    printf("Classificação: Alimento não-perecível");
  }

  if (alimento >= 2 && alimento <= 4) {

    printf("Classificação: Alimento perecível");
  }

  if (alimento >= 5 && alimento <= 6) {
    printf("Classificação: Vestuário");
  }

  if (alimento == 7) {
    printf("Classificação: Higiene pessoal");
  }

  if (alimento >= 8 && alimento <= 10) {
    printf("Classificação: Utensílios de cozinha");
  }

  if (alimento >= 11) {
    printf("Código inválido");
  }
  return 0;
}
