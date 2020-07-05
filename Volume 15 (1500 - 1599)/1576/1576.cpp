#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, r, h, maior = 0, atual = 0;
	vector<int> altura(10001, 0);
	while (cin >> l >> h >> r) {
		maior = max(maior, r);
		for (int i = l; i < r; i++) {
			altura[i] = max(altura[i], h);
		}
	}
	bool flag = 0;
	for (int i = 0; i <= maior; i++) {
		if (altura[i] != atual) {
			if (flag) cout << " ";
			atual = altura[i];
			cout << i << " " << atual;
			flag = 1;
		}
	}
	cout << endl;
	return 0;
}