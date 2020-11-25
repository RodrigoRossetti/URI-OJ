#include <stdio.h>

int main() {
	int n;
	unsigned long long soma = 0;
	scanf("%d", &n);
	for (int i = 2; i < n-1; i++)
		soma += i;
	printf("%llu\n", soma);
	return 0;
}