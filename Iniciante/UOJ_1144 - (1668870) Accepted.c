#include <stdio.h>

int main(){
	int line, i;
	unsigned long int n = 1;
	scanf("%d", &line);
	if(line > 1 && line < 1000){
		do{
			printf("%lu %lu %lu\n", n, n*n, n*n*n);
			printf("%lu %lu %lu\n", n, (n*n)+1, (n*n*n)+1);
			n++;
			line --;
		}while(line > 0);
	}
    return 0;
}1
