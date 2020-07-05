#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, k, x, total, maior;
	vector<int> v, soma;
	vector<bool> b;
	set<int> sequencia;
	while (cin >> m >> k) {
		v.clear(), sequencia.clear(), soma.clear(), b.clear();
		while (m--) {
			cin >> x;
			v.push_back(x);
		}
		while (k--) {
			cin >> x;
			sequencia.insert(x);
			soma.push_back(x);
		}
		for (int i = 0; i < v.size(); i++) b.push_back(0);
		if (sequencia.size() != v.size()) cout << -1 << endl;
		else {
			total = 0;
			maior = 0;
			for (int i = 0; i < soma.size(); i++) {
				if (b[soma[i]-1] == 0) {
					b[soma[i]-1] = 1;
					maior = i;
				}
			}
			for (int i = 0; i <= maior; i++) total += v[soma[i]-1];
			cout << total << endl;
		}
	}
	return 0;
}