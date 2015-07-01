#include <stdio.h>

long long int fat(int f){
        if(f > 1)
                return f*fat(f-1);
        return 1;
}

int main(){
        long long int m[21], n[21];
        int i, n1, n2;
        for(i = 0; i < 21; i++){
                m[i] = fat(i);
                n[i] = fat(i);
        }
        while(scanf("%d %d", &n1, &n2) != EOF){
                printf("%lld\n", n[n1] + m[n2]);
        }
        return 0;
}1