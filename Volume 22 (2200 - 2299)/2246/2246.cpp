#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void dfs(int i, int j, int &h, int &l, vector<vector<int>> &v, vector<vector<bool>> &visitado, int &total) {
	total++;
	visitado[i][j] = 1;
	if (i-1 >= 0 && !visitado[i-1][j] && v[i][j] == v[i-1][j]) dfs(i-1, j, h, l, v, visitado, total);
	if (j-1 >= 0 && !visitado[i][j-1] && v[i][j] == v[i][j-1]) dfs(i, j-1, h, l, v, visitado, total);
	if (i+1 < h && !visitado[i+1][j] && v[i][j] == v[i+1][j]) dfs(i+1, j, h, l, v, visitado, total);
	if (j+1 < l && !visitado[i][j+1] && v[i][j] == v[i][j+1]) dfs(i, j+1, h, l, v, visitado, total);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int h, l;
	cin >> h >> l;
	vector<vector<int>> v(h, vector<int>(l));
	for (int i = 0; i < h; i++)
		for (int j = 0; j < l; j++)
			cin >> v[i][j];
	int menor = INT_MAX;
	vector<vector<bool>> visitado(h, vector<bool>(l, 0));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			if (!visitado[i][j]) {
				int total = 0;
				dfs(i, j, h, l, v, visitado, total);
				menor = min(menor, total);
			}
		}
	}
	cout << menor << endl;	
	return 0;
}