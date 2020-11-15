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

	void bfs(int raiz, vector<bool>& visitado) {
		queue<int> q;
		q.push(raiz);
		set<char> r;
		while (!q.empty()) {
			raiz = q.front();
			q.pop();
			r.insert(raiz+'a');
			visitado[raiz] = 1;
			for (const auto& w : adj[raiz])
				if (!visitado[w.first])
					q.push(w.first);
		}
		for (auto& x : r)
			cout << x << ",";
		cout << endl;
	}

	void bfs() {
		int total = 0;
		vector<bool> visitado(v, 0);
		for (int i = 0; i < v; i++) {
			if (!visitado[i]) {
				bfs(i, visitado);
				total++;
			}
		}
		cout << total << " connected components\n";
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, v, e;
	char a, b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> v >> e;
		grafo g(v);
		while (e--) {
			cin >> a >> b;
			g.aresta(a-'a', b-'a', 1);
		}
		cout << "Case #" << i << ":\n";
		g.bfs();
		cout << endl;
	}
	return 0;
}