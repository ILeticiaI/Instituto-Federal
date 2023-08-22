
public class ex8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		//Criar o algoritmo que possa entrar com nome do produto e valor da compra e imprimir o
		//nome do produto e o valor da venda.
		
	Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do produto: ");
        String nomeProduto = scanner.nextLine();

        System.out.print("Digite o valor da compra: ");
        double valorCompra = scanner.nextDouble();

        // Definindo uma margem de lucro de 20%
        double margemLucro = 0.2;

        // Calculando o valor da venda
        double valorVenda = valorCompra * (1 + margemLucro);

        System.out.println("\nNome do produto: " + nomeProduto);
        System.out.println("Valor da venda: " + valorVenda);

        scanner.close();
		
		
		
	}

}
