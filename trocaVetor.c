#include <stdio.h>

int main(){

    int vetor[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }

    int j = 19;
    for(int i = 0; i < 10; i++){
        
        int aux = vetor[i]; // aux = 0 // aux = 1
        vetor[i] = vetor[j]; // vetor[0] = 19 vetor[i] = 18
        vetor[j] = aux; //vetor[19] = 0
        j--;
    }   

    for(int i = 0; i< 20; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    
}