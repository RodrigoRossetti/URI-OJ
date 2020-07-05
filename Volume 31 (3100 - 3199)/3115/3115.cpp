#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class grafo {
	int V;
	vector<vector<pair<int, int>>> adj;

	void dfs(int raiz, vector<bool> &visitado, vector<int> &out, int menor = INT_MAX) {
		visitado[raiz] = 1;
		out[raiz] = menor;
		for (auto v : adj[raiz]) {
			if (!visitado[v.first]) {
				dfs(v.first, visitado, out, min(menor, v.second));
			}
		}
	}

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

	void dfs(vector<int> &out) {
		vector<bool> visitado(out.size(), 0);
		dfs(out.size()-1, visitado, out);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, v, u, c;
	cin >> n;
	vector<int> out(n);
	grafo g(n);
	for (int i = 1; i < n; i++) {
		cin >> v >> u >> c;
		g.aresta(v-1, u-1, c);
	}
	g.dfs(out);
	for (int i = 0; i < n-1; i++) {
		if (i) cout << " ";
		cout << out[i];
	}
	cout << endl;
	return 0;
}