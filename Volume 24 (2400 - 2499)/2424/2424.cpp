#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	cin >> x >> y;
	if (x >= 0 && x <= 432 && y >= 0 && y <= 468) cout << "dentro\n";
	else cout << "fora\n";
	return 0;
}