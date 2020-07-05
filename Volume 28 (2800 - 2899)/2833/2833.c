#include <stdio.h>
 
int main() {
	int i, X, L, K;
	for (i = 1; i <= 16; i++) {
	  scanf("%d", & X);
	  if (X == 1) K = i;
	  if (X == 9) L = i;
	}
	if ((L - 1) / 2 == (K - 1) / 2) {
	  printf("oitavas\n");
	} else if ((L - 1) / 4 == (K - 1) / 4) {
	  printf("quartas\n");
	} else if ((L - 1) / 8 == (K - 1) / 8) {
	  printf("semifinal\n");
	} else {
	  printf("final\n");
	}
	return 0;
  }