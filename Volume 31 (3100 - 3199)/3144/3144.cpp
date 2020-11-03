#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF INT_MAX

class grafo {
	int v;
	vector<pair<int, int>> *adj;

public:

	grafo(int v) {
		this->v = v;
		adj = new vector<pair<int, int>>[v];
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back(make_pair(w, k));
		adj[w].push_back(make_pair(u, k));
	}

	vector<int> prim(int raiz) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(v, INF);
		vector<bool> visitado(v, 0);
		pq.push(make_pair(0, raiz));
		dist[raiz] = 0;

		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			if (visitado[u] == 1) continue;
			visitado[u] = 1;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[w.first] > w.second) {
					dist[w.first] = w.second;
					pq.push(make_pair(w.second, w.first));
				}
			}
		}
		return dist;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, o, u, v, d;	
	cin >> n >> m >> o;
	grafo g(n);
	while (m--) {
		cin >> u >> v >> d;
		g.aresta(u-1, v-1, d);
	}
	vector<int> arr = g.prim(0);
	cout << 2*accumulate(arr.begin()+1, arr.end(), 0) << endl;
	return 0;
}