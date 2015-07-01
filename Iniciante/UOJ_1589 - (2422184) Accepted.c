#include <stdio.h>

int main(){
    int t, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        int r1, r2;
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
    }
    return 0;
}   1