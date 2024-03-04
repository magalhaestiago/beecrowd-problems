#include <stdio.h>

int main(){
    double n1, n2, n3, n4;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    // 2, 3, 4 e 1
    double media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    double notaRecuperacao;

    if (media >= 7) {
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");        
    } else if (media >= 5 && media <= 6.9) {
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        scanf("%lf", &notaRecuperacao);
        printf("Nota do exame: %.1lf\n", notaRecuperacao);
        media = (media + notaRecuperacao)/2;
        if (media >= 5) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media);
        } else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", media);
        }

    } else {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }


}