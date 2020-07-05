#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a*b == c*d || a*d == b*c) cout << "S\n";
	else cout << "N\n";
	return 0;
}