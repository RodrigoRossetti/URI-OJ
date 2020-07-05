#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, u, r, i, p1, p2, p3, maior;
	while (cin >> n && n) {
		p1 = p2 = p3 = 0;
		while (n--) {
			cin >> u >> r >> i;
			maior = max({u, r, i});
			if (__builtin_popcount(u) == 1) maior == u ? p1 += 2 : p1++;
			if (__builtin_popcount(r) == 1) maior == r ? p2 += 2 : p2++;
			if (__builtin_popcount(i) == 1) maior == i ? p3 += 2 : p3++;
		}
		if (p1 > p2 && p1 > p3) cout << "Uilton\n";
		else if (p2 > p1 && p2 > p3) cout << "Rita\n";
		else if (p3 > p1 && p3 > p2) cout << "Ingred\n";
		else cout << "URI\n";
	}
	return 0;
}