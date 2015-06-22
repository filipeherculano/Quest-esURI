#include <stdio.h>

int main(){
    int n, i, j;
    while(scanf("%d", &n) && n){
        int v[n][n], head = 0, tail = n-1, num = 1;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                v[i][j] = 0;
            }
        }
        do{
            for(i = 0; i < n; i++){
                if(!v[head][i] || !v[tail][i] || !v[i][head] || !v[i][tail]){
                    v[head][i] = num;
                    v[tail][i] = num;
                    v[i][head] = num;
                    v[i][tail] = num;
                }
            }
            head++;
            tail--;
            num++;
        }while(head <= tail);

        for(i = 0; i < n; i++){
            for(j = 0; j < n-1; j++){
                printf("%3d ", v[i][j]);
            }
            printf("%3d\n", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}   1