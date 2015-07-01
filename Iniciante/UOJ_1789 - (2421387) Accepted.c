#include <stdio.h>

int main(){
    int i, l;
    while(scanf("%d", &l) != EOF){
        int max = 0;
        for(i = 0; i < l; i++){
            int temp;
            scanf("%d", &temp);
            if(max <= temp){
                max = temp;
            }
        }
        if(max < 10){
            printf("1\n");
        } else if(max >= 10 && max < 20){
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    return 0;
}1