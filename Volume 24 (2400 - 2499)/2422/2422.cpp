#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	cin >> k;
	int l = 0, r = n-1;
	while (l < r) {
		if (v[l]+v[r] == k) break;
		if (v[l]+v[r] < k) l++;
		else r--;
	}
	cout << v[l] << " " << v[r] << endl;
	return 0;
}