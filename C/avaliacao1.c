#include <stdio.h>

// Implemente programa para aprovar um empréstimo bancário. O código deve pedir
// 3 informações:
// valor do empréstimo,
// número de parcelas e
// salário do solicitante.
// O empréstimo será aprovado se o valor de todas as parcelas representar no
// máximo 3 salários do solicitante.

 


int main() {
  float emprestimo, salario;
  int parcelas;

  printf("Digite o valor do empréstimo");
  scanf("%f", &emprestimo);

  printf("Digite o numero de parcelas ");
  scanf("%d", &parcelas);

  printf("Digite o salario do solicitante ");
  scanf("%f", &salario);

  parcelas = emprestimo / parcelas;

  if (parcelas <= (salario * 3)) {
    printf("Empréstimo aprovado\n");
  } else {
    printf("Empréstimo reprovado. \n");
  }

  return 0;
}
