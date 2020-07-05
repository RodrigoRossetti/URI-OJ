#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, total;
	while (cin >> n >> k) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());
		total = 0;
		for (int i = 0; i < k; i++)
			total = (total + v[i]) % 1000000007;
		cout << total << endl;
	}
	return 0;
}