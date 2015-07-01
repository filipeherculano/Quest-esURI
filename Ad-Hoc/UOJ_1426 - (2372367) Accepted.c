#include <stdio.h>

int main(){
    int n, i, j, v[9][9];
    scanf("%d", &n);
    do{
        int column = 0;
        for(i = 0; i < 9; i++){
            for(j = 0; j <= column; j++){
                scanf("%d", &v[i][j]);
                j++;
            }
            column += 2;
            i++;
        }

        column = 0;
        for(i = 0; i < 7; i++){
            for(j = 0; j <= column; j++){
                int head = v[i][j], feet[2] = {v[i+2][j], v[i+2][j+2]};

                v[i+2][j+1] = (head - feet[0] - feet[1])/2;
                v[i+1][j] = feet[0] + v[i+2][j+1];
                v[i+1][j+1] = v[i+2][j+2] + v[i+2][j+1];
                j++;
            }
            column += 2;
            i++;
        }

        column = 0;
        for(i = 0; i < 9; i++){
            for(j = 0; j < column; j++){
                printf("%d ", v[i][j]);
            }
            printf("%d\n", v[i][j]);
            column ++;  
        }
        n--;
    }while(n);
    return 0;
}   1