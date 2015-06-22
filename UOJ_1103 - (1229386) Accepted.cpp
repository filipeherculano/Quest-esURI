#include <stdio.h>

int main() {
    int h1[10000], h2[10000], m1[10000], m2[10000], i = 0, j, min1, min2;

    do{
        scanf("%d %d %d %d", &h1[i], &m1[i], &h2[i], &m2[i]);
        i++;
    }while (h1[i-1] != 0 || h2[i-1] != 0 || m1[i-1] != 0 || m2[i-1] != 0);

    for (j = 0; j < i-1; j++){
        min1 = h1[j]*60 + m1[j];
        min2 = h2[j]*60 + m2[j];
        if (min1 < min2){
            printf("%d\n", min2-min1);
        }
        else{
            if (min1 > min2){
                printf("%d\n", 1440 - min1 + min2);
            }
            else{
                printf("0\n");
            }
        }
    }
    return 0;
}