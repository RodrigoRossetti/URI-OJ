#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b, c, x, y, z;
	unsigned long long total;
	cin >> a >> b >> c >> x >> y >> z;
	total = floor(x/a)*floor(y/b)*floor(z/c);
	cout << total << endl;
	return 0;
}