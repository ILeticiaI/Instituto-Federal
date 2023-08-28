#include <stdio.h>

int main(void) {

  // Faça um programa em C que permita entrar com o ano de nascimento da pessoa
  // e com o ano atual. O programa deve imprimir a idade da pessoa. Não se
  // esqueça de verificar se o ano de nascimento informado é válido.

  int nascimento, ano, idade, anoValido;

  printf("Digite seu ano de nascimento: ");
  scanf("%d", &nascimento);

  printf("Digite o ano atual: ");
  scanf("%d", &ano);

  idade = ano - nascimento;

  if (nascimento <= 0) {
    printf("Ano de nascimento inválido. Tente novamente.\n");
  } else {
    printf("A sua idade é: %d anos\n", idade);
  }

  return 0;
}
