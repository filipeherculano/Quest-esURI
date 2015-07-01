#include <stdio.h>

int main(){
	int n, i, j;
	while(scanf("%d", &n) && n){
		int v[n][n], num = 1, head = 0, tail = 0;
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				v[i][j] = 0;
			}
		}
		do{
			for(i = tail; i < n; i++){
				v[i][head] = num;
				v[head][i] = num;
				num ++;
			}
			num = 1;
			head++;
			tail++;
		}while(head <= n);

		for(i = 0; i < n; i++){
			for(j = 0; j < n-1; j++){
				printf("%3d ", v[i][j]);
			}
			printf("%3d\n", v[i][j]);
		}
		printf("\n");
	}
	return 0;
}1