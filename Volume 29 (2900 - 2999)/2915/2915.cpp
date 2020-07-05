#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a = -1, b, total = 1;
	cin >> n;
	while (n--) {
		if (a == -1) cin >> a;
		else {
			cin >> b;
			if (b > a) total++;
			swap(a, b);
		}
	}
	cout << total << endl;
	return 0;
}