#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n;
	vector<int> v(n), dist(n);
	for (int i = 0; i < n; i++) {
		cin >> k;
		v[i] = k-1;
	}
	for (int i = 0; i < n; i++) {
		int atual = 1, pos = v[i];
		while (pos != i) atual++, pos = v[pos];
		dist[i] = atual;
	}
	long long mmc = 1;
	for (int i = 0; i < n; i++) mmc = lcm(mmc, dist[i]);
	cout << mmc << endl;
	return 0;
}