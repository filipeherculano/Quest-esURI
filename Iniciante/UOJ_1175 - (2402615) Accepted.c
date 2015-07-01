#include <stdio.h>

int main(){
        int n[20], i, j = 19;
        for(i = 0; i < 20; i++){
                scanf("%d", &n[i]);
        }

        for(i = 0; i < 10; i++){
                int aux;
                aux = n[i];
                n[i] = n[j-i];
                n[j-i] = aux;
        }

        for(i = 0; i < 20; i++){
                printf("N[%d] = %d\n", i, n[i]);
        }
        return 0;
}
1