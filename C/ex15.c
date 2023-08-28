#include <stdio.h>

int main(void) {

  // Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
  // o valor da compra for menor que R$20,00, caso contrário, o lucro será de
  // 30%. Faça um programa em C que leia o valor do produto e imprima o valor da
  // venda.

  int main() {
    float valorCompra, valorVenda;

    // Solicita o valor do produto ao usuário
    printf("Digite o valor do produto: ");
    scanf("%f", &valorCompra);

    // Calcula o lucro com base nas condições
    if (valorCompra < 20.00) {
      valorVenda = valorCompra * 1.45; // Lucro de 45%
    } else {
      valorVenda = valorCompra * 1.30; // Lucro de 30%
    }

    // Imprime o valor de venda
    printf("Valor de venda: %.2f\n", valorVenda);

    return 0;
  }