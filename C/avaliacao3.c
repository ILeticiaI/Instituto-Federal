#include <stdio.h>

// Faça um programa em C que calcule e apresente quanto deve ser pago por um
// produto considerando a leitura do preço de etiqueta (PE) e o código da
// condição de pagamento (CP). Utilize para os cálculos a tabela de condições de
// pagamento a seguir:

// Código da condição de pagamento (CP)
// Condição de pagamento
// 1
//À vista em dinheiro ou PIX, com 10% de desconto

//À vista com cartão de crédito, com 5% de desconto

// Em 2 vezes, preço normal de etiqueta sem juros

// Em 3 vezes, preço de etiqueta com acréscimo de 10%

int main(void) {

  float valor, dinheiro, cartao, parcela1, parcela2;
  int condicao;

  printf("Digite o valor a ser pago:");
  scanf("%f", &valor);

  printf("Digite a condição de pagamento:");
  scanf("%d", &condicao);

  dinheiro = valor - valor * 10 / 100;
  cartao = valor - valor * 5 / 100;
  parcela1 = valor;
  parcela2 = valor + valor * 10 / 100;

  if (condicao == 1) {
    printf("O valor a ser pago é de:%f\n", dinheiro);
  }

  if (condicao == 2) {
    printf("O valor a ser pago é de:%f\n", cartao);
  }
  if (condicao == 3) {
    printf("O valor a ser pago é de:%f\n", parcela1);
  }
  if (condicao == 4) {
    printf("O valor a ser pago é de:%f\n", parcela2);
  }

  return 0;
}