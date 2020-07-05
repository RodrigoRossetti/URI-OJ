#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, a, b, caso = 1;
	while (cin >> r && r) {
		int t1 = 0, t2 = 0;
		while (r--) {
			cin >> a >> b;
			t1 += a, t2 -= a;
			t2 += b, t1 -= b;
		}
		cout << "Teste " << caso << endl;
		cout << (t1 > t2 ? "Aldo\n" : "Beto\n") << endl;
		caso++;
	}
	return 0;
}