#include <bits/stdc++.h>
using namespace std;

int backD(int i, int j, int n, vector<vector<int>> &v) {
	if (v[i][j] != 0) return v[i][j];
	if (j == n-1) return 0;
	return backD(i, j+1, n, v);
}

int backE(int i, int j, vector<vector<int>> &v) {
	if (v[i][j] != 0) return v[i][j];
	if (j == 0) return 0;
	return backE(i, j-1, v);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, c, p;
	while (cin >> l >> c >> p && (l || c || p)) {
		vector<vector<int>> v(l, vector<int>(c));
		for (int i = 0; i < l; i++)
			for (int j = 0; j < c; j++)
				cin >> v[i][j];
		bool flag = 1;
		p--;
		for (int i = 0; i < l && flag; i++) {
			int dir = backD(i, p, c, v), esq = backE(i, p, v);
			p += esq-dir;
			if (p < 0 || p >= c || v[i][p] != 0) {
				cout << "BOOM " << i+1 << " " << p+1 << endl;
				flag = 0;
				break;
			}
		}
		if (flag) cout << "OUT " << p+1 << endl;
	}
	return 0;
}