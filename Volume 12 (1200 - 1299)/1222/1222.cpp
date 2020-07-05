#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, l, c;
	string s;
	while (cin >> n >> l >> c) {
		int atual = 0, linhas = 1;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (atual+s.length() == c) {
				linhas++;
				atual = 0;
			}
			else if (atual+s.length() > c) {
				linhas++;
				atual = s.length();
				if (atual+1 < c) atual++;
				else if (atual+1 >= c) {
					linhas++;
					atual = 0;
				}
			}
			else {
				atual += s.length();
				if (atual+1 < c) atual++;
				else if (atual+1 >= c) {
					linhas++;
					atual = 0;
				}
			}
		}
		if (atual == 0) linhas--;
		cout << ceil((double)linhas/l) << endl;
	}
	return 0;
}