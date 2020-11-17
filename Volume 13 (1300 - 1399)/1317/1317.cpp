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
		//adj[w].push_back({u, k});
	}

	void imprime() {
		for (int i = 0; i < v; i++) {
			cout << '[' << i << "] ";
			for (const auto& w : adj[i]) cout << "-> " << w.first << "(" << w.second << ") ";
			cout << endl;
		}
	}

	void bfs(int raiz, vector<int>& total) {
		vector<bool> visitado(v, 0);
		visitado[raiz] = 1;
		queue<int> q;
		q.push(raiz);
		while (!q.empty()) {
			raiz = q.front();
			q.pop();
			for (const auto& w : adj[raiz]) {
				total[raiz]++;
				if (!visitado[w.first]) {
					visitado[w.first] = 1;
					q.push(w.first);
				}
			}
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, f, p, a1, a2;
	string s, t1, t2, t3;
	while (cin >> n && n) {
		grafo g(n);
		for (int i = 0; i < n; i++) {
			while (cin >> f && f) {
				g.aresta(i, f-1, 1);
			}
		}
		vector<pair<int, int>> a;
		vector<pair<string, pair<string, string>>> t;
		vector<vector<string>> out(n);
		while (cin >> p && p) {
			cin >> a1 >> a2 >> t1 >> t2 >> t3;
			vector<int> total(n, 0);
			g.bfs(p-1, total);
			for (int i = 0; i < n; i++) {
				if (total[i] < a1)
					out[i].push_back(t1);
				else if (total[i] >= a1 && total[i] < a2)
					out[i].push_back(t2);
				else if (total[i] >= a2)
					out[i].push_back(t3);
			}
		}
		for (int i = 0; i < n; i++) {
			cin >> s;
			cout << s << ": ";
			for (int j = 0; j < out[i].size(); j++) 
				cout << out[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}