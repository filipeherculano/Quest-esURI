#include <stdio.h>

int main(){
    int x, i, sum = 0;
    do{
        scanf("%d", &x);
        if(x != 0 && x % 2){
            x ++;
            for(i = 0; i < 5; i++){
                sum += x;
                x += 2;
            }
            printf("%d\n", sum);

        } else if(x != 0){
            for(i = 0; i < 5; i++){
                sum += x;
                x += 2;
            }
            printf("%d\n", sum);
        }
        sum = 0;
    }while(x != 0);
    return 0;
}1