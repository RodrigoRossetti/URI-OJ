#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, total = 0;
	cin >> n;
	while (n--) {
		cin >> k;
		total += (k/3)*3;
	}
	cout << total << endl;
	return 0;
}