#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t, l, x, a = 0, b = 0;
	cin >> n >> t >> l;
	while (n --> 1) {
		cin >> x;
		int k = abs(x-t);
		if (k <= l) {
			t = x;
			if (n % 2 == 0) a += k;
			else b += k;
		}
	}
	cout << a << " " << b << endl;
	return 0;
}