#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, l, o, d, soma;
	cin >> p >> l;
	vector<int> deg(p, 0);
	vector<vector<int>> adj(p);
	while (l--) {
		cin >> o >> d;
		o--, d--;
		deg[d]++;
		adj[d].push_back(o);
	}
	for (int i = 0; i < p; i++) {
		soma = 0;
		for (auto& x : adj[i]) soma += deg[x];
		cout << i+1 << ": " << deg[i]+soma << endl;
	}
	return 0;
}