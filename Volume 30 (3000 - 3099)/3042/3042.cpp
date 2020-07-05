#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, pos, total;
	char a, b, c;
	while (scanf("%d", &m) && m) {
		c = getchar();
		pos = 2, total = 0;
		while (m--) {
			a = getchar(), c = getchar(), b = getchar(), c = getchar(), c = getchar(), c = getchar();
			if (a == '0' && b == '1' && pos != 1) total += abs(pos-1), pos = 1;
			else if (a == '1' && b == '0' && pos != 2) total += abs(pos-2), pos = 2;
			else if (a == '1' && b == '1' && pos != 3) total += abs(pos-3), pos = 3;
		}
		printf("%d\n", total);
	}
	return 0;
}