#include <stdio.h>

int main(){
    int a[3], i;
    char c[3] = {'A', 'B', 'C'};
    while(scanf("%d %d %d", &a[0], &a[1], &a[2]) != EOF){
        switch(a[0]+a[1]+a[2]){
            case 1:
                for(i = 0; i < 3; i++){
                    if(a[i]){
                        printf("%c\n", c[i]);
                        break;
                    }
                }
                break;
            case 2:
                for(i = 0; i < 3; i++){
                    if(!a[i]){
                        printf("%c\n", c[i]);
                        break;
                    }
                }
                break;
            default:
                printf("*\n");
        }
    }
    return 0;
}   1