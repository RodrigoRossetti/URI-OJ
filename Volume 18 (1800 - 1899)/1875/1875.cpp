#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, p, r, g, bl;
	char a, b;
	cin >> c;
	while (c--) {
		r = g = bl = 0;
		cin >> p;
		while (p--) {
			cin >> a >> b;
			if (a == 'G') b == 'B' ? g += 2 : g++;
			else if (a == 'R') b == 'G' ? r += 2 : r++;
			else if (a == 'B') b == 'R' ? bl += 2 : bl++;
		}
		if (r > bl && r > g) cout << "red\n";
		else if (bl > r && bl > g) cout << "blue\n";
		else if (g > r && g > bl) cout << "green\n";
		else if (r == g && r == bl) cout << "trempate\n";
		else if (r == g || r == bl || g == bl) cout << "empate\n";
	}
	return 0;
}