#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, a, p, r;
	cin >> l >> a >> p >> r;
	cout << (l*l + a*a + p*p <= 4*r*r ? "S\n" : "N\n");
	return 0;
}