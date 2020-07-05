#include <bits/stdc++.h>
using namespace std;

pair<int, int> backtracking(int x, int y, int l, int c, vector<vector<bool>> v, vector<vector<bool>> &visitados) {
	visitados[x][y] = 1;
	if (x-1 != -1 && v[x-1][y] == 1 && !visitados[x-1][y]) return backtracking(x-1, y, l, c, v, visitados);
	if (y-1 != -1 && v[x][y-1] == 1 && !visitados[x][y-1]) return backtracking(x, y-1, l, c, v, visitados);
	if (x+1 != l && v[x+1][y] == 1 && !visitados[x+1][y]) return backtracking(x+1, y, l, c, v, visitados);
	if (y+1 != c && v[x][y+1] == 1 && !visitados[x][y+1]) return backtracking(x, y+1, l, c, v, visitados);
	return make_pair(x, y);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, c, a, b, x;
	cin >> l >> c >> a >> b;
	vector<vector<bool>> v;
	vector<vector<bool>> visitados(l, vector<bool>(c, false));
	for (int i = 0; i < l; i++) {
		vector<bool> aux;
		for (int j = 0; j < c; j++) {
			cin >> x;
			aux.push_back(x);
		}
		v.push_back(aux);
	}
	pair<int, int> p = backtracking(a-1, b-1, l, c, v, visitados);
	cout << p.first+1 << " " << p.second+1 << endl;
	return 0;
}