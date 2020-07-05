#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, n, p, q, total;
	char t;
	while (cin >> c >> n) {
		total = 0;
		unordered_map<int, int> mapa;
		while (n--) {
			cin >> t;
			if (t == 'C') {
				cin >> p >> q;
				if (q <= c) {
					mapa[p] = q;
					c -= q;
					total += 10;
				}
			}
			else if (t == 'S') {
				cin >> p;
				c += mapa[p];
				mapa.erase(p);
			}
		}
		cout << total << endl;
	}
	return 0;
}