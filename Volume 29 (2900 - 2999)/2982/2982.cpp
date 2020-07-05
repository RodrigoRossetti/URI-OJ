#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0;
	cin >> n;
	while (n--) {
		char c;
		int valor;
		cin >> c >> valor;
		if (c == 'G') total -= valor;
		else if (c == 'V') total += valor;
	}
	total >= 0 ? cout << "A greve vai parar.\n" : cout << "NAO VAI TER CORTE, VAI TER LUTA!\n";
	return 0;
}