#include <stdio.h>
 
int main() {
    float n1, n2, n3, n4, media, e;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = ((n1*2 + n2*3 + n3*4 + n4)/10);
    if (media >= 7.0){
            printf("Media: %.1f\n", media);
            printf("Aluno aprovado.\n");
    }
    else{
            if (media < 5.0){
                    printf("Media: %.1f\n", media);
                    printf("Aluno reprovado.\n");
            }
            else{
                    scanf("%f", &e);
                    printf("Media: %.1f\n", media);
                    media += e;
                    printf("Aluno em exame.\n");
                    printf("Nota do exame: %.1f\n", e);
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", media/2);
            }       
    }
    return 0;
}1