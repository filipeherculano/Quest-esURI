#include <stdio.h>


int main() {
    int n, i;

    do{
        scanf("%d", &n);
    }while(!(n > 2 && n < 1000));

    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
    return 0;
}