#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double d, vf, vg;
	while (cin >> d >> vf >> vg) {;
		double tf = 12/vf, tg = sqrt(d*d+12*12)/vg;
		cout << (tf >= tg ? "S\n" : "N\n");
	}
	return 0;
}