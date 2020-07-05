#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	while (cin >> a >> b >> c && (a || b || c)) {
		if (a == b && b == c) {
			if (a == 13) cout << "*\n";
			else cout << a+1 << " " << b+1 << " " << c+1 << endl;
		}
		else if (a == b || b == c || a == c) {
			if (b == c) swap(a, c);
			else if (a == c) swap(c, b);
			if (a == 13 && c == 12) cout << "1 1 1\n";
			else if (c == 13) cout << "1 " << a+1 << " " << b+1 << endl;
			else if (c+1 != a) {
				if (c > a) cout << a << " " << b << " " << c+1 << endl;
				else cout << c+1 << " " << a << " " << b << endl;
			}
			else cout << a << " " << b << " " << c+2 << endl;
		}
		else cout << "1 1 2\n";
	}
	return 0;
}