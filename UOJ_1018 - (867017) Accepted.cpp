#include <stdio.h>

int main ()
{
    int x, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0;
    scanf("%d", &x);
    printf("%d\n", x);
    while (x - 100 >= 0)
    {
        x=x-100;
        count1=count1+1;
    }
    while (x - 50 >= 0)
    {
        x=x-50;
        count2=count2+1;
    }
    while (x - 20 >= 0)
    {
        x=x-20;
        count3=count3+1;
    }
    while (x - 10 >= 0)
    {
        x=x-10;
        count4=count4+1;
    }
    while (x - 5 >= 0)
    {
        x=x-5;
        count5=count5+1;
    }
    while (x - 2 >= 0)
    {
        x=x-2;
        count6=count6+1;
    }
    while (x - 1 >= 0)
    {
        x=x-1;
        count7=count7+1;
    }
    printf("%d nota(s) de R$ 100,00\n", count1);
    printf("%d nota(s) de R$ 50,00\n", count2);
    printf("%d nota(s) de R$ 20,00\n", count3);
    printf("%d nota(s) de R$ 10,00\n", count4);
    printf("%d nota(s) de R$ 5,00\n", count5);
    printf("%d nota(s) de R$ 2,00\n", count6);
    printf("%d nota(s) de R$ 1,00\n", count7);
    return 0;
}