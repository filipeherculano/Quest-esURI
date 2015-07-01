#include <stdio.h>

int ehPrimo(int b){
	int i;
	for (i = 2; i < b-1; i++){
		if(!(b%i)){
			printf("%d nao eh primo\n", b);
			return 1;
		}
	}
	printf("%d eh primo\n", b);
	return 0;
}

int main(){
	int n, t, i;
	scanf("%d", &t);
	for (i = 0; i < t; ++i){
		scanf("%d", &n);
		ehPrimo(n);
	}
	return 0;
}1