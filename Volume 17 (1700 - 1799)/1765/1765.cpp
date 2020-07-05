#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, q;
	double a, b;
	cout << fixed << setprecision(2);
	while (cin >> t && t) {
		for (int i = 1; i <= t; i++) {
			cin >> q >> a >> b;
			cout << "Size #" << i << ":\n";
			cout << "Ice Cream Used: " << q*5*(a+b)/2 << " cm2\n";
		}
		cout << endl;
	}
	return 0;
}