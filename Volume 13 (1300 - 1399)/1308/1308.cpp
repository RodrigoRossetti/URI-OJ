#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long t, n;
	cin >> t;
	cout << fixed << setprecision(0);
	while (t--) {
		cin >> n;
		cout << floor((-0.5+sqrt(0.25+(4*0.5*n)))/1) << endl;
	}
	return 0;
}