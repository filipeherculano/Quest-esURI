#include <stdio.h>
#include <math.h>

int main ()
{
	int raio;
	double vol;
	scanf ("%d", &raio);
	vol=(4.0/3)*3.14159*pow(raio,3);
	printf ("VOLUME = %3.3f\n", vol);
	return 0;
}
