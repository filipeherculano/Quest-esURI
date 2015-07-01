#include <stdio.h>
#define size 12
     
int main(){
        int i, j, tail = 1;
        long double m[size][size], sum = 0.0;
        char t;
        scanf("%c", &t);
        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                scanf("%Lf", &m[i][j]);
            }
        }
        for(i = 0; i < (size/2)-1; i++){
            for(j = i+1; j < size-tail; j++){
                sum += m[j][i];
            }
            tail++;
        }
        switch(t){
                case 'S':
                        printf("%.1Lf\n", sum);
                        break;  
                case 'M':
                        printf("%.1Lf\n", sum/26);
                        break;
        }
        return 0;
}1