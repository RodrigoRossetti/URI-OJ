#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());
		total = 0;
		for (int i = 0; i < n/2; i++)
		total += v[i]-v[n-i-1];
		cout << total << endl;
	}
	return 0;
}