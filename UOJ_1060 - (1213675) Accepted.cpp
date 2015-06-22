#include <stdio.h>


int main() {
	int i, count = 0;
	double n[6];

	for (i = 0; i < 6; i++){
		scanf("%lf", &n[i]);
		if (n[i] > 0.0){
			count++;
		}
	}

	printf("%d valores positivos\n", count);

    return 0;
}
