#include <stdio.h>
  
  
int main() {
    int i, count = 0;
    double n[6], med;
  
    for (i = 0; i < 6; i++){
        scanf("%lf", &n[i]);
        if (n[i] > 0.0){
            med += n[i];
            count++;
        }
    }
     
     
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", med/count);
 
    return 0;
}