// aceito
#include <stdio.h>

int main(){
    char nome[100];
    double salario, montanteVendas;

    fgets(nome, 100, stdin);
    scanf("%lf %lf", &salario, &montanteVendas);

    //printf("%lf", montanteVendas*(15/100));
    //float quinzePorcento = 15/100;
    //printf("%f", quinzePorcento);
    double resFinal = salario + ((montanteVendas*15)/100);
    printf("TOTAL = R$ %.2lf\n", resFinal);
}