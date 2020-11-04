#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, total = 0, rep = 0;
	cin >> n;
	vector<bool> vis(305, 0);
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (!vis[k]) {
			vis[k] = 1;
			total++;
		}
		else rep++;
	}
	cout << total << endl;
	cout << rep << endl;
	return 0;
}