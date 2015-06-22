#include <stdio.h>
#define Vel1 60
#define Vel2 90

int main ()
{
    int D, V, M;
    float Vm;
    scanf("%d", &D);
    V=Vel2-Vel1;
    Vm=(float)V/60;
    M=D/Vm;
    printf("%d minutos\n", M);
    return 0;
}
