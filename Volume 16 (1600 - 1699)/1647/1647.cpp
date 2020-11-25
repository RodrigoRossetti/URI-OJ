#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		vector<long long> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = n-2; i >= 0; i--)
			for (int j = n-1; j > i; j--)
				v[i] += v[j];
		long long soma = 0;
		for (int i = 0; i < n; i++) soma += v[i];
		cout << soma << endl;
	}
	return 0;
}