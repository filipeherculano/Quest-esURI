#include <stdio.h>
 
int main() {
	int y, notas[6]={100,50,20,10,5,2}, i, j, moedas[6]={100,50,25,10,5,1},inteiro;
	double x, resto;
	scanf("%lf", &x);
	//parte inteira;
	y = (int)x;
	//parte quebrada;
	resto = x-y;
	resto = resto*100;
	inteiro = (int)resto;

	printf("NOTAS:\n");
	for(i = 0; i < 6; i++){
		printf("%d nota(s) de R$ %d.00\n", y/notas[i], notas[i]);
		y %= notas[i];
	}
	inteiro += y*100;
	printf("MOEDAS:\n");
	for(j = 0; j < 6; j++){
		printf("%d moeda(s) de R$ %.2f\n", inteiro/moedas[j], (float)moedas[j]/100);
		inteiro %= moedas[j];
	}
    return 0;
}1