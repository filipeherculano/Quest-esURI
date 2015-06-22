#include <stdio.h>

int main(){
	double A,B,C,med;
	do{
		scanf("%lf", &A);
	}while (!(A >= 0 && A <= 10));

	do{
		scanf("%lf", &B);
	}while (!(B >= 0 && B <= 10));

	do{
		scanf("%lf", &C);
	}while (!(C >= 0 && C <= 10));

	med = ((A*2) + (B*3) + (C*5))/10;

	printf("MEDIA = %.1lf\n", med);

	return 0;
}