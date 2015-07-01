#include <stdio.h>

int main(){
	int x, z, count = 0, aux = 0;
	scanf("%d", &x);
	do{
		scanf("%d", &z);
	}while(x >= z);
	do{
		aux += x+count;
		count++;
	}while(aux <= z);
	printf("%d\n", count);
    return 0;
}1