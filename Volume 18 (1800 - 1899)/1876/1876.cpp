#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (cin >> s) {
		int total = 0, atual = 0;
		bool flag = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'x') {
				if (flag) total = max(total, atual/2), atual = 0;
				else flag = 1, total = atual, atual = 0;
			}
			else atual++;
		}
		total = max(total, atual);
		cout << total << endl;
	}
	return 0;
}