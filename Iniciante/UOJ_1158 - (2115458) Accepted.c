#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    while(n != 0){
        int initial, times, sum = 0;
        scanf("%d %d", &initial, &times);

        if(initial % 2){
            sum += initial;
            times--;
            while(times != 0){
                initial += 2;
                sum += initial;
                times--;
            }
            printf("%d\n", sum);
        } else{
            initial++;
            while(times != 0){
                sum += initial;
                times--;
                initial += 2;
            }
            printf("%d\n", sum);
        }
        n--;
    }
    return 0;
}
1