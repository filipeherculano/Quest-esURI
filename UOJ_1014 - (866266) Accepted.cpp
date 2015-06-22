#include <stdio.h>

int main ()
{
    int X, Y;
    float Cm;
    scanf("%d", &X);
    scanf("%d", &Y);
    Cm=(float)X/Y;
    printf("%2.3f km/l\n", Cm);
    return 0;
}