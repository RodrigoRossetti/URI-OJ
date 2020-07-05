#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0;
	string s = "FACE";
	char a, b, c, d;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d;
		int k = s.length();
		if (a == s[k-1] && b == s[k-2] && c == s[k-3] && d == s[k-4]) s.erase(k-4, 4), total++;
		else s = s+a+b+c+d;
		if (s.empty()) s = "FACE";
	}
	cout << total << endl;
	return 0;
}