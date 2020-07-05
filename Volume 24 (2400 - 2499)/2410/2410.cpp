#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	unordered_set<int> s;
	cin >> n;
	while (n--) {
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	return 0;
}