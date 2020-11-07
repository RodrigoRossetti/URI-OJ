#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF INT_MAX

struct grafo {

	int v;
	vector<vector<pair<int, int>>> adj;

	grafo(int v) {
		this->v = v;
		adj = vector<vector<pair<int, int>>>(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
		adj[w].push_back({u, k});
	}

	int dijkstra(int raiz = 0) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(v, INF);
		vector<bool> visitado(v, 0);
		pq.push(make_pair(0, raiz));
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = 1;
			if (visitado[v-1]) break;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] != INF && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push(make_pair(dist[w.first], w.first));
				}
			}
		}
		return dist[v-1];
	}
	
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, v, a, b, k;
	cin >> c >> v;
	grafo aux(c), g(c);
	while (v--) {
		cin >> a >> b >> k;
		aux.aresta(a-1, b-1, k);
	}
	for (int i = 0; i < c; i++)
		for (auto& u : aux.adj[i])
			for (auto& w : aux.adj[u.first])
				g.aresta(i, w.first, u.second + w.second);
	int r = g.dijkstra();
	cout << (r == INF ? -1 : r) << endl;
	return 0;
}