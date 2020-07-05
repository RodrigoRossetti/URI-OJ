#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, k;
	cin >> t;
	while (t--) {
		int total = 0, vencedor;
		cin >> n >> m;
		vector<int> v(n, 0);
		while (m--) {
			cin >> k;
			v[k-1]++;
			total++;
		}
		total = floor(total/2);
		bool flag = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > total) {
				flag = 1, vencedor = i+1;
				break;
			}
		}
		cout << (flag ? vencedor : -1) << endl;
	}
	return 0;
}