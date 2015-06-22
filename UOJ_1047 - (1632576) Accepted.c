#include <stdio.h>
 
int main(){
    int h1, m1, h2, m2, delta;
    do{
        scanf ("%d %d %d %d", &h1, &m1, &h2, &m2);
        h1 = abs(h1);
        m1 = abs(m1);
        h2 = abs(h2);
        m2 = abs(m2);
    }while (h1 > 23 || h2 > 23 || m2 > 59 || m1 > 59);

    m1 += h1*60;
    m2 += h2*60;
    if(m1 == m2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        if(m1 > m2){
            m1 = 1440-m1;
            delta = m1 + m2;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", delta/60, delta%60);
        }
        else{
            if(m1 < m2){
                delta = m2 - m1;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", delta/60, delta%60);
            }
        }
    }
    return 0;
}1