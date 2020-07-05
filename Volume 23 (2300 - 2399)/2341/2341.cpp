#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> v(k);
	while (n--) {
		cin >> k;
		v[k-1]++;
	}
	cout << *min_element(v.begin(), v.end()) << endl;
	return 0;
}