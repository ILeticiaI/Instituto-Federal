#include <stdio.h>

int main(void) {

  // Faça um programa que permita entrar com o salário de uma pessoa e imprima o
  // desconto do INSS segundo a tabela seguir:

  // Salário Faixa de Desconto
  // Menor ou igual à R$600,00 Isento
  // Maior que R$600,00 e menor ou igual a R$1200,00 20%
  // Maior que R$1200,00 e menor ou igual a R$2000,00 25%
  // Maior que R$2000,00 30%

  float salario, desconto;

  printf("Digite o salário: ");
  scanf("%f", &salario);

  if (salario <= 600.00) {
    desconto = 0.00;
  } else if (salario <= 1200.00) {
    desconto = salario * 0.20;
  } else if (salario <= 2000.00) {
    desconto = salario * 0.25;
  } else {
    desconto = salario * 0.30;
  }

  printf("Desconto do INSS: %.2f\n", desconto);

  return 0;
}
