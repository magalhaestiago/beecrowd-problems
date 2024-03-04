#include <stdio.h>

int main(){
    float renda;
    scanf("%f", &renda);
    float calculo;

    if(renda == 0 || renda <= 2000){
        printf("Isento");
    } else if(renda >= 2000.01 || renda <= 3000){
        calculo = renda - 2000;
        calculo = calculo*8/100; 
        printf("%f", calculo * 8/100);
    } else if(renda >= 3000.01 || renda <= 4500) {
        float rendaMenorTres = renda - 2000;



        printf("%f", renda *18/100);
    } else {
        printf("%f", renda *28/100);
    }
}