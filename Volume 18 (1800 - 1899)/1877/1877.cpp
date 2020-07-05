#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, x, ultimo, total = 0;
	bool tipo = 1;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (i && ((x > ultimo && tipo) || (x < ultimo && !tipo)))
			tipo = !tipo, total++;
		ultimo = x;
	}
	cout << (k+k == total ? "beautiful\n" : "ugly\n");
	return 0;
}