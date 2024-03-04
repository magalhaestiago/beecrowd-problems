// aceito

#include <stdio.h>

int main(){
    int n = 0;
    
    int contadorAlcool = 0, contadorGas = 0, contadorDiesel = 0;

    do{
    scanf("%d", &n);

    
    switch (n)
    {
    case 1:
    contadorAlcool++;
    break;
    case 2:
    contadorGas++;
    break;
    
    case 3:
    contadorDiesel++;
    break;

    case 4:
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contadorAlcool);
    printf("Gasolina: %d\n", contadorGas);
    printf("Diesel: %d\n", contadorDiesel);
    default:
    break;
    }
    } while(n != 4);
}