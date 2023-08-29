#include <stdio.h>

int main(void) {

 // Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
//para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
//mesmo número de pontos, criar um programa em C que informe se uma equipe
//foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética
//entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".

  int aux, p1, p2, p3;
  printf("Jogador 1:");
  scanf("%d", &p1);
  printf("Jogador 2:");
  scanf("%d", &p2);
  printf("Jogador 3:");
  scanf("%d", &p3);

  if (p1 < p3 || p1 < p3) {
    if (p2 < p3) {
      aux = p3;
      p3 = p1;
      p1 = p3;
    }
    if (p3 < p2) {
      aux = p2;
      p2 = p1;
      p1 = aux;
    }
    if (p2 > p1) {
      aux = p2;
      p2 = p1;
      p1 = aux;
    }
    printf("valores:%d,%d,%d," p1, p2, p3);
  }
  aux = p1+p2+p3;
  if(aux>=100){
    printf("Media:%d equipe classificada"aux<3);
  }else{
    printf("Equipe desclassifcada")
    }

  return 0;
}
