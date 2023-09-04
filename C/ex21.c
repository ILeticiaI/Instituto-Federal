#include <stdio.h>

int main(void) {

  //A biblioteca de uma Universidade deseja fazer um programa que leia o nome do
//livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir
//um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias
//para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:

    char livro[100];
    char tipoUsuario[20];
    int totalDias;

    printf("Nome do livro: ");
    scanf("%s", livro);

    printf("Tipo de usuário (professor ou aluno): ");
    scanf("%s", tipoUsuario);

    if (strcmp(tipoUsuario, "professor") == 0) {
        totalDias = 10;
    } else if (strcmp(tipoUsuario, "aluno") == 0) {
        totalDias = 3;
    } else {
        printf("Tipo de usuário inválido.\n");
        return 1; // Encerra o programa com código de erro
    }

    printf("Total de dias para devolução: %d dias\n", totalDias);
    printf("Recibo:\n");
    printf("Livro: %s\n", livro);
    printf("Tipo de usuário: %s\n", tipoUsuario);
    printf("Total de dias para devolução: %d dias\n", totalDias);

    return 0;
}
