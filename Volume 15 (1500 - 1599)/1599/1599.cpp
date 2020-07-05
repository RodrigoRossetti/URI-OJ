#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b) {
	return (a.first < b.first || (a.first == b.first && a.second < b.second));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	while (cin >> n >> m) {
		vector<vector<int>> v(n, vector<int>(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> v[i][j];
			}
		}
		vector<pair<int, int>> r;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				k = v[i][j];
				if (i != 0 && j != 0 && v[i-1][j-1] >= k) continue;
				if (i != n-1 && j != m-1 && v[i+1][j+1] >= k) continue;
				if (i != 0 && j != m-1 && v[i-1][j+1] >= k) continue;
				if (i != n-1 && j != 0 && v[i+1][j-1] >= k) continue;
				if (i != 0 && v[i-1][j] >= k) continue;
				if (j != 0 && v[i][j-1] >= k) continue;
				if (i != n-1 && v[i+1][j] >= k) continue;
				if (j != m-1 && v[i][j+1] >= k) continue;
				r.push_back({i+1, j+1});
			}
		}
		sort(r.begin(), r.end());
		if (r.empty()) cout << "-1\n\n";
		else {
			for (int i = 0; i < r.size(); i++)
				cout << r[i].first << " " << r[i].second << endl;
			cout << endl;
		}
	}
	return 0;
}