#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(6);
	long double dist[102][102];
	int n, m, a, b, p;
	while (cin >> n && n) {
		memset(dist, 0, sizeof(dist)); 
		cin >> m;
		while (m--) {
			cin >> a >> b >> p;
			dist[a-1][b-1] = dist[b-1][a-1] = 0.01l*p;
		}
		for (int k = 0; k < n; k++)
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					dist[i][j] = max(dist[i][j], dist[i][k] * dist[k][j]);
		cout << dist[0][n-1]*100.0l << " percent\n";
	}
	return 0;
}