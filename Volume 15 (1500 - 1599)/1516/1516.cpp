#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, p1, p2;
	while (cin >> n >> m && (n || m)) {
		vector<vector<char>> v(n, vector<char>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> v[i][j];
		cin >> a >> b;
		p1 = a/n, p2 = b/m;
		for (int i = 0; i < n; i++) {
			string aux = "";
			for (int j = 0; j < m; j++)
				for (int k = 0; k < p2; k++) aux += v[i][j];
			for (int k = 0; k < p1; k++) cout << aux << endl;
		}
		cout << endl;
	}
	return 0;
}