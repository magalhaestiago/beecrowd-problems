#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int vetor[n];

    for(int i = 0 ; i < n; i++){
        scanf("%d", &vetor[i]);
    }
   
    int cont = 0;
    // Separando pares dos ímpares e iniciando uma variavel contadora para contar a quantidade de numeros pares
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if (vetor[j]%2 != 0 && vetor[j+1]%2 == 0){
                int aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
                cont++;
            }
        }
    }

    // Bubble sort para ordenar o vetor entre os pares de forma crescente
    for(int i = 0; i < cont - 1; i++){
        for(int j = 0; j < cont-1; j++){
            if(vetor[j] > vetor[j+1]){
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    // Bubble sort para ordenar o vetor entre os pares de forma decrescente
    for(int i = cont; i < n - 1; i ++){
        for(int j = cont ; j < n - 1; j++){
            if(vetor[j] < vetor[j+1]){
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    
    // Saída
    for(int i = 0 ; i < n; i++){
        printf("%d\n", vetor[i]);
    }
    
}