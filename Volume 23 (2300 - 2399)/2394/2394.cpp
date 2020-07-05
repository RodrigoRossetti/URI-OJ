#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m, k, atual, menor = LLONG_MAX, imenor = -1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		atual = 0;
		for (int j = 0; j < m; j++) {
			cin >> k;
			atual += k;
		}
		if (atual < menor) menor = atual, imenor = i;
	}
	cout << imenor << endl;
	return 0;
}