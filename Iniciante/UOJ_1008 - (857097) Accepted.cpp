#include <stdio.h>

int main ()
{
	int num, ht;
	float valor, salario;
	scanf("%d", &num);
	scanf("%d", &ht);
	scanf("%f", &valor);
	salario=ht*valor;
	printf("NUMBER = %d\nSALARY = U$ %3.2f\n", num, salario);
	return 0;
}
