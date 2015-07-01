#include <stdio.h>

int main(){
	int x, y, sum = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	if(x > y){
		do{
			if(y % 13){
				sum += y;
			}
			y++;
		}while(x >= y);
		printf("%d\n", sum);
	}
	else{
		if(x < y){
			do{
				if(x % 13){
					sum += x;
				}
				x++;
			}while(x <= y);
			printf("%d\n", sum);
		}
		else{
			if(x % 13){
				printf("%d\n", x);
			}
			else{
				printf("0\n");
			}
		}
	}
    return 0;
}1