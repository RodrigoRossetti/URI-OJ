#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(4);
	double a, d, r;
	while (cin >> a >> d >> r) {
		if (r <= 90) {
			double ang1 = 90-r, ang2 = 180-90-ang1;
			cout << a-((d/sin(ang2*M_PI/180))*sin(ang1*M_PI/180)) << endl;
		}
		else {
			double ang1 = r-90, ang2 = 180-r, ang3 = 180-90-ang2, ang4 = 90-ang3;
			cout << a+((d/sin(ang4*M_PI/180))*sin(ang1*M_PI/180)) << endl;
		}
	}
	return 0;
}