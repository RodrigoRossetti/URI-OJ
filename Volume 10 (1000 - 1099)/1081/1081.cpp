#include <bits/stdc++.h>
using namespace std;

class grafo {
	int V;
	vector<vector<pair<int, int>>> adj;
	vector<vector<bool>> arr;

	void dfsR(int raiz, vector<bool> &visitado, int profundidade, bool &flag) {
		visitado[raiz] = 1;
		for (auto &u : adj[raiz]) {
			if (flag) cout << endl;
			flag = 0;
			if (!visitado[u.first]) {
				arr[raiz][u.first] = 1;
				for (int i = 0; i <= profundidade; i++) cout << "  ";
				cout << raiz << '-' << u.first << " pathR(G," << u.first << ")\n";
				dfsR(u.first, visitado, profundidade+1, flag);
			}
			else if (!arr[raiz][u.first]){
				for (int i = 0; i <= profundidade; i++) cout << "  ";
				cout << raiz << '-' << u.first << endl;
			}
		}
	}

public:

	grafo(int V) {
		this->V = V;
		adj = vector<vector<pair<int, int>>>(V);
		arr = vector<vector<bool>>(V, vector<bool>(V, 0));
	}

	void aresta(int u, int v, int w) {
		adj[u].push_back(make_pair(v, w));
	}

	void dfs() {
		for (int i = 0; i < V; i++) sort(adj[i].begin(), adj[i].end());
		vector<bool> visitado(V, 0);
		for (int i = 0; i < V; i++) {
			if (!visitado[i]) {
				bool flag = 1;
				dfsR(i, visitado, 0, flag);
			}
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, v, e, a, b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Caso " << i << ":";
		cin >> v >> e;
		grafo g(v);
		while (e--) {
			cin >> a >> b;
			g.aresta(a, b, 1);
		}
		g.dfs();
		cout << endl;
	}
	return 0;
}