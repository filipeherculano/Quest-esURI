#include <stdio.h>

int main(){
        int t, n[1000], i;
        scanf("%d", &t);
        for(i = 0; i < 1000; i++){
                printf("N[%d] = %d\n", i, i % t);
        }
        return 0;
}
1