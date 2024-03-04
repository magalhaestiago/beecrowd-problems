#include <stdio.h>

int main(){
    float salario;
    scanf("%f", &salario);

    if(salario >= 0.00 && salario <= 400.00){
        float reajuste = (salario * 15 / 100);
        printf("Novo salario: %.2f\n", salario + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    } else if (salario >= 400.01 && salario <= 800.00){
        float reajuste = (salario * 12 / 100);
        printf("Novo salario: %.2f\n", salario + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
    } else if (salario >= 800.01 && salario <= 1200.00) {
        float reajuste = (salario * 10 / 100);
        printf("Novo salario: %.2f\n", salario + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");;
    } else if (salario >= 1200.01 && salario <= 2000.00) {
        float reajuste = (salario * 7 / 100);
        printf("Novo salario: %.2f\n", salario + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");;

    } else {
        float reajuste = (salario * 4 / 100);
        printf("Novo salario: %.2f\n", salario + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");;
    }
}