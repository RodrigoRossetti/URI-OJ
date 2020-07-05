#include <bits/stdc++.h>
using namespace std;

class grafo {
	int V;
	vector<vector<pair<int, int>>> adj;

public:

	grafo(int V) {
		this->V = V;
		adj = vector<vector<pair<int, int>>>(V);
	}

	void aresta(int u, int v, int w) {
		adj[u].push_back(make_pair(v, w));
		adj[v].push_back(make_pair(u, w));
	}

	void imprime() {
		for (int u = 0; u < V; u++) {
			cout << u << " ";
			for (auto &v : adj[u]) cout << "-> " << v.first << " (" << v.second << ") ";
			cout << '\n';
		}
	}

	vector<int> dijkstra(int raiz) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(V, INT_MAX);
		vector<bool> visitado(V, 0);
		pq.push(make_pair(0, raiz));
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = 1;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push(make_pair(dist[w.first], w.first));
				}
			}
		}
		return dist;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, s, u, v, w;
	cin >> n >> m;
	grafo g(n);
	while (m--) {
		cin >> u >> v >> w;
		g.aresta(u-1, v-1, w);
	}
	cin >> s;
	int maior = INT_MIN, menor = INT_MAX;
	vector<int> dist = g.dijkstra(s-1);
	for (int i = 0; i < n; i++)
		if (i != s-1) maior = max(maior, dist[i]), menor = min(menor, dist[i]);
	cout << maior-menor << endl;
	return 0;
}