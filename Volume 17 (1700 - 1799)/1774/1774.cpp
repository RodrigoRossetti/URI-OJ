#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 100000

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

	int prim(int raiz = 0) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(v, INF);
		vector<bool> visitado(v, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			if (visitado[u]) continue;
			visitado[u] = 1;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[w.first] > w.second) {
					dist[w.first] = w.second;
					pq.push({w.second, w.first});
				}
			}
		}
		return accumulate(dist.begin(), dist.end(), 0);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, c, v, w, p;
	cin >> r >> c;
	grafo g(r);
	while (c--) {
		cin >> v >> w >> p;
		g.aresta(v-1, w-1, p);
	}
	cout << g.prim() << endl;
	return 0;
}
