#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long double n, m;
	long long k, x = 0, y = 0, t = 1;
	cin >> n >> m >> k;
	long double a1 = n, b1 = m, a2, b2;
	while (t <= k) {
		a2 = a1, b2 = b1;
		if (a1 >= b1) a1 = n/(++x+1);
		else b1 = m/(++y+1);
		t = (x+1)*(y+1);
	}
	cout << ceil(max(a2, b2)) << endl;
	return 0;
}