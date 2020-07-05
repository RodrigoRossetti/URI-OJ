#include<bits/stdc++.h> 
using namespace std; 

int v[1001][1001];
int bit[1002][1002];
int total, p;

void atualiza(int n, int x, int y, int k) {
	for (; x <= n; x += x&-x)
		for(p = y; p <= n; p += p&-p)
			bit[x][p] += k;
}

int soma(int x, int y) {
	total = 0;
	for(; x; x -= x&-x)
		for(p = y; p; p -= p&-p)
			total += bit[x][p];
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y, z, w, i, j;
	while (cin >> n >> m) {
		for (i = 0; i <= n; i++)
			for (j = 0; j <= n; j++)
				bit[i][j] = 0; 
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> v[i][j];
		for (j = 1; j <= n; j++)
			for (i = 1; i <= n; i++)
				atualiza(n, i, j, v[i-1][j-1]);
		while (m--) {
			cin >> x >> y;
			atualiza(n, x, y, 1);
			cin >> x >> y >> z >> w;
			cout << soma(z, w)-soma(z, y-1)-soma(x-1, w)+soma(x-1, y-1) << '\n';
		}
	}
	return 0;
}
