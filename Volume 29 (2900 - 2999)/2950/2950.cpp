#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double n, x, y;
	cin >> n >> x >> y;
	cout << fixed << setprecision(2) << n/(x+y) << endl;
	return 0;
}