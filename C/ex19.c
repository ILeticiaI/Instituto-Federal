
 // Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
//para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
//mesmo número de pontos, criar um programa em C que informe se uma equipe
//foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética
//entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".

 #include <stdio.h>

 main() {
  float j1,j2,j3, aux, soma;
  printf("Pontuação do Jogador 1: ");
  scanf("%f", &j1);
  printf("Pontuação do Jogador 2: ");
  scanf("%f", &j2);
  printf("Pontuação do Jogador 3: ");
  scanf("%f", &j3);
 
  if (j1<j2 || j1<j3){ //Se V, j1 não é o maior
    if (j3<j2){//Se V, j2 é o maior
          aux = j1;
          j1 = j2;
          j2 = aux;
    }
    else{//j3 é o maior
          aux = j1;
          j1 = j3;
          j3 = aux;
    }
  }
  if(j2 < j3){// Se j2 for menor que j3, troca os valores
     aux = j2;
     j2 = j3;
     j3 = aux;
  }
printf("\n - %f - %f - %f -",j1,j2,j3);
  soma = j1+j2+j3;
  if(soma>=100){
    printf("\nEquipe Classificada \nMedia = %f", soma /3);
  }
  else {
    printf("Equipe Desclassificada");
  }
}
