import java.util.Scanner;

public class ex4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Implemente um programa em java que calcule e imprima a área de um triângulo.

		Scanner sc = new Scanner (System.in);

		System.out.println("Digite lado 1");
		double l1 = sc.nextDouble();


		System.out.println("Digite lado 2");
		double l2 = sc.nextDouble();


		System.out.println("Digite lado 3");
		double l3 = sc.nextDouble();

		if(l1==l2) {
			double area =l1*l2/2;

			System.out.println("Triângulo equilátero de área:"+area);
		}
		if(l1!=l2) {
			System.out.println("Triângulo isósceles de área: ");
			double area2= l1*l2/2;
		}

	}

}
