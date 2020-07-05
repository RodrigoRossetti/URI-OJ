#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, l, p, lin, col, k;
	cin >> t;
	for (int i = 0; i < t; i++) {
		if (i) cout << endl;
		cin >> n >> l;
		map<pair<int, int>, int> mapa;
		while (l--) {
			cin >> p >> lin >> col >> k;
			auto it = mapa.find({lin, col});
			if (it != mapa.end()) mapa[{lin, col}] += k;
			else mapa[{lin, col}] = k;
		}
		for (auto it = mapa.begin(); it != mapa.end(); it++) 
			cout << it->first.first << " " << it->first.second << " " << it->second << endl;
	}
	return 0;
}