#include <stdio.h>

int main(){
	int line, i, n = 1;
	scanf("%d", &line);
	do{
		for(i = 0; i < 3; i++){
			printf("%d ", n);
			n++;
		}
		printf("PUM\n");
		n++;
		line--;
	}while(line > 0);
    return 0;
}1