#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	while (cin >> n) {
		vector<int> soma(n);
		cin >> soma[0];
		for (int i = 1; i < n; i++) {
			cin >> x;
			soma[i] = soma[i-1]+x;
		}
		if (soma[n-1] % 3 != 0) cout << 0 << endl;
		else {
			int k = soma[n-1]/3;
			int total = 0;
			for (int i = 0; i < n; i++)
				if (binary_search(soma.begin(), soma.end(), soma[i]+k) &&
					binary_search(soma.begin(), soma.end(), soma[i]+2*k)) total++;
			cout << total << endl;
		}
	}
	return 0;
}