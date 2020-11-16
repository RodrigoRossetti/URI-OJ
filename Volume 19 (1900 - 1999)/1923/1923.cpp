#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct grafo {

	int v, chave;
	vector<vector<pair<int, int>>> adj;
	map<string, int> mapa;
	map<int, string> reverso;

	grafo(int v) {
		this->v = v;
		chave = 0;
		adj = vector<vector<pair<int, int>>>(v);
	}

	void aresta(string& s, string& t, int k) {
		if (!mapa.count(s)) {
			mapa[s] = chave;
			reverso[chave] = s;
			chave++;
		}
		if (!mapa.count(t)) {
			mapa[t] = chave;
			reverso[chave] = t;
			chave++;
		}
		int u = mapa[s], w = mapa[t];
		adj[u].push_back({w, k});
		adj[w].push_back({u, k});
	}

	void bfs(int d) {
		int raiz = mapa["Rerisson"];
		vector<bool> visitado(v, 0);
		queue<int> q;
		vector<string> r;
		q.push(raiz);
		q.push(-1);
		visitado[raiz] = 1;
		int depth = 0;
		int total = 0;
		while (q.size() > 1 && depth < d) {
			raiz = q.front();
			q.pop();
			if (raiz == -1) {
				depth++;
				q.push(-1);
				continue;
			}
			for (const auto& w : adj[raiz]) {
				if (!visitado[w.first]) {
					visitado[w.first] = 1;
					total++;
					r.push_back(reverso[w.first]);
					q.push(w.first);
				}
			}
		}
		cout << total << endl;
		sort(r.begin(), r.end());
		for (auto& x : r) cout << x << endl;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d;
	string s, t;
	cin >> n >> d >> ws;
	grafo g(2*n);
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		g.aresta(s, t, 1);
	}
	g.bfs(d);
	return 0;
}