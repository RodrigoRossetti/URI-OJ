#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, t;
	while (cin >> s >> t && s != "*") {
		s += 'f', t += 'f';
		int total = 0;
		bool f = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != t[i]) f = 1;
			if (f && s[i] == t[i]) f = 0, total++;
		}
		cout << total << endl;
	}
	return 0;
}