#include <stdio.h>
  
  
int main() {
    int n, x, i, count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        if (x >= 10 && x <= 20){
            count++;
        }
    }
    printf("%d in\n", count);
    printf("%d out\n", n-count);
    return 0;
}