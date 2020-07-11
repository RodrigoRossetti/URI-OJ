#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void rain(int i, int j, vector<vector<bool>> &visitado, vector<vector<char>> &v, int &n) {
	visitado[i][j] = 1;
	v[i][j] = 'o';
	if (i+1 < n && v[i+1][j] == '.' && !visitado[i+1][j]) rain(i+1, j, visitado, v, n);
	if (i+1 < n && v[i+1][j] == '#') {
		if (v[i][j-1] == '.' && !visitado[i][j-1]) rain(i, j-1, visitado, v, n);
		if (v[i][j+1] == '.' && !visitado[i][j+1]) rain(i, j+1, visitado, v, n);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> v[i][j];
	vector<vector<bool>> visitado(n, vector<bool>(m, 0));
	for (int i = 0; i < m; i++)
		if (v[0][i] == 'o')
			rain(0, i, visitado, v, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << v[i][j];
		cout << endl;
	}
	return 0;
}