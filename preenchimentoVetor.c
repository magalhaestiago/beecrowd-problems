// aceito

#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    
    int valor = 0;
    for(int i = 0; i < 1000; i++){

        printf("N[%d] = %d\n", i, valor);
        
        if(valor < n - 1){
            valor++;
        } else {
            valor = 0;
        }
        
    }
}