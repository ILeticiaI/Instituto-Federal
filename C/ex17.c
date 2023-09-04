// Depois da liberação do governo para as mensalidades dos planos de saúde, as
// pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito
// caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um
// programa que entre com o nome e a idade de uma pessoa e imprima o nome e o
// valor que ela deverá pagar.
//
// Idade Valor
// Até 10 anos R$30,00
// Acima de 10 até 29 anos R$60,00
// Acima de 29 até 45 anos R$120,00
// Acima de 45 até 59 anos R$150,00
// Acima de 59 até 65 anos R$250,00
// Maior que 65 anos R$400,00

  #include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float valor;

    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade <= 10) {
        valor = 30.0;
    } else if (idade <= 29) {
        valor = 60.0;
    } else if (idade <= 45) {
        valor = 120.0;
    } else if (idade <= 59) {
        valor = 150.0;
    } else if (idade <= 65) {
        valor = 250.0;
    } else {
        valor = 400.0;
    }

    printf("Nome: %s\n", nome);
    printf("Valor a pagar: R$%.2f\n", valor);

    return 0;
}

}
