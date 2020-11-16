#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF INT_MAX

struct grafo {

	int v;
	vector<vector<pair<int, int>>> adj;
	vector<int> age;

	grafo(int v) {
		this->v = v;
		adj = vector<vector<pair<int, int>>>(v);
		age = vector<int>(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
		//adj[w].push_back({u, k});
	}

	void dfsR(int raiz, vector<bool> &visitado, int& menor) {
		visitado[raiz] = 1; 
		for (const auto& w : adj[raiz]) {
			if (!visitado[w.first]) {
				menor = min(menor, age[w.first]);
				dfsR(w.first, visitado, menor);
			}
		}
	}
	
	int dfs(int raiz) {
		vector<bool> visitado(v, 0);
		int menor = INF;
		dfsR(raiz, visitado, menor);
		return menor;
	}

	void swap(int a, int b) {
		for (int i = 0; i < v; i++) {
			for (auto& w : adj[i]) {
				if (w.first == a) w.first = b;
				else if (w.first == b) w.first = a;
			}
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, i, a, b, e;
	char c;
	while (cin >> n >> m >> i) {
		grafo g(n);
		for (int i = 0; i < n; i++) {
			cin >> g.age[i];
		}
		while (m--) {
			cin >> a >> b;
			a--, b--;
			g.aresta(b, a, 1);
		}
		while (i--) {
			cin >> c;
			if (c == 'T') {
				cin >> a >> b;
				a--, b--;
				g.swap(a, b);
				swap(g.adj[a], g.adj[b]);
			}
			else if (c == 'P') {
				cin >> e;
				e--;
				int r = g.dfs(e);
				if (r == INF) cout << "*\n";
				else cout << r << endl;
			}
		}
	}
	return 0;
}