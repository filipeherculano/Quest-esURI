#include <stdio.h>

int main(){
        int i, x[3], y[3], aux, j;
        scanf("%d %d %d", &x[0], &x[1], &x[2]);
        for (i = 0; i < 3; i++){
                y[i] = x[i];
        }
        for (i = 0; i < 3; i++){
                for (j = 0; j < 3; j++){
                        if(x[i] < x[j]){
                                aux = x[j];
                                x[j] = x[i];
                                x[i] = aux;
                        }
                }
        }
        for (i = 0; i < 3; i++){
                printf("%d\n", x[i]);
        }
        printf("\n");
        for (i = 0; i < 3; i++){
                printf("%d\n", y[i]);
        }
        return 0;
}
