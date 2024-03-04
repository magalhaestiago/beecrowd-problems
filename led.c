#include <stdio.h>

int main(){
    

    int num, aux = 0;
    int cont = 0;
    scanf("%d", &num);

    

    while(aux < num){
        char led[100];

        fgets(led, 100, stdin);

        
        for(int i = 0; i < contadorString(led); i++){
            if (led[i] == '1'){
                cont = cont + 2;
            } else if (led[i] == '2'){
                cont = cont + 5;
            } else if (led[i] == '3'){
                cont = cont + 5;
            } else if (led[i] == '4') {
                cont = cont + 4;
            } else if (led[i] == '5') {
                cont = cont + 5;
            } else if (led[i] == '6') {
                cont = cont + 6;
            } else if (led[i] == '7') {
                cont = cont + 3;
            } else if (led[i] == '8') {
                cont = cont + 7;
            } else if (led[i] == '9') {
                cont = cont + 6;
            } else if (led[i] == '0') {
                cont = cont + 6;
            }
        }
        printf("%d leds", cont);
        aux++;
    }
}

int contadorString(char *s){
    int i = 0;
    int cont = 0;
    while(s[i] != '\0'){
        cont++;
        i++;
        
    }
    return cont - 1;
}