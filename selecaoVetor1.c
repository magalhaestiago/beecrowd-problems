#include <stdio.h>

int main(){
    double vetor[100];
    int cont;
    
    for(int i = 0;  i < 100; i++){
        scanf("%lf", vetor[i]);
        if(vetor[i] <= 10){
            cont++;
        }
        printf("%d \n", cont);
    }

    for(int i = 0; i < cont; i++){
        printf("A[%d] = %.1f\n", i, vetor[i]);
    }
}