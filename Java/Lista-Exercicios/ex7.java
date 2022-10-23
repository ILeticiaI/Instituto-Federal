import java.util.Scanner;

public class ex7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Implemente um algoritmo que leia o destino do passageiro, se a viagem inclui retorno
		//(ida e volta) e informe o preço da passagem conforme a tabela a seguir.
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite para onde quer ir\n "
				+ "1 para Região Norte\n"
				+ " 2 para Região Nordeste\n"
				+ " 3 para Região Centro-Oeste\n"
				+ " 4 para Região Sul\n");
		int regiao = sc.nextInt();

		System.out.println(" Digite 10 para ida \n ou \n Digite 20 para ida e volta ");
		int ida = sc.nextInt();
		
		if(regiao==1) {
			if(ida==10) {

				System.out.println("Valor total: 500");
			}
		}
		if(regiao==1) {
			if(ida==20) {

				System.out.println("Valor total: 900");
			}
		}

		if(regiao==2) {
			if(ida==10) {

				System.out.println("Valor total: 350");
			}
		}

		if(regiao==2) {
			if(ida==20) {

				System.out.println("Valor total: 650");
			}
		}

		if(regiao==3) {
			if(ida==10) {

				System.out.println("Valor total: 350");
			}
		}
		if(regiao==3) {
			if(ida==20) {

				System.out.println("Valor total: 600");
			}
		}
		if(regiao==4) {
			if(ida==10) {

				System.out.println("Valor total: 300");
			}
		}
		if(regiao==4) {
			if(ida==20) {

				System.out.println("Valor total: 550");
			}
		}


	}


}


