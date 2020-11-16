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
		adj[w].push_back({u, k});
	}

	void pontesDfs(grafo& aux, int u, vector<bool>& visitado, vector<int>& disc,
					vector<int>& low, vector<int>& pai, int& total) {
		static int t = 0;
		visitado[u] = 1;
		disc[u] = low[u] = ++t;
		for (auto& w : adj[u]) {
			if (!visitado[w.first]) {
				pai[w.first] = u;
				pontesDfs(aux, w.first, visitado, disc, low, pai, total);
				low[u]  = min(low[u], low[w.first]);
				if (low[w.first] > disc[u]) {
					aux.aresta(u, w.first, 1);
					total++;
				}
			} 
			else if (w.first != pai[u]) 
				low[u]  = min(low[u], disc[w.first]); 
		} 
	} 
	
	int pontes(grafo& aux) {
		vector<bool> visitado(v, 0);
		vector<int> pai(v, -1);
		vector<int> low(v);
		vector<int> disc(v);
		int total = 0;
		for (int i = 0; i < v; i++)
			if (!visitado[i])
				pontesDfs(aux, i, visitado, disc, low, pai, total);
		return total;
	}

	void dfsR(int raiz, vector<bool> &visitado, int& fim, bool& flag) {
		visitado[raiz] = 1; 
		if (raiz == fim) {
			flag = 1;
			return;
		}
		for (const auto& w : adj[raiz])
			if (!visitado[w.first])
				dfsR(w.first, visitado, fim, flag);
	}
	
	bool dfs(int raiz, int fim) {
		vector<bool> visitado(v, 0);
		bool flag = 0;
		dfsR(raiz, visitado, fim, flag);
		return flag;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, c, q, a, b;
	while (cin >> r >> c >> q && (q || c || q)) {
		grafo g(r);
		grafo aux(r);
		while (c--) {
			cin >> a >> b;
			g.aresta(a-1, b-1, 1);
		}
		g.pontes(aux);
		while (q--) {
			cin >> a >> b;
			if (aux.dfs(a-1, b-1)) cout << "Y\n";
			else cout << "N\n";
		}
		cout << "-\n";
	}
	return 0;
}