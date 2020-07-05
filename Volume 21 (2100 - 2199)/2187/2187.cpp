#include <bits/stdc++.h>
using namespace std;

int main() {
	int v, i = 1;
	while (scanf("%d", &v) && v) {
		printf("Teste %d\n", i);
		printf("%d %d %d %d\n\n", v/50, v%50/10, v%50%10/5, v%50%10%5/1);
		i++;
	}
	return 0;
}