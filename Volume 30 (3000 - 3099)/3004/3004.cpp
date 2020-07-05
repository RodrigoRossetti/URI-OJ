#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, c, d;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d;
		if (max(c, d) > max(a, b) && min(c, d) > min(a, b)) cout << "S\n";
		else cout << "N\n";
	}
	return 0;
}