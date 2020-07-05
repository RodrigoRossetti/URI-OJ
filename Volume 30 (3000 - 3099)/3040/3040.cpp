#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, h, d, g;
	cin >> n;
	while (n--) {
		cin >> h >> d >> g;
		if (h >= 200 && h <= 300 && d >= 50 && g >= 150) cout << "Sim\n";
		else cout << "Nao\n";
	}
	return 0;
}