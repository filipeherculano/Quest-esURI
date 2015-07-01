#include <stdio.h>
  
int main(){
	int count = 0;
	double nota, sum;
	do{
		scanf("%lf", &nota);
		if(nota < 0.0 || nota > 10.0){
			printf("nota invalida\n");
		}
		else{
			sum += nota;
			count ++;
		}
	}while(count != 2);
	printf("media = %.2lf\n", sum/2);
    return 0;
}1