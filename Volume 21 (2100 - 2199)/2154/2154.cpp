#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	while (scanf("%d", &t) != EOF) {
		for (int i = 0; i < t; i++) {
			if (i) scanf(" + "), printf(" + ");
			scanf("%dx%d", &a, &b);
			printf("%dx", a*b);
			if (b > 2) printf("%d", b-1);
		}
		printf("\n");
	}
	return 0;
}