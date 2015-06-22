#include <stdio.h>

int main(){
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	if(x > y){
		y++;
		while(x > y){
			if(y % 5 == 2 || y % 5 == 3){
				printf("%d\n", y);
			}
			y++;
		}
	}
	else{
		if(x < y){
			x++;
			while(y > x){
				if(x % 5 == 2 || x % 5 == 3){
					printf("%d\n", x);
				}
				x++;
			}
		}
	}
    return 0;
}1