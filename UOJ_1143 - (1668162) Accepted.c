#include <stdio.h>

int main(){
	int line, i, n = 1;
	scanf("%d", &line);
	if(line > 1 && line < 1000){
		do{
			printf("%d %d %d\n", n, n*n, n*n*n);
			n++;
			line --;
		}while(line > 0);
	}
    return 0;
}1