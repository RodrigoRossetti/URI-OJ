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
		vector<int> dist(v, 100000);
		vector<bool> vis(v, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			vis[u] = 1;
			if (vis[fim]) break;
			for (const auto& w : adj[u]) {
				if (!vis[w.first] && dist[u] + w.second < dist[w.first]) {
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
	int x, n, v, t, tempo, chave;
	string o, d;
	while (cin >> x >> n >> v && (x || n || v)) {
		chave = 0;
		tempo = (x <= 30 ? 17*60+30 : 17*60+50);
		grafo g(v);
		map<string, int> m;
		while (n--) {
			cin >> o >> d >> t;
			if (!m.count(o)) m[o] = chave++;
			if (!m.count(d)) m[d] = chave++;
			g.aresta(m[o], m[d], t);
		}
		tempo += g.dijkstra(m["varzea"], m["alto"]);
		cout << tempo/60 << ":" << setfill('0') << setw(2) << tempo%60 << endl;
		if (tempo <= 18*60) cout << "Nao ira se atrasar\n";
		else cout << "Ira se atrasar\n";
	}
	return 0;
}