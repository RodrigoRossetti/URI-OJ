#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
const double area = 70*160/2;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int b, t, r;
	cin >> b >> t;
	if (b > t) swap(b, t);
	double a = b*70 + (double)(t-b)*70/2;
	if (a > area) r = 1;
	else if (a < area) r = 2;
	else r = 0;
	cout << r << endl;
	return 0;
}