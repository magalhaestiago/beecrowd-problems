#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    while(n > 0){
        int x, y;

        scanf("%d %d", &x, &y);
        int soma = 0, cont = 0, i = x;
        while(cont != y){
            if(i%2 != 0){
                soma = soma + i;
                cont++;
                i++;
            }
            i++;
        }
    
        
        printf("%d\n", soma);
        n--;
        }

    }
