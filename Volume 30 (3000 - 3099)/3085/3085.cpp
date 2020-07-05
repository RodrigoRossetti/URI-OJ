#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, x, y, i = 0, j = 0, it = 0;
	char c;
	bool flag = 1;
	cin >> n >> k >> x >> y;
	int d1 = abs(x-i), d2 = abs(y-j);
	double dist = sqrt(d1*d1+d2*d2);
	if (dist > k) cout << "Trap 1\n";
	else {
		while (n--) {
			it++;
			cin >> c;
			if (c == 'D') i++;
			else if (c == 'E') i--;
			else if (c == 'C') j++;
			else if (c == 'B') j--;
			d1 = abs(x-i), d2 = abs(y-j);
			dist = sqrt(d1*d1+d2*d2);
			if (dist > k) {
				flag = 0;
				break;
			}
		}
		if (i != x || j != y) flag = 0;
		if (flag) cout << "Sucesso\n";
		else cout << "Trap " << it << endl;
	}
	return 0;
}