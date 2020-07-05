#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b = 0;
	cin >> n;
	bool flag = 1;
	while (n--) {
		cin >> a;
		if (abs(a-b) > 8) {
			flag = 0;
			break;
		}
		b = a;
	}
	cout << (flag ? "S\n" : "N\n");
	return 0;
}