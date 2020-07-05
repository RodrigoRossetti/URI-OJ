#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<double> v(5);
	for (int i = 0; i < 5; i++) cin >> v[i];
	sort(v.begin(), v.end());
	cout << fixed << setprecision(1) << (v[1]+v[2]+v[3]) << endl;
	return 0;
}