#include <stdio.h>
  
int main(){
	int x, y, loop, i;
	double result;

	scanf("%d", &loop);
	for (i = 0; i < loop; i++){
		scanf("%d %d", &x, &y);
		if(y == 0){
			printf("divisao impossivel\n");
		}
		else{
			printf("%.1lf\n", (double)x/y);
		}
	}
    return 0;
}1