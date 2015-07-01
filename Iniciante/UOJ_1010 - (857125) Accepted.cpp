#include <stdio.h>

int main ()
{
	int cp1, np1, cp2, np2;
	double vu1, vu2, valor;
	scanf("%d%d%lf", &cp1, &np1, &vu1);
	scanf("%d%d%lf", &cp2, &np2, &vu2);
	valor=(np1*vu1)+(np2*vu2);
	printf("VALOR A PAGAR: R$ %2.2lf\n", valor);
	return 0;
}
