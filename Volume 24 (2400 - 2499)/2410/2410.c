#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, x, i, total = 0;
	bool v[1000001] = {0};
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (!v[x]) total++;
		v[x] = 1;
	}
	printf("%d\n", total);
	return 0;
}