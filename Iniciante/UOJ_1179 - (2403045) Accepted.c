#include <stdio.h>

int main(){
        int par[5], impar[5], j, x, imparCount = 0, parCount = 0, i;
        for(i = 0; i < 15; i++){
                scanf("%d", &x);
                if(x % 2){
                        impar[imparCount] = x;
                        imparCount++;
                }else{
                        par[parCount] = x;
                        parCount++;
                }

                if(imparCount == 5){
                        for(j = 0; j < 5; j++){
                                printf("impar[%d] = %d\n", j, impar[j]);
                        }
                        imparCount = 0;
                }else if(parCount == 5){
                        for(j = 0; j < 5; j++){
                                printf("par[%d] = %d\n", j, par[j]);
                        }
                        parCount = 0;
                }

                if(i == 14){
                        for(j = 0; j < imparCount; j++){
                                printf("impar[%d] = %d\n", j, impar[j]);
                        }

                        for(j = 0; j < parCount; j++){
                                printf("par[%d] = %d\n", j, par[j]);
                        }
                }
        }
        return 0;
}
1