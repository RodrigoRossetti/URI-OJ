#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, n, c;
	while (cin >> p >> n >> c && (p || n || c)) {
		vector<vector<int>> v(n, vector<int>(p));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < p; j++)
				cin >> v[i][j];
		int total = 0, atual;
		for (int i = 0; i < p; i++) {
			atual = 0;
			for (int j = 0; j < n; j++) {
				if (v[j][i]) atual++;
				else {
					if (atual >= c) total++;
					atual = 0;
				}
			}
			if (atual >= c) total++;
		}
		cout << total << endl;
	}

	return 0;
}