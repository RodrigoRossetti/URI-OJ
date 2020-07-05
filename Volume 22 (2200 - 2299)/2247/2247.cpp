#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, t = 1;
	while (cin >> n && n) {
		cout << "Teste " << t++ << endl;
		int a = 0, b = 0;
		while (n--) {
			cin >> x >> y;
			a += x, b += y;
			cout << a-b << endl;
		}
		cout << endl;
	}
	return 0;
}