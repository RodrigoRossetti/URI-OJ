#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	char s;
	cin >> n >> s;
	while (n--) {
		cin >> k;
		if (k == 1 && s != 'C') s == 'A' ? s = 'B' : s = 'A';
		else if (k == 2 && s != 'A') s == 'B' ? s = 'C' : s = 'B';
		else if (k == 3 && s != 'B') s == 'C' ? s = 'A' : s = 'C';
	}
	cout << s << endl;
	return 0;
}