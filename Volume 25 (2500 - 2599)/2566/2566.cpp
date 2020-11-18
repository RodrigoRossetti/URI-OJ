#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct grafo {

	int v;
	vector<vector<pair<int, int>>> adj;

	grafo(int v) {
		this->v = v;
		adj = vector<vector<pair<int, int>>>(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
		//adj[w].push_back({u, k});
	}

	int dijkstra(int raiz, int fim) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(v, INT_MAX);
		vector<bool> visitado(v, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = 1;
			if (visitado[fim]) break;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push({dist[w.first], w.first});
				}
			}
		}
		return dist[fim];
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, t, r;
	while (cin >> n >> m) {
		grafo g1(n), g2(n);
		while (m--) {
			cin >> a >> b >> t >> r;
			if (t) g1.aresta(a-1, b-1, r);
			else g2.aresta(a-1, b-1, r);
		}
		cout << min(g1.dijkstra(0, n-1), g2.dijkstra(0, n-1)) << endl;
	}
	return 0;
}