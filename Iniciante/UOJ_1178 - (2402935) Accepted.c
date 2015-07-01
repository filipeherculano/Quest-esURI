#include <stdio.h>

int main(){
        double x, n[100];
        int i;
        scanf("%lf", &x);
        for(i = 0; i < 100; i++){
                n[i] = x;
                printf("N[%d] = %.4lf\n", i, n[i]);
                x /= 2.0;
        }
        return 0;
}
1