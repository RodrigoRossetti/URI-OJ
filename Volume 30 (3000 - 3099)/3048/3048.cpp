#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, last = -1, total = 0;
	cin >> n;
	while (n--) {
		cin >> k;
		if (last != k) total++;
		last = k;
	}
	cout << total << endl;
	return 0;
}