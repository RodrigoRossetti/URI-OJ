#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, x, total = 0;
	cin >> n >> k;
	while (n--) {
		cin >> x;
		if (x <= 0) total++;
	}
	cout << (total >= k ? "YES" : "NO") << endl;
	return 0;
}