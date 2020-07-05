#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool ultimoDia(int d, int m, int y) {
	switch (m) {
		case 4: case 6: case 9: case 11: return (d == 30);
		case 2:
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
				return (d == 29);
			else
				return (d == 28);
		default: return (d == 31);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d1, m1, y1, c1, d2, m2, y2, c2;
	while (cin >> n && n) {
		int total = 0, soma = 0;
		d2 = 0;
		while (n--) {
			cin >> d1 >> m1 >> y1 >> c1;
			if (d2) {
				if (d2 == 31 && m2 == 12 && d1 == 1 && m1 == 1 && y1 == y2+1) {
					total++;
					soma += c1-c2;
				}
				else if (y1 == y2 && ultimoDia(d2, m2, y2) && m1 == m2+1 && d1 == 1) {
					total++;
					soma += c1-c2;
				}
				else if (y1 == y2 && m1 == m2 && d1 == d2+1) {
					total++;
					soma += c1-c2;
				}
			}
			d2 = d1, m2 = m1, y2 = y1, c2 = c1;
		}
		cout << total << " " << soma << endl;
	}
	return 0;
}