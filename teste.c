#include <stdio.h>

int main(){

    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i ++){
        for(int j = 10; j > 0; j++){
            int aux = vetor[j];
            vetor[j] = vetor[j+1];
            vetor[j+1] = aux;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    
}