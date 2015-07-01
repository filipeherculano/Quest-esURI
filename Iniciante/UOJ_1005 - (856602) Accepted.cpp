#include <stdio.h>

int main()
{
	double A, B, media;
	if ((A >= 0.0) && (A <= 10.0) && (B >= 0.0) && (B <= 10.0));
	{
		scanf("%lf", &A);
		scanf("%lf", &B);
	}
	media=((3.5*A)+(7.5*B))/11;
	printf("MEDIA = %1.5lf\n", media);
	return 0;
}