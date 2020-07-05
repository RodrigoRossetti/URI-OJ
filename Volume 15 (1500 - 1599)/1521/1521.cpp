#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	while (cin >> n && n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> k;
			v[i] = k-1;
		}
		cin >> k;
		k--;
		int anterior = -1;
		while (anterior != k) {
			anterior = k;
			k = v[k];
		}
		cout << k+1 << endl;
	}
	return 0;
}