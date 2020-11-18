#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pii pair<int, int>
#define f first
#define s second

int m, n, k;
int dist[1001][1001];

bool comp(pair<int, int>& a, pair<int, int>& b) {
	return (a.first < b.first || (a.first == b.first && a.second < b.second));
}

void test(int x, int y, int d, int ind, vector<vector<bool>>& visitado,
			queue<pair<pii, pii>>& q) {
	if (x >= 0 && y >= 0 && x < n && y < m && !visitado[x][y]) {
		visitado[x][y] = 1;
		dist[x][y] = ind;
		q.push({{d, ind}, {x, y}});
	}
}

void bfs(vector<pair<int, int>>& sedes) {
	int x, y, d, ind;
	sort(sedes.begin(), sedes.end(), comp);
	vector<vector<bool>> visitado(m, vector<bool>(n, 0));
	queue<pair<pii, pii>> q;
	for (int i = 0; i < k; i++) {
		x = sedes[i].f, y = sedes[i].s;
		visitado[x][y] = 1;
		dist[x][y] = i;
		q.push({{0, i}, {x, y}});
	}
	while (!q.empty()) {
		d = q.front().f.f;
		ind = q.front().f.s;
		x = q.front().s.f;
		y = q.front().s.s;
		q.pop();
		test(x-1, y, d+1, ind, visitado, q);
		test(x+1, y, d+1, ind, visitado, q);
		test(x, y-1, d+1, ind, visitado, q);
		test(x, y+1, d+1, ind, visitado, q);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, x, y, caso = 1;
	while (cin >> m >> n && (m || n)) {
		cin >> k;
		vector<pair<int, int>> sedes(k);
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			x--, y--;
			sedes[i] = {x, y};
		}
		bfs(sedes);
		if (caso > 1) cout << endl;
		cout << "Instancia " << caso++ << endl;
		cin >> l;
		while (l--) {
			cin >> x >> y;
			x--, y--;
			cout << sedes[dist[x][y]].first+1 << " " << sedes[dist[x][y]].second+1 << endl;
		}
	}
	return 0;
}