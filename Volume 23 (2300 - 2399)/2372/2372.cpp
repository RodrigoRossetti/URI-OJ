#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, u, v, w;
	cin >> n >> m;
	vector<vector<int>> adj(n, vector<int>(n, 10000));
	while (m--) {
		cin >> u >> v >> w;
		adj[u][v] = min(adj[u][v], w);
		adj[v][u] = min(adj[v][u], w);
	}
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
	int menor = INT_MAX;
	for (int i = 0; i < n; i++)
		menor = min(menor, *max_element(adj[i].begin(), adj[i].end()));
	cout << menor << endl;
	return 0;
}