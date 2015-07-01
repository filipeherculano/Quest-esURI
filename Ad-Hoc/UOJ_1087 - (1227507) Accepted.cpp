#include <stdio.h>
#include <stdlib.h>


int main() {
    int x1[10000], x2[10000], y1[10000], y2[10000], i = 0, j; // O M?XIMO DE COMBINA??ES ? 64+1(0 0 0 0) POIS O TABULEIRO ? 8X8

    do{
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        i++;
    }while (x1[i-1] != 0 && x2[i-1] != 0 && y1[i-1] != 0 && y2[i-1] != 0);

    for (j = 0; j < i-1 ; j++){
        if ((abs(x1[j] - x2[j]) == abs(y1[j] - y2[j])) && (abs(x1[j] - x2[j]) != 0)) {    // MESMA DIAGONAL
            printf("1\n");
        }
        else{
            if (x1[j] == x2[j] && y1[j] == y2[j]) { // MESMA POSI??O
                 printf("0\n");
            }
            else{
                if (abs(x1[j] - x2[j]) == 0 || abs(y1[j] - y2[j]) == 0){   // MESMA LINHA
                    printf("1\n");
                }
                else{
                    printf("2\n"); // POSI??O QUALQUER SEM SER DIAGONAL NEM LINHA
                }   
            }
        }
    }
    return 0;
}