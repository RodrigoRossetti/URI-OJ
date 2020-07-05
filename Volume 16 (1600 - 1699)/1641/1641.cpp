#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long r, w, l, d, t = 1;
	while (cin >> r && r) {
		cin >> w >> l;
		d = l*l+w*w;
		cout << "Pizza " << t++;
		if (d <= r*r*4) cout << " fits on the table.\n";
		else cout << " does not fit on the table.\n";
	}
	return 0;
}