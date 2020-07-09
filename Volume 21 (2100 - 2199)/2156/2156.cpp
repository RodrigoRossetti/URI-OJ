#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, c, in, posI, posJ;
	string s;
	while (cin >> l >> c >> in >> ws && (l || c || in)) {
		int total = 0;
		char dir = 'R';
		vector<string> v(l);
		bool flag = 0;
		for (int i = 0; i < l; i++) {
			getline(cin, v[i]);
			for (int j = 0; !flag && j < c; j++) {
				if (v[i][j] == '<') posI = i, posJ = j, v[i][j] = ' ', flag = 1;
			}
		}
		getline(cin, s);
		for (auto &ch : s) {
			if (ch == 'W') {
				if (dir == 'D' && posI+1 < l && v[posI+1][posJ] != '#') posI++;
				if (dir == 'U' && posI-1 >= 0 && v[posI-1][posJ] != '#') posI--;
				if (dir == 'R' && posJ+1 < c && v[posI][posJ+1] != '#') posJ++;
				if (dir == 'L' && posJ-1 >= 0 && v[posI][posJ-1] != '#') posJ--;
				if (v[posI][posJ] == '*') v[posI][posJ] = ' ', total++;
			}
			else dir = ch;
		}
		cout << total << endl;
	}
	return 0;
}