#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int total = 0, maior = 0, atual = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> k;
			if (k < maior) total = max(total, atual), atual = 0;
			else if (k == maior) atual++;
			else maior = k, atual = 1, total = 0;
		}
		total = max(total, atual);
		cout << "Caso #" << i << ": " << total << endl;
	}
	return 0;
}