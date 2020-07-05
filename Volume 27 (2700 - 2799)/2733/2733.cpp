#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	vector<int> v(101, 0);
	while (cin >> n) {
		int total = n;
		while (n--) {
			cin >> x;
			if (v[x] == 0) {
				v[x] = 1;
				for (int i = 1; i <= 100; i++) {
					if (v[i] > 0 && i != x) v[i]++;
					if (v[i] == 5) v[i] = 0;
				}
			}
			else total--;
		}
		cout << total << endl;
	}
	return 0;
}