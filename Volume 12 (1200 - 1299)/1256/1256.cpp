#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, m, c, k;
	cin >> t;
	while (t--) {
		cin >> m >> c;
		vector<vector<int>> v(m+1);
		for (int i = 0 ; i < c; i++) {
			cin >> k;
			v[k%m].push_back(k);
		}
		for (int i = 0; i < m; i++) {
			cout << i << " -> ";
			for (int j = 0; j < v[i].size(); j++)
				cout << v[i][j] << " -> ";
			cout << "\\\n";
		}
		if (t) cout << endl;
	}
	return 0;
}