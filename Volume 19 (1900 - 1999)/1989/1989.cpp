#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n, m, x, total;
	while (cin >> n >> m && n != -1 && m != -1) {
		total = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			total += m*x*(n-i);
		}
		cout << total << '\n';
	}
	return 0;
}