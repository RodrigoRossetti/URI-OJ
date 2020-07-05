#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, v;
	while (cin >> n >> m) {
		multimap<int, int> mapa;
		int atual = 1;
		for (int i = 0; i < n; i++, atual++) {
			cin >> k;
			mapa.insert({k, atual});
		}
		typedef multimap<int, int>::iterator POSit;
		while (m--) {
			cin >> k >> v;
			pair<POSit, POSit> r = mapa.equal_range(v);
			bool f = 1;
			atual = 1;
			for (POSit it = r.first; it != r.second; it++, atual++) {
				if (atual == k) {
					cout << it->second;
					f = 0;
					break;
				}
			}
			if (f) cout << 0;
			cout << endl;
		}
	}
	return 0;
}