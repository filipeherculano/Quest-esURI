#include <stdio.h>


int main() {
    int n, i;
    float nota1, nota2, nota3;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        printf("%.1f\n", (nota1*2+nota2*3+nota3*5)/10);
    } 
    return 0;
}