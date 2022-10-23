import java.util.Scanner;

public class ex10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		//Entrar com o valor de x e imprimir y:
		Scanner sc = new Scanner(System.in);
		 double N;
		 System.out.println ("Digite o número:");
		 N=sc.nextDouble();
		 
     if ( N <= 1) {
      System.out.println ( "é 1");
     }
     
     else if ( N >= 1 && N <= 2 ) {
         System.out.println ( "é 2");
     }
     
     else if ( N >= 2 && N <= 3 ) {
         System.out.println (N*N);
     }
     
     else if ( N >= 3) {
         System.out.println (N*N*N);
     } 
	}

		
		
		
		
		
		
	

}
