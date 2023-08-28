#include <stdio.h>
#include <string.h>

// Construa um programa que leia o percurso em quilómetros, o tipo do carro e
// informe o consumo estimado de combustível, sabendo-se que um carro tipo C
// faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por
// litro.

int main() {
  float percurso;
  char tipoCarro[2];

  printf("Digite o percurso em quilômetros: ");
  scanf("%f", &percurso);

  printf("Digite o tipo do carro (A, B ou C): ");
  scanf("%s", tipoCarro);

  float consumo;

  if (strcmp(tipoCarro, "C") == 0) {
    consumo = percurso / 12.0; // Tipo C: 12 km/l
  } else if (strcmp(tipoCarro, "B") == 0) {
    consumo = percurso / 9.0; // Tipo B: 9 km/l
  } else if (strcmp(tipoCarro, "A") == 0) {
    consumo = percurso / 8.0; // Tipo A: 8 km/l
  } else {
    printf("Tipo de carro inválido.\n");
    return 1;
  }

  printf("Consumo estimado de combustível: %.2f litros\n", consumo);

  return 0;
}
