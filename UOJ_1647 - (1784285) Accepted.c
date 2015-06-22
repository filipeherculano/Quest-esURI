#include <stdio.h>

int main(){
    int bacias[50], f[50], n, i, j, ind;
    do{
        int flag = 1;
        long long int soma = 0, f[50];
        scanf("%d", &n);
        if(n >= 1 && n <= 50){               // recebe a quantidade de bacias entre 0 e 51
            for(i = 0; i < n; i++){          // instacia toda o array nova com 0.
                f[i] = 0;
            }
            for(i = 0; i < n; i++){          // grava os valores no array principal entre 0 e 1001.
                scanf("%d", &bacias[i]);    
                if(bacias[i] < 0 || bacias[i] > 1000){
                    flag = 0;
                } 
            }
            if(flag){
                ind = n-1;
                do{
                    for(i = 0; i < n; i++){
                        for(j = 0; j < i; j++){
                            f[i] += f[j];
                        }
                        f[i] += bacias[ind];
                        ind --;
                    }
                }while(ind >= 0);
                for(i = 0; i < n; i++){
                    soma += f[i];
                }
                printf("%lld\n", soma);
            }
        }
    }while(n != 0);
    return 0;
}1