

#include <stdio.h>


int main(){
    float entrada;
    float pi = 3.14159;
    scanf("%f", &entrada);

    float result = pi * (entrada*entrada);
    printf("A = %.4f\n", result);
}