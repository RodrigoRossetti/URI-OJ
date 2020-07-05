#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, w, c;
	while (cin >> t >> a >> w >> c) {
		double wp = (double)w/100, wc = (double)c/100, ap = (double)a/t;
		if (ap >= wc) cout << "critical\n";
		else if (ap >= wp) cout << "warning\n";
		else cout << "OK\n";
	}
	return 0;
}