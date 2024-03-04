#include <stdio.h>
#include <math.h>

float quadrado(float num){
    return num * num;
}



float distancia(double x1, double y1, double x2, double y2){
    //printf("%f %f %f %f", quadrado(x1), quadrado(y1), quadrado(x2), quadrado(y2));
    //printf("%f\n", quadrado(x2) - quadrado(x1));
    //printf("%f\n", quadrado(y2)- quadrado(y1));

    return sqrt((quadrado(x2)-quadrado(x1))+(quadrado(y2)-quadrado(y1)));
}

int main(){
    printf("\n%f", distancia(-2.5, 0.4, 12.1, 7.3));
    //printf("\n%f", sqrt(49));

    //printf("%f", quadrado(-1));
}