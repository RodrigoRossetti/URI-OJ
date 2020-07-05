#include <bits/stdc++.h>
using namespace std;

void imprime(int x, int y, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << (i == x && j == y ? 'X' : 'O');
		cout << endl;
	}
	cout << "@\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y;
	while (cin >> n && n) {
		int r = 1, u = 1, l = 2, dow = 2;
		x = y = n/2;
		while (x < n && y < n) {
			if (x == n-1 && y == n-1) break;
			for (int a = 0; a < r; a++) {
				imprime(x, y++, n);
				if (x == n-1 && y == n-1) break;
			}
			if (x == n-1 && y == n-1) break;
			for (int b = 0; b < u; b++) imprime(x--, y, n);
			for (int c = 0; c < l; c++) imprime(x, y--, n);
			for (int d = 0; d < dow; d++) imprime(x++, y, n);
			r += 2, u += 2, l += 2, dow += 2;
		}
		imprime(x, y++, n);
	}
	return 0;
}