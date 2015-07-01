#include <stdio.h>

int main(){
    int n, i;
    while(scanf("%d", &n) != EOF){
        int v[n], final = n-1, begin = 0;
        v[0] = 1;
        v[n-1] = 2;
        for(i = 1; i < n-1; i++){
            v[i] = 3;
        }

        do{
            for(i = 0; i < n; i++){
                printf("%d", v[i]);
            }
            printf("\n");

            if(v[begin+1] == 2){
                int aux;
                aux = v[begin+1];
                v[begin+1] = v[begin];
                v[begin] = aux;
            } else{
                v[begin] = 3;
                v[begin+1] = 1;
                v[final] = 3;
                v[final-1] = 2;  
            }

            begin++;
            final--;
        }while(begin != n);
    }
    return 0;
}   1