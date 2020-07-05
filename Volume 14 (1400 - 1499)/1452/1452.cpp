#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, q, p, total;
	string s;
	multimap<int, string> mapa;
	while (cin >> m >> n && m && n) {
		mapa.clear();
		for (int i = 0; i < m; i++) {
			cin >> q >> ws;
			while (q--) {
				cin >> s;
				mapa.insert(make_pair(i, s));
			}
		}
		total = 0;
		while (n--) {
			vector<bool> v(m);
			cin >> p >> ws;
			while (p--) {
				cin >> s;
				for (multimap<int, string>::iterator it = mapa.begin(); it != mapa.end(); it++) {
					if (it->second == s && v[it->first] == 0) {
						total++;
						v[it->first] = 1;
					}
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}