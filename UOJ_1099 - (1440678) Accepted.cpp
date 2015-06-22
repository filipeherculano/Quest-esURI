#include <stdio.h>

int main(){
  int r, x, y, i, j, count;
  scanf("%d", &r);

  for(i = 0; i < r; i++){
    count = 0;
    scanf("%d %d", &x, &y);
    if(x > y){
      for(j = y+1; j < x; j++){
        if(j % 2){
          count += j;
        }
      }
      printf("%d\n", count);
    }
    else{
      if(x < y){
        for(j = x+1; j < y; j++){
          if(j % 2){
            count += j;
          }
        }
        printf("%d\n", count);
      }
      else{
        printf("0\n");
      }
    }
  }
  return 0;
}