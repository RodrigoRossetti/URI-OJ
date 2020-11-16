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

	bool bfs(int raiz) {
		vector<int> cor(v, -1);
		queue<int> q;
		cor[raiz] = 1;
		q.push(raiz);
		while (!q.empty()) {
			raiz = q.front();
			q.pop();
			for (const auto& w : adj[raiz]) {
				if (cor[w.first] == cor[raiz]) return 0;
				else if (cor[w.first] == -1) {
					cor[w.first] = 1 - cor[raiz];
					q.push(w.first);
				}
			}
		}
		return 1;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	string s;
	while (cin >> n && n) {
		grafo g(n);
		for (int i = 0; i < n; i++) {
			cin >> k >> ws;
			getline(cin, s);
			stringstream ss(s);
			while (ss >> s)
				g.aresta(k-1, stoi(s)-1, 1);
		}
		cout << (g.bfs(0) ? "SIM" : "NAO") << endl;
	}
	return 0;
}