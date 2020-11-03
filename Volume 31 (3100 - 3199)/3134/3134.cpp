#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a+b+c == d || a+b+d == c || a+c+d == c || b+c+d == a) cout << "YES\n";
	else if (a+b == c+d || a+c == b+d || a+d == b+c) cout << "YES\n";
	else cout << "No\n";
	return 0;
}