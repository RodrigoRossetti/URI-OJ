#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF LLONG_MAX

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
	}

	vector<long long> dijkstra(int raiz) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<long long> dist(v, INF);
		vector<bool> visitado(v, false);
		pq.push(make_pair(0, raiz));
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = true;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] != INF && dist[u] + w.second < dist[w.first]) {
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
	int f, c, t, a, b, d;
	long long total = 0;
	cin >> f;
	while (f--) {
		cin >> c >> t;
		grafo g(c+1);
		while (t--) {
			cin >> a >> b >> d;
			g.aresta(a, b, d);
		}
		vector<long long> dist = g.dijkstra(1);
		total += dist[c];
	}
	cout << total << endl;
	return 0;
}