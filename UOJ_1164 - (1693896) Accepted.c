#include <stdio.h>

int ehPerfeito(int b){
	int i, sum = 0;
	for(i = 1; i < b; i++){
		if(!(b % i)){
			sum += i;
		}
	}
	if(sum == b){
		printf("%d eh perfeito\n", b);
		return 1;
	}
	printf("%d nao eh perfeito\n", b);
	return 0;
}

int main(){
	int n, t, i;
	scanf("%d", &t);
	for (i = 0; i < t; ++i){
		scanf("%d", &n);
		ehPerfeito(n);
	}
	return 0;
}1