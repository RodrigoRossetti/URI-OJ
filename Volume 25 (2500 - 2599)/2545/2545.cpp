#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class grafo {
	int V;
	vector<vector<pair<int, int>>> adj;
	vector<int> in;
	vector<int> in2;

	void dfsR(int u, vector<bool> &visitado, int &maior, int atual = 1) {
		visitado[u] = 1;
		maior = max(maior, atual);
		for (auto &v : adj[u])
			if (!visitado[v.first])
				dfsR(v.first, visitado, maior, atual+1);
	}

public:

	grafo(int V) {
		this->V = V;
		adj = vector<vector<pair<int, int>>>(V);
		in = vector<int>(V);
		in2 = vector<int>(V);
	}

	void aresta(int u, int v, int w) {
		adj[u].push_back(make_pair(v, w));
		in[v]++;
		in2[v]++;
	}

	bool ciclo() {
		queue<int> q;
		for (int i = 0; i < V; i++)
			if (in[i] == 0)
				q.push(i);
		int depth = 0;
		while (!q.empty()) {
			int u = q.front();
			q.pop();
			depth++;
			for (auto &v : adj[u])
				if (--in[v.first] == 0)
					q.push(v.first);
		}
		if (depth != V) return 1;
		return 0;
	}

	int dfs() {
		int maior = 0;
		for (int i = 0; i < V; i++) {
			if (in2[i] == 0) {
				vector<bool> visitado(V, 0);
				int atual = 0;
				dfsR(i, visitado, atual);
				maior = max(maior, atual);
			}
		}
		return maior;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	while (cin >> n) {
		grafo g(n);
		for (int i = 0; i < n; i++) {
			cin >> m;
			while (m--) {
				cin >> k;
				g.aresta(i, k-1, 1);
			}
		}
		if (g.ciclo()) cout << -1 << endl;
		else cout << g.dfs() << endl;
	}
	return 0;
}