#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, v, k;
	while (cin >> n >> v && (n || v)) {
		bool flag = 0;
		k = v;
		while (k && !flag) {
			int atual = 0;
			while (v && !flag) {
				for (int i = 0; i < v; i++) {
					atual += v;
					if (atual == n) {
						flag = 1;
						break;
					}
				}
				v--;
			}
			v = --k;
		}
		cout << (flag ? "possivel\n" : "impossivel\n");
	}
	return 0;
}