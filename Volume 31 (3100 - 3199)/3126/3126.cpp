#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, total = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == 1) total++;
	}
	cout << total << endl;
	return 0;
}