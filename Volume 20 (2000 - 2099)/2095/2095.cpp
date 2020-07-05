#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, i, j;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (i = 0, j = 0; j < n; j++)
		if (a[i] < b[j]) i++;
	cout << n-(j-i) << endl;
	return 0;
}