#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(2);
	int t;
	double a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		cout << -((b*b-4*a*c)/(4*a)) << endl;
	}
	return 0;
}