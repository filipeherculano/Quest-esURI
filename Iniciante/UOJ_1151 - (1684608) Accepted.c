#include <stdio.h>

int main(){
	int fib[45], i, n;
	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i < 45; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}

	scanf("%d", &n);
	if(n > 0 && n < 46){
		for (i = 0; i < n-1; ++i){
			printf("%d ", fib[i]);
		}
		printf("%d\n", fib[i]);
	}
	return 0;
}1