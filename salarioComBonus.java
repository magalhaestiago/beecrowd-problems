import java.util.Scanner;

public class salarioComBonus{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        double salario, montanteVendas;
        String nome = sc.nextLine();
        salario = sc.nextDouble();
        montanteVendas = sc.nextDouble();
        

        System.out.println("TOTAL = R$ "+salario+(montanteVendas*(15/100)));

        sc.close(); 
    }
}
