#include <stdio.h>

int main(){
        int c, q, x = 1, i;
        float soma = 0;
        int cod[5] = {1,2,3,4,5};
        float pr[5] = {4.00,4.50,5.00,2.00,1.50};
        scanf("%d %d", &c, &q); 
        do{
                for (i = 0; i < 5; i++){
                        if (cod[i] == c){
                                soma += pr[i];
                        } 
                }
                x++;
        }while (x <= q);
        printf("Total: R$ %.2f\n", soma);
        return 0;
}
