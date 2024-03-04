#include <stdio.h>


int contadorString(char *s){
    int cont = 0, i = 0;
    while(s[i] != '\0'){
        cont++;
        i++;
    }
    return cont - 1;
}

void inverterString(char *str) {
    
    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }

    
    int inicio = 0;
    int fim = comprimento - 2;

    while (inicio < fim) {
        
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        
        inicio++;
        fim--;
    }
}

int main(){
    int n, cont = 0;
    scanf("%d", &n);

    do{
        char entrada[10];
        fgets(entrada, 10, stdin);

        for(int i = 0; i < contadorString(entrada); i++){
            printf("%c", entrada[i]);
        }
        printf("\n");
    

    

    

    //printf("%d", contadorString(entrada));
    //printf("%d", intLetra);
    char novoVetor[contadorString(entrada)];
    for(int i = 0; i < contadorString(entrada); i++){
        if(entrada[i] == ' '){

        }
        int aux = (int)entrada[i];

        if ((aux > 64 && aux <= 90) || (aux >= 97 && aux <= 122)){
            aux = aux + 3;
            novoVetor[i] = aux;
        } else {
            novoVetor[i] = aux;
        }
    }

    inverterString(novoVetor);


    int metade = contadorString(entrada)/2;
    char terceiroVetor[contadorString(entrada)];
    
    for(int i = 0; i < contadorString(entrada); i++){
        int aux = (int)novoVetor[i];

        if(i >= metade){
            aux = aux - 1;
            terceiroVetor[i] = aux;
        } else {
            terceiroVetor[i] = aux;
        }
        
        
    }

    for(int i = 0; i < contadorString(entrada); i++){
        printf("%c", terceiroVetor[i]);
    }
    printf("\n");

    }while(cont < n);
    
}