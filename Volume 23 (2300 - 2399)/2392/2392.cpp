#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, p, d, k;
	cin >> n >> m;
	vector<bool> v(n, 0);
	while (m--) {
		cin >> p >> d;
		k = --p;
		while (p >= 0) v[p] = 1, p -= d;
		while (k < n) v[k] = 1, k += d;
	}
	for (int i = 0; i < n; i++) cout << v[i] << endl;
	return 0;
}