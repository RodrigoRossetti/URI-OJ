#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, pos = 0;
	cin >> n >> m;
	unordered_map<int, int> mapa;
	for (int i = 0; i < n; i++) {
		cin >> k;
		mapa[k] = i;
	}
	long long total = 0;
	while (m--) {
		cin >> k;
		total += abs(pos-mapa[k]);
		pos = mapa[k];
	}
	cout << total << endl;
	return 0;
}