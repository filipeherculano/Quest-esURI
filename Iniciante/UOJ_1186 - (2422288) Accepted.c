#include <stdio.h>
#define size 12
   
int main(){
        int i, c, j;
        long double m[size][size], sum = 0.0;
        char t;
        scanf("%c", &t);
        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                scanf("%Lf", &m[i][j]);
            }
        }
        for(i = size-1; i > 0; i--){
            for(j = size-i; j < size; j++){
                sum += m[j][i];
            }
        }
        switch(t){
                case 'S':
                        printf("%.1Lf\n", sum);
                        break;  
                case 'M':
                        printf("%.1Lf\n", sum/66);
                        break;
        }
        return 0;
}1