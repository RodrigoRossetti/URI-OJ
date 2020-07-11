#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define perc(x, total) ((x*total*1.0)/100.0)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0;
	cin >> n;
	vector<int> v(n);
	for (auto &k : v) {
		cin >> k;
		total += k;
	}
	sort(v.rbegin(), v.rend());
	if (v[0] >= perc(45, total) || (v[0] >= perc(40, total) && v[0]-v[1] >= perc(10, total)))
		cout << 1 << endl;
	else
		cout << 2 << endl;
	return 0;
}