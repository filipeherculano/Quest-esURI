#include <stdio.h>
   
   
int main() {
    int i, count1 = 0, count2 = 0, count3 = 0, count4 = 0, n[5];
   
    for (i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        if ((n[i] % 2) == 0){
 
            count1++;
        }
        else{
            count4++;
        }
        if (n[i] > 0){
 
            count2++;
        }
        else{
            if (n[i] < 0){
 
                count3++;
            }
        }
    }
      
    printf("%d valor(es) par(es)\n", count1);
    printf("%d valor(es) impar(es)\n", count4);
    printf("%d valor(es) positivo(s)\n", count2);
    printf("%d valor(es) negativo(s)\n", count3);
  
    return 0;
}