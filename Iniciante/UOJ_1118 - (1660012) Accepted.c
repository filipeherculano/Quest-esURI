#include <stdio.h>
  
int main(){
	int count = 0, c;
	double nota, sum = 0.0;
	do{
		scanf("%lf", &nota);
		if(nota < 0.0 || nota > 10.0){
			printf("nota invalida\n");
		}
		else{
			sum += nota;
			count ++;
		}

		if(count == 2){
			printf("media = %.2lf\n", sum/2);
			do{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &c);
			}while(c != 1 && c != 2);
			if(c == 1){
				count = 0;
				sum = 0.0;	
			}
		}
	}while(c != 2);
    return 0;
}1