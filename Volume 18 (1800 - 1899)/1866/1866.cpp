#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, n;
	cin >> c;
	while (c--) {
		cin >> n;
		cout << (n % 2 == 0 ? 0 : 1) << endl;
	}
	return 0;
}