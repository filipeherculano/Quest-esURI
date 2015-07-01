#include <stdio.h>

int main(){
    int n, i, j;
    while(scanf("%d", &n) != EOF){
        int v[n][n];
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                v[i][j] = 0;
                if(i == j){
                    v[i][j] = 2;
                }
                if(n-j-1 == i){
                    v[i][j] = 3;
                }
                if(!(n % 3)){
                    if(i >= n/3 && i < (2*n)/3 && j >= n/3 && j < (2*n)/3){
                        v[i][j] = 1;
                    }
                } else{
                    if(i >= n/3 && i <= (2*n)/3 && j >= n/3 && j <= (2*n)/3){
                        v[i][j] = 1;
                    }
                }
                v[n/2][n/2] = 4;
                printf("%d", v[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}   1