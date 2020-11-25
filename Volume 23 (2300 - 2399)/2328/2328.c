#include <stdio.h>

int main() {
	int n, x, total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        total += x-1;
    }
    printf ("%d\n", total);
	return 0;
}