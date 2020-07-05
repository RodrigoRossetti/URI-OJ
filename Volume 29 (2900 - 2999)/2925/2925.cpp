#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string a, b;
	unsigned long long x, y;
	vector<unsigned long long> v(61, 0);
	v[0] = 0, v[1] = 1, v[2] = 2, v[3] = 3, v[4] = 5, v[5] = 8;
	for (int i = 6; i <= 60; i++) {
		a = to_string(v[i-1]);
		b = to_string(v[i-2]);
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		v[i] = stoull(a)+stoull(b);

	}
	while (cin >> n) cout << v[n] << endl;
	return 0;
}