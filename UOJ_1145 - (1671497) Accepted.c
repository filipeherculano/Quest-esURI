#include <stdio.h>

int main(){
	int x, i;
	unsigned long int y, n = 1;
	scanf("%d %lu", &x, &y);
	if(x > 1 && x < 20){
		if(y > x && y < 100000){
			do{
				for(i = 0; i < x-1; i++){
					if(n <= y){
						printf("%lu ", n);
						n++;
					}
				}
					printf("%lu\n", n);
					n++;
			}while(n <= y);
		}
	}
    return 0;
}1