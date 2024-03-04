// aceito
#include <stdio.h>
int main(){
    float a,b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && c + b > a && a + c > b){
        printf("Perimetro = %.1f", a+b+c);
    } else {
        printf("Area = %.1f",((a + b) * c)/2);
    }
}