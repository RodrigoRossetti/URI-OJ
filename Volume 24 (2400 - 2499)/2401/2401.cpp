#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	char op;
	double r = 1;
	cin >> n;
	while (n--) {
		cin >> k >> op;
		if (op == '/') r /= k;
		else r *= k;
	}
	cout << fixed << setprecision(0) << r << endl;
	return 0;
}