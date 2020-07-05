#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, v, a, b, c, d, e, t = 0;
	bool f1, f2;
	scanf("%d", &n);
	while (n--) {
		if (t) printf("\n");
		f1 = f2 = 0;
		cin >> v;
		printf("Mapa de Karnaugh\n");
		if (v == 2) {
			cout << "  0 1\n";
			map<tuple<bool, bool>, bool> mapa;
			for (int i = 0; i < 4; i++) {
				scanf("%d %d - %d", &a, &b, &e);
				mapa[{a, b}] = e;
				if (e == 1) f1 = 1;
				else if (e == 0) f2 = 1;
			}
			printf("0|%d %d\n1|%d %d\n", mapa[{0, 0}], mapa[{1, 0}], mapa[{0, 1}], mapa[{1, 1}]);
		}
		else if (v == 3) {
			printf("  00 01 11 10\n");
			map<tuple<bool, bool, bool>, bool> m;
			for (int i = 0; i < 8; i++) {
				scanf("%d %d %d - %d", &a, &b, &c, &e);
				m[{a, b, c}] = e;
				if (e == 1) f1 = 1;
				else if (e == 0) f2 = 1;
			}
			printf("0|%d  %d  %d  %d\n", m[{0, 0, 0}], m[{0, 1, 0}], m[{1, 1, 0}], m[{1, 0, 0}]);
			printf("1|%d  %d  %d  %d\n", m[{0, 0, 1}], m[{0, 1, 1}], m[{1, 1, 1}], m[{1, 0, 1}]);
		}
		else {
			printf("   00 01 11 10\n");
			map<tuple<bool, bool, bool, bool>, bool> m;
			for (int i = 0; i < 16; i++) {
				scanf("%d %d %d %d - %d", &a, &b, &c, &d, &e);
				m[{a, b, c, d}] = e;
				if (e == 1) f1 = 1;
				else if (e == 0) f2 = 1;
			}
			printf("00|%d  %d  %d  %d\n", m[{0, 0, 0, 0}], m[{0, 1, 0, 0}], m[{1, 1, 0, 0}], m[{1, 0, 0, 0}]);
			printf("01|%d  %d  %d  %d\n", m[{0, 0, 0, 1}], m[{0, 1, 0, 1}], m[{1, 1, 0, 1}], m[{1, 0, 0, 1}]);
			printf("11|%d  %d  %d  %d\n", m[{0, 0, 1, 1}], m[{0, 1, 1, 1}], m[{1, 1, 1, 1}], m[{1, 0, 1, 1}]);
			printf("10|%d  %d  %d  %d\n", m[{0, 0, 1, 0}], m[{0, 1, 1, 0}], m[{1, 1, 1, 0}], m[{1, 0, 1, 0}]);
		}
		if (f1 && !f2) printf("Tautologia\n");
		else if (!f1 && f2) printf("Contradicao\n");
		else printf("Contingencia\n");
		t++;
	}
	return 0;
}