#include <stdio.h>


int main() {
    int i, n[100], biggest, position;
    for(i=0; i<100; i++){
        scanf("%d", &n[i]);
        if(biggest < n[i]){
            biggest = n[i];
            position = i+1;
        }
    }

    printf("%d\n%d\n", biggest, position);
    return 0;
}