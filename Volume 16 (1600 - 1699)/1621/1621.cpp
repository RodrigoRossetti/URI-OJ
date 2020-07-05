#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int n, m;
pair<int, int> no;
vector<vector<char>> v;

int bfs(int i, int j) {
	vector<vector<bool>> visitado(n, vector<bool>(m, 0));
	queue<pair<int, int>> q;
	pair<int, int> u;
	int x, y;
	q.push({i, j});
	q.push({-1, -1});
	int total = 0;
	while (q.size() > 1) {
		u = q.front();
		x = u.first, y = u.second;
		q.pop();
		if (x == -1) {
			q.push({-1, -1});
			total++;
			continue;
		}
		if (visitado[x][y]) continue;
		no = u;
		visitado[x][y] = 1;
		if (x != 0 && v[x-1][y] == '.') q.push({x-1, y});
		if (x != n-1 && v[x+1][y] == '.') q.push({x+1, y});
		if (y != 0 && v[x][y-1] == '.') q.push({x, y-1});
		if (y != m-1 && v[x][y+1] == '.') q.push({x, y+1});
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> n >> m && (n || m)) {
		int x = -1, y;
		v = vector<vector<char>>(n, vector<char>(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> v[i][j];
				if (v[i][j] == '.') {
					if (x == -1) x = i, y = j;
				}
			}
		}
		bfs(x, y);
		cout << bfs(no.first, no.second)-1 << endl;
	}
	return 0;
}