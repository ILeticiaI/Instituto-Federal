#include <stdio.h>

int main(void) {

  // A prefeitura do Rio de Janeiro abriu uma linha de crédito para os
  // funcionários
  // estatutários. O valor máximo da prestação não poderá ultrapassar 30% do
  // salário bruto. Faça um programa em linguagem C que permita entrar com o
  // salário bruto e o valor da prestação e informar se o empréstimo pode ou não
  // ser concedido.

  float salarioBruto, prestacaoMaxima;

  // Entrada de dados
  printf("Digite o salário bruto: ");
  scanf("%f", &salarioBruto);

  printf("Digite o valor da prestação: ");
  scanf("%f", &prestacaoMaxima);

  // Calcula 30% do salário bruto
  float limitePrestacao = salarioBruto * 0.3;

  // Verifica se o valor da prestação está dentro do limite
  if (prestacaoMaxima <= limitePrestacao) {
    printf("Empréstimo concedido.\n");
  } else {
    printf("Empréstimo não pode ser concedido.\n");
  }

  return 0;
}
