#include <stdio.h>

int main() {
    long long t, n, aux, total, max;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld", &n);
		max = total = 0;
		while (n > 0) {
			aux = n % 2, n /= 2;
			if (aux) total++;
			else {
				if (total > max) max = total;
				total = 0;
			}
		}
		if (total > max) max = total;
		printf("%lld\n", max);
	}
    return 0;
}