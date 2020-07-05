#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, l, c, p;
	string s;
	cin >> t;
	while (t--) {
		cin >> l >> c;
		vector<vector<char>> v1(l, vector<char>(c)), v2(c, vector<char>(l));
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < c; j++) {
				cin >> v1[i][j];
				v2[j][i] = v1[i][j];
			}
		}
		cin >> p;
		while (p--) {
			cin >> s;
			int len = s.length(), total = 0;
			for (int i = 0; i < l; i++) {
				for (int j = 0; j < c; j++) {
					if (c-len-j >= 0) {
						for (int k = j, pos = 0; k < c; k++, pos++) {
							if (v1[i][k] == s[pos]) {
								if (pos == len-1) total++;
							}
							else k = c;
						}
					}
				}
			}
			if (len > 1) {
				for (int i = 0; i < c; i++) {
					for (int j = 0; j < l; j++) {
						if (l-len-j >= 0) {
							for (int k = j, pos = 0; k < l; k++, pos++) {
								if (v2[i][k] == s[pos]) {
									if (pos == len-1) total++;
								}
								else k = l;
							}
						}
					}
				}
			}
			cout << total << endl;
		}
	}
	return 0;
}