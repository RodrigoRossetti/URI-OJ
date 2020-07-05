#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k;
	string lixo;
	while (cin >> t >> n && (t || n)) {
		int total = 0;
		while (t--) {
			cin >> lixo >> k;
			total += k;
		}
		cout << 3*n-total << endl;
	}
	return 0;
}