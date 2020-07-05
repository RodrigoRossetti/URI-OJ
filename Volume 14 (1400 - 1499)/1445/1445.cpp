#include <bits/stdc++.h>
using namespace std;

class grafo {
	int V;
	vector<vector<pair<int, int>>> adj;

public:

	grafo(int V) {
		this->V = V;
		adj = vector<vector<pair<int, int>>>(V);
	}

	void aresta(int u, int v, int w) {
		adj[u].push_back(make_pair(v, w));
		adj[v].push_back(make_pair(u, w));
	}

	int bfs(int raiz) {
		int total = 0;
		vector<bool> visitado(V, 0);
		queue<int> q;
		visitado[raiz] = 1;
		q.push(raiz);
		while (!q.empty()) {
			int u = q.front();
			q.pop();
			for (auto &v : adj[u]) {
				if (!visitado[v.first]) {
					total++;
					visitado[v.first] = 1;
					q.push(v.first);
				}
			}
		}
		return total;
	}

};

int main() {
	int n, a, b;
	while (scanf("%d", &n) && n) {
		grafo g(1001);
		while (n--) {
			scanf(" (%d,%d) ", &a, &b);
			g.aresta(a-1, b-1, 1);
		}
		printf("%d\n", g.bfs(0)+1);
	}
	return 0;
}