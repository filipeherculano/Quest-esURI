#include <stdio.h>
  
  
int main() {
    int i, count = 0, n[5];
  
    for (i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        if ((n[i] % 2) == 0){
            count++;
        }
    }
     
    printf("%d valores pares\n", count);
 
    return 0;
}