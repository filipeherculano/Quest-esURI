#include<stdio.h>

int main() {
    int i, x;
    scanf("%d", &x);
    printf("%d ano(s)\n", x/365);
    x %= 365;
    printf("%d mes(es)\n", x/30);
    x %= 30;
    printf("%d dia(s)\n", x/1);
    return 0;
}