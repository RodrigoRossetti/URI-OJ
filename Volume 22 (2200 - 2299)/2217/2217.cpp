#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	cin >> n;
	while (n--) {
		cin >> x;
		cout << (x % 2 == 0 ? 1 : 9) << endl;
	}
	return 0;
}