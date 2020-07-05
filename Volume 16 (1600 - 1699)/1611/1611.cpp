#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, c, m;
	cin >> t;
	while (t--) {
		cin >> n >> c >> m;
		vector<int> v(m);
		for (int i = 0; i < m; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());
		int total = 0;
		for (int i = 0; i < m; i += c) total += 2*v[i];
		cout << total << endl;
	}
	return 0;
}