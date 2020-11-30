#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class grafo {
	ll v;
	vector<vector<pair<ll, ll>>> adj;

public:

	grafo(ll v) {
		this->v = v;
		adj = vector<vector<pair<ll, ll>>>(v);
	}

	void aresta(ll u, ll w, ll k) {
		adj[u].push_back({w, k});
		adj[w].push_back({u, k});
	}

	void dfsR(ll raiz, vector<bool>& visitado, ll& cnt) {
		visitado[raiz] = 1;
		cnt++;
		for (const auto& x : adj[raiz])
			if (!visitado[x.first])
				dfsR(x.first, visitado, cnt);
	}

	ll dfs(ll b, ll e) {
		vector<bool> visitado(v, 0);
		ll total = 0;
		for (ll i = 0; i < v; i++) {
			if (!visitado[i]) {
				ll cnt = 0;
				dfsR(i, visitado, cnt);
				total += (cnt-1)*e+b;
			}
		}
		return total;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t, n, m, b, e, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> m >> b >> e;
		grafo g(n);
		while (m--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		if (b <= e) cout << b*n << endl;
		else cout << g.dfs(b, e) << endl;
	}
	return 0;
}