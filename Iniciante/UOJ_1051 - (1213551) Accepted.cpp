#include <stdio.h>


int main() {
		double n;

		scanf("%lf", &n);

		if ((n >= 0.00) && (n <= 2000.00)){
			printf("Isento\n");
		}
		else{
			if ((n > 2000.00) && (n <= 3000.00)){
				printf("R$ %.2lf\n", (n-2000.00)*0.08);
			}
			else{
				if ((n > 3000.00) && (n <= 4500.00)){
					printf("R$ %.2f\n", 80.00+((n-3000.00)*0.18));
				}
				else{
					if (n > 4500.00){
						printf("R$ %.2f\n", 350.00+((n-4500.00)*0.28));
					}
				}
			}
		}

        return 0;
}
