#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n+5);
	v[0] = v[1] = 0;
	v[2] = v[3] = v[4] = 1;
	for (int i = 5; i < n; i++) v[i] = (v[i-2] + v[i-3]) % 1000000007;
	cout << v[n-1] << endl;
	return 0;
}