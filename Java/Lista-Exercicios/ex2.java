import java.util.Scanner;

public class ex2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		//Entrar com um String no formato CDU e imprimir invertido: UDC. (Exemplo: “123”, sairá
		//“321”.) O número deverá ser armazenado em outra variável antes de ser impresso.
		
		Scanner sc = new Scanner (System.in);
		System.out.println("Digite uma palavra");
		String frase = sc.next();
	    String fraseInvertida = new StringBuilder(frase).reverse().toString();

		System.out.println(fraseInvertida);
		
		
	}

}
