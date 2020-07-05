#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, k, i = 1;
	while (cin >> n >> m && n && m) {
		vector<vector<int>> grafo(n, vector<int>(n, INT_MAX));
		while (m--) {
			cin >> a >> b >> k;
			grafo[a-1][b-1] = k;
		}
		for(int k = 0; k < n; k++)
			for(int i = 0; i < n; i++)
				for(int j = 0; j < n; j++)
					grafo[i][j] = grafo[j][i] = min(min(grafo[i][j], max(grafo[i][k], grafo[k][j])),
													min(grafo[j][i], max(grafo[j][k], grafo[k][i])));
		cin >> m;
		cout << "Instancia " << i++ << endl;
		while (m--) {
			cin >> a >> b;
			cout << (a == b ? 0 : grafo[a-1][b-1]) << endl;
		}
		cout << endl;
	}
	return 0;
}