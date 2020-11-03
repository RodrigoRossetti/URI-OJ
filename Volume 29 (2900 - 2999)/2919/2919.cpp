#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int lis(vector<int>& v) {
	if (v.size() == 0) return 0;
	vector<int> tail(v.size(), 0);
	int length = 1;
	tail[0] = v[0];
	for (int i = 1; i < v.size(); i++) {
		auto it = lower_bound(tail.begin(), tail.begin() + length, v[i]);
		if (it == tail.begin() + length)
			tail[length++] = v[i];
		else
			*it = v[i];
	}
	return length;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (auto&x : v) cin >> x;
		cout << lis(v) << endl;
	}
	return 0;
}