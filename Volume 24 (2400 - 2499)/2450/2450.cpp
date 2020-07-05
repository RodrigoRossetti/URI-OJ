#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, zeros, escada = 0;
	bool f, continua = 1;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		zeros = 0;
		f = 1;
		for (int j = 0; j < m; j++) {
			cin >> k;
			if (k == 0 && f) zeros++;
			else f = 0;
		}
		if (i) {
			if ((zeros > escada || (zeros == escada && zeros == m)) && continua) escada = zeros;
			else escada = 0, continua = 0;
		}
		else escada = zeros;
	}
	cout << (escada ? "S\n" : "N\n");
	return 0;
}