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

	void dfsR(int inicio, int fim, vector<vector<bool>>& tc) {
		if (inicio != fim) tc[inicio][fim] = 1;
		for (auto &u : adj[fim]) {
			if (!tc[inicio][u.first]) {
				if (inicio == u.first) tc[inicio][u.first] = 1;
				dfsR(inicio, u.first, tc);
			}
		}
	}
	
	vector<vector<bool>> transitiveClosureDfs() {
		vector<vector<bool>> tc(v, vector<bool>(v, 0));
		for (int u = 0; u < v; u++)
			dfsR(u, u, tc);
		return tc;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	char c;
	string s;
	while (cin >> n && n) {
		vector<grafo> g(26, grafo(n));
		while (cin >> a >> b && (a || b)) {
			cin >> s;
			for (int i = 0; i < s.length(); i++)
				g[s[i]-'a'].aresta(a-1, b-1, 1);
		}
		vector<vector<bool>> *tc;
		tc = new vector<vector<bool>>[26];
		for (int i = 0; i < 26; i++) tc[i] = g[i].transitiveClosureDfs();
		while (cin >> a >> b && (a || b)) {
			bool flag = 1;
			for (int i = 0; i < 26; i++) {
				if (tc[i][a-1][b-1]) {
					flag = 0;
					c = i+'a';
					cout << c;
				}
			}
			if (flag) cout << "-";
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}