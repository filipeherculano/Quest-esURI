#include <stdio.h>

void winner(int a, int b);

  //resultados
int sumI = 0, sumG = 0, empate = 0;

int main(){
	int i, g, resp, grenais = 1;
	scanf("%d %d", &i, &g);
	winner(i, g);
	do{
	    do{
	    	printf("Novo grenal (1-sim 2-nao)\n");
	    	scanf("%d", &resp);
	    }while(resp != 1 && resp != 2);

		if(resp == 1){
			scanf("%d %d", &i, &g);
			winner(i, g);
			grenais ++;
		}
	}while (resp != 2);

	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, sumI, sumG, empate);

	if(sumI > sumG){
		printf("Inter venceu mais\n");
	}
	else{
		if(sumG > sumI){
			printf("Gremio venceu mais\n");
		}
		else{
			printf("Nao houve vencedor\n");
		}
	}

    return 0;
}

void winner(int a, int b){
	if(a > b){
		sumI ++;
	}
	else{
		if(a < b){
			sumG ++;
		}
		else{
			empate ++;
		}
	}
}1