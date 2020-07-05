#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, d, i, b, q, ind, qtd;
	cin >> t;
	while (t--) {
		cin >> d >> i >> b;
		vector<int> ing(i), bolos(b, 0);
		for (int j = 0; j < i; j++) cin >> ing[j];
		for (int j = 0; j < b; j++) {
			cin >> q;
			while (q--) {
				cin >> ind >> qtd;
				bolos[j] += ing[ind]*qtd;
			}
		}
		cout << d/(*min_element(bolos.begin(), bolos.end())) << endl;
	}
	return 0;
}