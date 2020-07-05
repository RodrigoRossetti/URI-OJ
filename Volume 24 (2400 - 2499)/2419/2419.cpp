#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	char c;
	cin >> m >> n;
	vector<vector<bool>> v(m, vector<bool>(n));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c;
			v[i][j] = (c == '.' ? 0 : 1);
		}
	}
	int total = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][j] == 1) {
				if (i == 0 || j == 0 || i == m-1 || j == n-1) total++;
				else if (i != 0 && v[i-1][j] == 0) total++;
				else if (i != m-1 && v[i+1][j] == 0) total++;
				else if (j != 0 && v[i][j-1] == 0) total++;
				else if (j != n-1 && v[i][j+1] == 0) total++;
			}
		}
	}
	cout << total << endl;
	return 0;
}