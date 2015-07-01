#include <stdio.h>

int main(){
        unsigned long long int f[61];
        int n, i, t;
        f[0] = 0;
        f[1] = 1;
        for(i = 2; i < 61; i++){
                f[i] = f[i-1] + f[i-2];
        }
        scanf("%d", &t);
        for(i = 0; i < t; i++){
                scanf("%d", &n);
                printf("Fib(%d) = %llu\n", n, f[n]);
        }
        return 0;
}
1