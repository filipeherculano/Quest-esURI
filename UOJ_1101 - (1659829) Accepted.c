#include <stdio.h>
 
int main(){
    int x, y, sum;
    do{
    	sum = 0;
        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0){
            if(x >= y){
            	sum += y;
                do{
                    printf("%d ", y);
                    y++;
                    sum += y;
                }while(y <= x);
                printf("Sum=%d\n", sum-y);
            }else{
                if(y >= x){
                	sum += x;
                    do{
                        printf("%d ", x);
                        x++;
                        sum += x;
                    }while(x <= y);
                    printf("Sum=%d\n", sum-x);
                }
            }
        }
    }while(x != 0 && y != 0);
    return 0;
}1
