// aceito
#include <stdio.h>



int main(){
    
    int entrada;
    scanf("%d", &entrada);
    int vetor[entrada];

    if (entrada > 46 || entrada < 0 ) {
        return 0;
    }

    vetor[0] = 0;
    vetor[1] = 1;

    for(int i = 2; i < entrada; i++){
        vetor[i] = vetor[i-1] + vetor[i-2];
        /*
        vetor[2] = 1 + 0
        vetor[3] = 1 + 1
        vetor[4] = 2 + 1

        */
    }

    for(int i = 0; i < entrada - 1; i++){
        
        printf("%d ", vetor[i]);
    }

    printf("%d", vetor[entrada - 1]);
}

