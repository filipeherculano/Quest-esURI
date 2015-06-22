#include <stdio.h>

int main(){
	int n, i = 0, count = 0;
	double media;
	do{
		scanf("%d", &n);
		if(n > 0){
			count++;
			i += n;
		}	
	} while (n > 0);
	media = (double)i / count;
	printf("%.2lf\n", media);
    return 0;
}1