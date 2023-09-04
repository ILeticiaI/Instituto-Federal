
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
