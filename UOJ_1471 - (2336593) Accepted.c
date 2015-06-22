#include <stdio.h>

int main(){
        int n, r, i;
        while(scanf("%d %d", &n, &r) != EOF){
                int divers[n+1];
                for(i = 1; i <= n; i++){
                        divers[i] = 0;
                }

                for(i = 0; i < r; i++){
                        int aux;
                        scanf("%d", &aux);
                        divers[aux] = 1;
                }

                int nonDead = 1;
                for(i = 1; i <= n; i++){
                        if(divers[i] == 0){
                                nonDead = 0;
                                printf("%d ", i);
                        }
                }
                if(nonDead)
                        printf("*");
                printf("\n");
        }

        return 0;
}
1