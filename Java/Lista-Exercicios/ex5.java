import java.util.Scanner;

public class ex5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		//Antes de o racionamento de energia ser decretado, quase ninguém falava em
		//quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário.
		//Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo,fazer um
		//algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasta por
		//uma residência e calcule. Imprima:
		//● o valor em reais de cada quilowatt.
		//● o valor em reais a ser pago.
		//● o novo valor a ser pago por essa residência com um desconto de 10%.
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Digite o salário mínimo");
		double salario =sc.nextDouble();
		
		
		System.out.println("Digite o valor de quilowatts gastos");
		double q = sc.nextDouble();
		double preco = salario/7/100;
		double desconto= preco*q/10*9;
		
		System.out.println("O preço do quilowatts é de:"+preco);
		System.out.println("O valor a ser pago é de R$"+preco*q);
		System.out.println("Desconto de:" +desconto);
		
		
	}

}
