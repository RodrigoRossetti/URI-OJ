#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b, c, s;
	while (getline(cin, s)) {
		bool f1 = 1, f2 = 1;
		a = b = c = "";
		for (int i = 0; i < s.length(); i++) {
			if (f1) {
				if (s[i] == '+') f1 = 0;
				else a += s[i];
			}
			else if (f2) {
				if (s[i] == '=') f2 = 0;
				else b += s[i];
			}
			else c += s[i];
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		reverse(c.begin(), c.end());
		int x = stoi(a), y = stoi(b), z = stoi(c);
		if (x == y && y == z && x == 0) break;
		if (x + y == z) cout << "True\n";
		else cout << "False\n";
	}
	cout << "True\n";
	return 0;
}