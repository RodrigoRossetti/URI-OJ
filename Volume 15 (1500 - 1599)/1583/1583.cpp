#include <bits/stdc++.h>
using namespace std;

void backtrack(int i, int j, int n, int m, vector<vector<char>> &v, vector<vector<bool>> &visitado) {
	if (visitado[i][j]) return;
	visitado[i][j] = 1;
	if (v[i][j] != 'X') {
		v[i][j] = 'T';
		if (i-1 >= 0) backtrack(i-1, j, n, m, v, visitado);
		if (j-1 >= 0) backtrack(i, j-1, n, m, v, visitado);
		if (i+1 < n) backtrack(i+1, j, n, m, v, visitado);
		if (j+1 < m) backtrack(i, j+1, n, m, v, visitado);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	while (cin >> n >> m && (n || m)) {
		vector<vector<char>> v(n, vector<char>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> v[i][j];
		vector<vector<bool>> visitado(n, vector<bool>(m, 0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (v[i][j] == 'T' && !visitado[i][j]) {
					backtrack(i, j, n, m, v, visitado);
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cout << v[i][j];
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}