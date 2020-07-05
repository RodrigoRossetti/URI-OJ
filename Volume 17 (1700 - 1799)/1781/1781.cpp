#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, q, op, x;
	string s;
	cin >> t;
	for (int caso = 1; caso <= t; caso++) {
		cin >> s;
		int a = 0, b = 0, pos1 = 0, pos2 = 0;
		vector<int> vogal, consoante;
		map<int, pair<bool, int>> mapa;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				vogal.push_back(i);
				mapa[i] = {1, pos1++};
			}
			else {
				consoante.push_back(i);
				mapa[i] = {0, pos2++};
			}
		}
		cin >> q;
		cout << "Caso #" << caso << ":\n";
		while (q--) {
			cin >> op;
			if (op == 0) {
				cin >> x;
				a += x;
			}
			else if (op == 1) {
				cin >> x;
				b += x;
			}
			else if (op == 2) {
				if (pos1) {
					a %= pos1;
					if (a) rotate(vogal.rbegin(), vogal.rbegin()+a, vogal.rend());
				}
				if (pos2) {
					b %= pos2;
					if (b) rotate(consoante.rbegin(), consoante.rbegin()+b, consoante.rend());
				}
				for (auto it = mapa.begin(); it != mapa.end(); it++) {
					if (it->second.first) cout << s[vogal[it->second.second]];
					else cout << s[consoante[it->second.second]];
				}
				cout << endl;
				a = b = 0;
			}
		}
	}
	return 0;
}