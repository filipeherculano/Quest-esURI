#include <stdio.h>

int main(){
    int x, i;
    scanf("%d", &x);

    for(i = 1; i <= x; i++){
        if(!(x % i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
1