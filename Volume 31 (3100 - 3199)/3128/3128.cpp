#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	if (a < 6 || b < 6) cout << "NO\n";
	else if (a >= 18 || b >= 18) cout << "YES\n";
	else if (a >= 14 && b >= 14) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}