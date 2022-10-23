
public class ex15 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		//Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,11m e cresce 3
		//centímetros por ano. Construir um algoritmo que calcule e imprima quantos anos serão
		//necessários para que Juca seja maior que Chico.
		
		
		double chico=150;
		double juca=111;
		double anos=0;
		int i =0;
		for ( i =0; juca <= chico ; i++) {
			juca = juca+3;
			chico = chico+2;
		}
		System.out.println(+i +" anos");
		
		
	}

}
