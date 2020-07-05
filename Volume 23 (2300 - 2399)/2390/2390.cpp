#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, atual = -1, total = 0;
	cin >> n;
	while (n--) {
		cin >> k;
		if (atual == -1) atual = k, total = 10;
		else if (k-atual <= 10) total += k-atual, atual = k;
		else atual = k, total += 10;
	}
	cout << total << endl;
	return 0;
}