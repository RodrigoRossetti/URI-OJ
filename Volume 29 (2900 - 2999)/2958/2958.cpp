#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	string s;
	priority_queue<int> v, d;
	cin >> m >> n >> ws;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> s;
			if (s[1] == 'V') v.push(s[0]-'0');
			else if (s[1] == 'D') d.push(s[0]-'0');
		}
	}
	while (!v.empty()) {
		cout << v.top() << "V\n";
		v.pop();
	}
	while (!d.empty()) {
		cout << d.top() << "D\n";
		d.pop();
	}
	return 0;
}