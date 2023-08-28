

#include <stdio.h>
#include <string.h>

// Crie um programa que informe a quantidade total de calorias de uma refeição a
// partir da escolha do usuário que deverá informar o prato, a sobremesa, e
// bebida conforme a tabela a seguir. Prato Sobremesa Bebida Vegetariano 180cal
// Abacaxi 75cal Chá 20cal Peixe 230cal Sorvete diet 110cal Suco de laranja
// 70cal Frango 250cal Mousse diet 170cal Suco de melão 100cal Carne 350cal
// Mousse chocolate 200cal Refrigerante diet 65cal

int main() {
  char prato[20], sobremesa[20], bebida[20];
  float caloriasTotal = 0;

  // Solicita o prato ao usuário
  printf("Escolha o prato (Vegetariano, Peixe, Frango ou Carne): ");
  scanf("%s", prato);

  // Solicita a sobremesa ao usuário
  printf(
      "Escolha a sobremesa (Abacaxi, Sorvete, Mousse ou Mousse Chocolate): ");
  scanf("%s", sobremesa);

  // Solicita a bebida ao usuário
  printf("Escolha a bebida (Chá, Suco de laranja, Suco de melão ou "
         "Refrigerante): ");
  scanf("%s", bebida);

  // Calcula as calorias com base nas escolhas
  if (strcmp(prato, "Vegetariano") == 0) {
    caloriasTotal += 180;
  } else if (strcmp(prato, "Peixe") == 0) {
    caloriasTotal += 230;
  } else if (strcmp(prato, "Frango") == 0) {
    caloriasTotal += 250;
  } else if (strcmp(prato, "Carne") == 0) {
    caloriasTotal += 350;
  } else {
    printf("Prato inválido.\n");
    return 1; // Saída com erro
  }

  if (strcmp(sobremesa, "Abacaxi") == 0) {
    caloriasTotal += 75;
  } else if (strcmp(sobremesa, "Sorvete") == 0) {
    caloriasTotal += 110;
  } else if (strcmp(sobremesa, "Mousse") == 0) {
    caloriasTotal += 170;
  } else if (strcmp(sobremesa, "Mousse Chocolate") == 0) {
    caloriasTotal += 200;
  } else {
    printf("Sobremesa inválida.\n");
    return 1; // Saída com erro
  }

  if (strcmp(bebida, "Chá") == 0) {
    caloriasTotal += 20;
  } else if (strcmp(bebida, "Suco de laranja") == 0) {
    caloriasTotal += 70;
  } else if (strcmp(bebida, "Suco de melão") == 0) {
    caloriasTotal += 100;
  } else if (strcmp(bebida, "Refrigerante") == 0) {
    caloriasTotal += 65;
  } else {
    printf("Bebida inválida.\n");
    return 1; // Saída com erro
  }

  printf("Quantidade total de calorias da refeição: %.2f cal\n", caloriasTotal);

  return 0;
}
}
