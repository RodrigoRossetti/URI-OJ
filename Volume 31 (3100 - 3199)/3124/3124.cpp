#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class grafo {
	int v;
	vector<pair<int, long double>> *adj;

public:

	grafo(int v) {
		this->v = v;
		adj = new vector<pair<int, long double>>[v];
	}

	void aresta(int u, int w, long double k) {
		adj[u].push_back(make_pair(w, k));
		adj[w].push_back(make_pair(u, k));
	}

	void imprime() {
		for (int i = 0; i < v; i++) {
			cout << '[' << i << "] ";
			for (const auto& w : adj[i]) cout << "-> " << w.first << "(" << w.second << ") ";
			cout << endl;
		}
	}

	vector<long double> prim(int raiz) { 
		priority_queue<pair<long double, int>, vector<pair<long double, int>>,
						greater<pair<long double, int>>> pq;
		vector<long double> dist(v, LDBL_MAX);
		vector<bool> visitado(v, 0);
		pq.push(make_pair(0, raiz));
		dist[raiz] = 0;

		while (!pq.empty()) { 
			int u = pq.top().second; 
			pq.pop(); 
			if(visitado[u]) continue;
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

long double distancia(pair<int, int> &a, pair<int, int> &b) {
	return hypotl(a.first-b.first*1.L, a.second-b.second*1.L);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(6);
	int p, x, y;
	cin >> p;
	vector<pair<int, int>> v(p);
	grafo g(p);
	for (int i = 0; i < p; i++) cin >> v[i].first >> v[i].second;
	for (int i = 0; i < p; i++)
		for (int j = i+1; j < p; j++)
			g.aresta(i, j, distancia(v[i], v[j]));
	vector<long double> k = g.prim(0);
	cout << (long double)accumulate(k.begin(), k.end(), 0.0L) << endl;
	return 0;
}