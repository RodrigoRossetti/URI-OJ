#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		n %= 4;
		if (n == 0) cout << "1\n";
		else if (n == 1) cout << "7\n";
		else if (n == 2) cout << "9\n";
		else cout << "3\n";
	}
	return 0;
}