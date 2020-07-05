#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, total;
	cin >> n;
	while (n--) {
		cin >> m;
		vector<char> v(m), sorted(m);
		for (int i = 0; i < m; i++) cin >> v[i];
		sorted = v;
		sort(sorted.begin(), sorted.end());
		total = 0;
		for (int i = 0; i < m; i++) {
			if (sorted[i] != v[i]) total++;
			if (total > 2) break;
		}
		cout << (total == 2 ? "There are the chance.\n" : "There aren't the chance.\n");
	}
	return 0;
}