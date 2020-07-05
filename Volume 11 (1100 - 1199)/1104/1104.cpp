#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, k;
	set<int> x, y, dif1, dif2;
	while (cin >> a >> b && a && b) {
		x.clear(), y.clear(), dif1.clear(), dif2.clear();
		while (a--) {
			cin >> k;
			x.insert(k);
		}
		while (b--) {
			cin >> k;
			y.insert(k);
		}
		set_difference(x.begin(), x.end(), y.begin(), y.end(), inserter(dif1, dif1.end()));
		set_difference(y.begin(), y.end(), x.begin(), x.end(), inserter(dif2, dif2.end()));
		dif1.size() < dif2.size() ? cout << dif1.size() << endl : cout << dif2.size() << endl;
	}
	return 0;
}