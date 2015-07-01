#include <stdio.h>
#include <math.h>

int main ()
{
    int x1, y1, x2, y2;
    float D;
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    D= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%1.4f\n", D);
    return 0;
}