#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, s, t1, t2, t3, n, d1, d2, atual, vencedor;
	while (cin >> p >> s && (p || s)) {
		vector<bool> v(p, 0);
		vector<int> pos(p, 0);
		cin >> t1 >> t2 >> t3;
		cin >> n;
		atual = 0, vencedor = -1;
		while (n--) {
			if (atual == p) atual = 0;
			while (v[atual]) {
				v[atual] = 0, atual++;
				if (atual == p) atual = 0;
			}
			cin >> d1 >> d2;
			if (vencedor == -1) {
				pos[atual] += d1+d2;
				if (pos[atual] == t1 || pos[atual] == t2 || pos[atual] == t3) v[atual] = 1;
				if (pos[atual] >= s+1) vencedor = atual;
				atual++;
			}
		}
		cout << vencedor+1 << endl;
	}
	return 0;
}