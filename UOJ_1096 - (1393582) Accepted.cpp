#include <stdio.h>

int main(){
    int x = 1, i, j;
    do{
      j = 7;
      for (i=0; i<3; i++){
        printf("I=%d J=%d\n", x, j);
        j--;
      }
      x += 2;
    } while (x <= 9);

    return 0;
}