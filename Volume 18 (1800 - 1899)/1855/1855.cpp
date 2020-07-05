#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> mapa = {{'>', 0}, {'v', 1}, {'<', 2}, {'^', 3}};

bool dfs(vector<vector<char>> &v, vector<vector<bool>> &visitado, int i, int j, int mov, int n, int m) {
	if (v[i][j] == '*') return 1;
	if (visitado[i][j]) return 0;
	visitado[i][j] = 1;
	if (v[i][j] == '.') {
		if (mov == 0) {
			if (j+1 >= m) return 0;
			return dfs(v, visitado, i, j+1, 0, n, m);
		}
		else if (mov == 1) {
			if (i+1 >= n) return 0;
			return dfs(v, visitado, i+1, j, 1, n, m);
		}
		else if (mov == 2) {
			if (j-1 < 0) return 0;
			return dfs(v, visitado, i, j-1, 2, n, m);
		}
		else if (mov == 3) {
			if (i-1 < 0) return 0;
			return dfs(v, visitado, i-1, j, 3, n, m);
		}
	}
	else if (v[i][j] == '>') {
		if (j+1 >= m) return 0;
		return dfs(v, visitado, i, j+1, 0, n, m);
	}
	else if (v[i][j] == 'v') {
		if (i+1 >= n) return 0;
		return dfs(v, visitado, i+1, j, 1, n, m);
	}
	else if (v[i][j] == '<') {
		if (j-1 < 0) return 0;
		return dfs(v, visitado, i, j-1, 2, n, m);
	}
	else if (v[i][j] == '^') {
		if (i-1 < 0) return 0;
		return dfs(v, visitado, i-1, j, 3, n, m);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	cin >> m >> n;
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> v[i][j];
	vector<vector<bool>> visitado(n, vector<bool>(m, 0));
	cout << (dfs(v, visitado, 0, 0, mapa[v[0][0]], n, m) ? "*\n" : "!\n");
	return 0;
}