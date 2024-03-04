#include <stdio.h>

int main(){
    float resultado = 0;
    for(int i = 1; i <= 100; i++){
        resultado = resultado + 1/i;
    }

    printf("%.2f", resultado);
}