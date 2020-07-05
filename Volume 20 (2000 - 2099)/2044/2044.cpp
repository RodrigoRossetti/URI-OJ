#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, atual, total;
	while (cin >> n && n != -1) {
		atual = total = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			atual += x;
			if (atual % 100 == 0) total++, atual %= 100;
		}
		cout << total << endl;
	}
	return 0;
}