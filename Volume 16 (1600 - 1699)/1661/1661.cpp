#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, k, total;
	while (cin >> n && n ) {
		total = 0;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = 0; i < n-1; i++)
			v[i+1] += v[i], total += abs(v[i]), v[i] -= v[i];
		cout << total << endl;
	}
	return 0;
}