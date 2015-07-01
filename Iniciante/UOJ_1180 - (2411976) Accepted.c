#include <stdio.h>

int main(){
        int pos, min, i, size;
        scanf("%d", &size);
        int x[size];
        for(i = 0; i < size; i++){
                scanf("%d", &x[i]);
        }
        min = x[0];
        for(i = 1; i < size; i++){
                if(x[i] < min){
                        min = x[i];
                        pos = i;
                }
        }
        printf("Menor valor: %d\nPosicao: %d\n", min, pos);
        return 0;
}
1