import java.util.Scanner;

public class ex1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		//Implemente um programa em Java que possa entrar com o saldo de uma aplicação e
		//imprima o novo saldo, considerando o reajuste de X%. O saldo e o valor percentual
		//devem ser informados pelo usuário.
		
		Scanner sc = new Scanner (System.in);
		System.out.println("Saldo:");
		double saldo = sc.nextDouble();
		
		System.out.println("Desconto %:");
		double desconto = sc.nextDouble();
		
		System.out.println("Total:"+saldo*desconto/100);
		
	
		
	}

}
