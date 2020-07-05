#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q, t, k;
	bool flag;
	string s, s2;
	cin >> n;
	while (n--) {
		cin >> s;
		cin >> q;
		while (q--) {
			flag = 1, t = k = 0;
			cin >> s2;
			if (s2.length() <= s.length()) {
				for (int i = 0; i < s2.length(); i++) {
					for (int j = t; j < s.length(); j++, t++) {
						if (s2[i] == s[j]) {
							k++;
							j = s.length();
						}
						else if (s2[i] != s[j] && j == s.length()-1) {
							flag = 0;
							break;
						}
					}
					if (k == s2.length()) break;
					if (s2.length()-k > s.length()-t) {
						flag = 0;
						break;
					}
				}
			}
			else flag = 0;
			cout << (flag ? "Yes\n" : "No\n");
		}
	}
	return 0;
}