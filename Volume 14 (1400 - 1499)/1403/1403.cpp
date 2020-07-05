#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	while (cin >> n >> m && (n || m)) {
		int maior = 0, segundo = 0;
		vector<int> v(10001, 0);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> k;
				v[k]++;
				maior = max(maior, v[k]);
			}
		}
		for (int i = 0; i < 10001; i++)
			if (v[i] > segundo  && v[i] < maior)
				segundo = v[i];
		for (int i = 0; i < 10001; i++)
			if (v[i] == segundo)
				cout << i << " ";
		cout << endl;
	}
	return 0;
}