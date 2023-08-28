#include <stdio.h>

// A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para
// cobrar dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do
// carro deve ser renovado é determinado pelo último número da placa do mesmo,
// faça um programa que, a partir da leitura da placa do carro, informe o mês em
// que o emplacamento deve ser renovado.

int main() {
  int ultimoNumeroPlaca;

  printf("Digite o último número da placa do carro: ");
  scanf("%d", &ultimoNumeroPlaca);

  int mesRenovacao;
  switch (ultimoNumeroPlaca) {
  case 1:
  case 2:
    mesRenovacao = 1; // Janeiro
    break;
  case 3:
  case 4:
    mesRenovacao = 2; // Fevereiro
    break;
  case 5:
  case 6:
    mesRenovacao = 3; // Março
    break;
  case 7:
  case 8:
    mesRenovacao = 4; // Abril
    break;
  case 9:
  case 0:
    mesRenovacao = 5; // Maio
    break;
  default:
    printf("Número de placa inválido.\n");
    return 1;
  }

  printf("Emplacamento deve ser renovado no mês: %d\n", mesRenovacao);

  return 0;
}
