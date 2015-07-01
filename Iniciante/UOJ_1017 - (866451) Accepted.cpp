#include <stdio.h>

int main ()
{
    int V, T, D;
    float G;
    scanf("%d", &V);
    scanf("%d", &T);
    D=V*T;
    G=(float)D/12;
    printf("%2.3f\n", G);
    return 0;
}
