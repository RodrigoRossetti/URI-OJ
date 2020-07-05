#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x1, y1, x2, y2, n, x, y, t = 1;
	while (cin >> x1 >> y1 >> x2 >> y2 && (x1 || y1)) {
		int total = 0;
		cin >> n;
		while (n--) {
			cin >> x >> y;
			if (x >= x1 && x <= x2 && y <= y1 && y >= y2) total++;
		}
		cout << "Teste\n" << t++ << endl << total << endl;
	}
	return 0;
}