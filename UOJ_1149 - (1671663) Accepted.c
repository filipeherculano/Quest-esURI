#include <stdio.h>

int main(){
	int a, n, i, sum = 0;
	scanf("%d ", &a);
	do{
		scanf("%d", &n);
	} while (n <= 0);
	for(i = 0; i < n; i++){
		sum += a;
		a++;
	}
	printf("%d\n", sum);
    return 0;
}1