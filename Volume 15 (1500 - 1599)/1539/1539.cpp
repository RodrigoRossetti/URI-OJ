#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct grafo {

	int v;
	vector<vector<pair<int, double>>> adj;

	grafo(int v) {
		this->v = v;
		adj = vector<vector<pair<int, double>>>(v);
	}

	void aresta(int u, int w, double k) {
		adj[u].push_back({w, k});
		//adj[w].push_back({u, k});
	}

	void imprime() {
		for (int i = 0; i < v; i++) {
			cout << "[" << i << "] ";
			for (auto& w : adj[i]) {
				cout << "-> " << w.first << "(" << w.second << ") ";
			}
			cout << endl;
		}
	}

	double dijkstra(int raiz, int fim) {
		priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;
		vector<double> dist(v, DBL_MAX);
		vector<bool> visitado(v, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = 1;
			if (visitado[fim]) break;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] != DBL_MAX && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push({dist[w.first], w.first});
				}
			}
		}
		return dist[fim];
	}

};

double distancia(int x, int y, int x2, int y2) {
	return (double)sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, c, a, b, x, x2, y, y2, r;
	while (cin >> n && n) {
		vector<pair<int, pair<int, int>>> v(n);
		grafo g(n);
		for (int i = 0; i < n; i++) {
			cin >> x >> y >> r;
			v[i] = {r, {x, y}};
		}
		for (int i = 0; i < n; i++) {
			x = v[i].second.first, y = v[i].second.second, r = v[i].first;
			for (int j = 0; j < n; j++) {
				if (i != j) {
					x2 = v[j].second.first, y2 = v[j].second.second;
					double d = distancia(x, y, x2, y2);
					if (d <= r) g.aresta(i, j, d);
				}
			}
		}
		cin >> c;
		while (c--) {
			cin >> a >> b;
			double ans = g.dijkstra(a-1, b-1);
			if (ans == DBL_MAX) cout << -1 << endl;
			else cout << trunc(ans) << endl;
		}
	}
	return 0;
}