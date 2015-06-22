#include <stdio.h>

int main() {
	int d1, d2, h1, h2, m1, m2, s1, s2, seg1, seg2, dif, i;
	int t[4] = {86400, 3600, 60, 1};


	scanf("Dia %d", &d1);
	scanf("%d%*c : %d%*c : %d%*c", &h1, &m1, &s1);
	scanf("Dia %d", &d2);
	scanf("%d%*c : %d%*c : %d%*c", &h2, &m2, &s2);

	if (d2 >= d1){
		// 86.400 segund ? 1 dia.
		seg1 = (d1*86400) + (h1*60*60) + (m1*60) + s1;
		seg2 = (d2*86400) + (h2*60*60) + (m2*60) + s2;
		dif = seg2 - seg1;

		if (dif >= 0){
			printf("%d dia(s)\n", dif/t[0]);
			dif %= t[0];
			printf("%d hora(s)\n", dif/t[1]);
			dif %= t[1];
			printf("%d minuto(s)\n", dif/t[2]);
			dif %= t[2];
			printf("%d segundo(s)\n", dif/t[3]);
		}
	}
    return 0;
}
