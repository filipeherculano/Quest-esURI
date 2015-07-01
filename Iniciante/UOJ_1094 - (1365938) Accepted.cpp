#include <stdio.h>


int main() {
    int i, n, num, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char cob;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &num);
        scanf(" %c", &cob);
        switch(cob){
            case 'C':
                coelhos += num;
            break;
            case 'R':
                ratos += num;
            break;
            case 'S':
               sapos += num;
            break;
        }
        total += num;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", ((float)coelhos/total)*100);
    printf("Percentual de ratos: %.2f %%\n", ((float)ratos/total)*100);
    printf("Percentual de sapos: %.2f %%\n", ((float)sapos/total)*100);

    return 0;
}
