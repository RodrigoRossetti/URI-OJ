#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 100000

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x ,y, h, q;
	while (cin >> n >> m && (n || m)) {
		vector<vector<int>> dist(n, vector<int>(n, INF));
		while (m--) {
			cin >> x >> y >> h;
			x--, y--;
			if (dist[y][x] != INF) dist[x][y] = dist[y][x] = 0;
			else dist[x][y] = h;
		}
		for (int k = 0; k < n; k++)
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		cin >> q;
		while (q--) {
			cin >> x >> y;
			int d = dist[x-1][y-1];
			if (d == INF) cout << "Nao e possivel entregar a carta\n";
			else cout << d << endl;
		}
		cout << endl;
	}
	return 0;
}