#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k, x, y;
	vector<unsigned long long> b;
	cin >> t;
	while (t--) {
		b.clear();
		cin >> n;
		for (int i = 0; i < n; i++) {
			unsigned long long aux = 0;
			cin >> k;
			while (k--) {
				cin >> x;
				aux |= 1ULL << x-1;
			}
			b.push_back(aux);
		}
		cin >> n;
		while (n--) {
			cin >> k >> x >> y;
			if (k == 1) cout << __builtin_popcountll(b[x-1] & b[y-1]) << endl;
			else if (k == 2) cout << __builtin_popcountll(b[x-1] | b[y-1]) << endl;
		}
	}
	return 0;
}