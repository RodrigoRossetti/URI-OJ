#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int h, l;
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2] >> h >> l;
	sort(v.rbegin(), v.rend());
	if (l < h) swap(l, h);
	if (l > v[1] && h > v[2]) cout << "S\n";
	else cout << "N\n";
	return 0;
}