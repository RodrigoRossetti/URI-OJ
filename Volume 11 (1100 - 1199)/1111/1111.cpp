#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p, a, b, c, d, pos, pos2;
	while (cin >> n && n) {
		vector<vector<int>> grafo(n*n, vector<int>(n*n, 1000000));
		for (int i = n-1; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				cin >> a >> b >> c >> d;
				pos = n*i+j;
				grafo[pos][pos] = 0;
				if (a && pos < n*n-1) grafo[pos][pos+n] = 1;
				if (b && pos >= n) grafo[pos][pos-n] = 1;
				if (c && pos % n != 0) grafo[pos][pos-1] = 1;
				if (d && pos % n != n-1) grafo[pos][pos+1] = 1;
			}
		}
		for (int k = 0; k < n*n; k++)
			for (int i = 0; i < n*n; i++)
				for (int j = 0; j < n*n; j++)
					grafo[i][j] = min(grafo[i][j], grafo[i][k] + grafo[k][j]);
		cin >> p;
		while (p--) {
			cin >> a >> b >> c >> d;
			pos = n*b+a, pos2 = n*d+c;
			if (grafo[pos][pos2] == 1000000) cout << "Impossible\n";
			else cout << grafo[pos][pos2] << endl;
		}
		cout << endl;
	}
	return 0;
}