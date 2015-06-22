#include <stdio.h>

int main ()
{
	char nome;
	double sf, tv, total;
	scanf ("%s", &nome);
	scanf ("%lf", &sf);
	scanf ("%lf", &tv);
	total=(tv*0.15)+sf;
	printf("TOTAL = R$ %3.2lf\n", total);
	return 0;
}
