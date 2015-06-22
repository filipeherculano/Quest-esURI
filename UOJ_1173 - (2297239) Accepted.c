#include <stdio.h>

int main()
{
    int v, n[10], i;
    scanf("%d", &v);
    if(v <= 50){
        n[0] = v;
        printf("N[0] = %d\n", v);
        for(i = 1; i < 10; i++){
            n[i] = v*2;
            v *= 2;
            printf("N[%d] = %d\n", i, v);
        }
    }
    return 0;
}

1