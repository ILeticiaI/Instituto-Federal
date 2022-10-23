import java.util.Scanner;

public class ex3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Entrar com um nome e imprimir: todo nome; primeiro caractere; último caractere; do
		//primeiro até o terceiro; todos menos o primeiro.

		Scanner sc = new Scanner(System.in);
		System.out.println("Digite um nome");
		String nome = sc.next();
		char ultima = nome.charAt(nome.length() - 1);
		
		System.out.println("\nNome: \n"+ nome);
		
		System.out.println("\nPrimeira letra: \n"+ nome.charAt(0));

		System.out.println("\nÚltima letra: \n"+ ultima);
		
		System.out.println("\nPrimeira até terceira letra: \n"+nome.substring(0,3));
		
		System.out.println("\nSem a primeira letra: \n"+nome.substring(1));

		
		
		
	}

}
