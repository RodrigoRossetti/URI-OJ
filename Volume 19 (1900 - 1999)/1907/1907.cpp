#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &v, vector<vector<bool>> &visitado, int i, int j, int n, int m) {
	visitado[i][j] = 1;
	if (j+1 < m && v[i][j+1] == '.' && !visitado[i][j+1]) dfs(v, visitado, i, j+1, n, m);
	if (i+1 < n && v[i+1][j] == '.' && !visitado[i+1][j]) dfs(v, visitado, i+1, j, n, m);
	if (j-1 >= 0 && v[i][j-1] == '.' && !visitado[i][j-1]) dfs(v, visitado, i, j-1, n, m);
	if (i-1 >= 0 && v[i-1][j] == '.' && !visitado[i-1][j]) dfs(v, visitado, i-1, j, n, m);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, total = 0;
	cin >> n >> m;
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> v[i][j];
	vector<vector<bool>> visitado(n, vector<bool>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == '.' && !visitado[i][j]) {
				dfs(v, visitado, i, j, n, m);
				total++;
			}
		}
	}
	cout << total << endl;
	return 0;
}