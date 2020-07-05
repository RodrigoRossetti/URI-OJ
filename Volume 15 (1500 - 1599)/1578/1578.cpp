#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, caso = 4;
	cin >> n;
	while (n--) {
		if (caso > 4) cout << endl;
		cout << "Quadrado da matriz #" << caso++ << ":\n";
		cin >> m;
		vector<vector<ull>> v(m, vector<ull>(m));
		vector<int> alin(m, 0);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				cin >> v[i][j];
				v[i][j] *= v[i][j];
				alin[j] = max(alin[j], (int)to_string(v[i][j]).length());
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				if (j) cout << " ";
				cout << setw(alin[j]) << v[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}