#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q, e, x;
	vector<bool> v(1001, 0);
	cin >> q >> e;
	while (e--) {
		cin >> x;
		v[x] = 1;
	}
	while (q--) {
		cin >> x;
		if (v[x]) cout << 0 << '\n';
		else {
			v[x] = 1;
			cout << 1 << '\n';
		}
	}
	return 0;
}