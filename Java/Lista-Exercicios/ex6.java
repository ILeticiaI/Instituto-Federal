import java.util.Scanner;

public class ex6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		//Implemente um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe
		//o consumo estimado de combustível, sabendo-se que um carro tipo C faz 12 km com
		//um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.
		
		Scanner sc = new Scanner (System.in);
		System.out.println("Digite km rodado");
		double km= sc.nextDouble();

		System.out.println("Digite o Carro: \n A-12km \n B-9km \n C-8km");
		String tipo = sc.next();

		if(tipo.contentEquals("A")) {
		System.out.println("Consumo estimado de gasolina:"+km*12);
		}

		if(tipo.contentEquals("B")) {
		System.out.println("Consumo estimado de gasolina:"+km*9);
		}
		if(tipo.contentEquals("C")) {
		System.out.println("Consumo estimado de gasolina:"+km*8);
		}
		
		
		em c
		#include <stdio.h>
 
int main() {
 
    double horas, velocidade, distancia, litrosGastos;
    scanf("%lf %lf",&horas,&velocidade);
    distancia = horas*velocidade;
    litrosGastos = distancia*12;
    printf("%.3lf\n", distancia);
 
    return 0;
}
		
		
	}

}
