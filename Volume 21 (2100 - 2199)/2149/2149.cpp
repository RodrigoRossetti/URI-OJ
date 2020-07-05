#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	vector<long long> v(17);
	v[0] = 0;
	v[1] = v[2] = 1;
	for (int i = 3; i < 17; i++)
		i % 2 != 0 ? v[i] = v[i-1]*v[i-2] : v[i] = v[i-1]+v[i-2];
	while (cin >> n) cout << v[n-1] << endl;
	return 0;
}