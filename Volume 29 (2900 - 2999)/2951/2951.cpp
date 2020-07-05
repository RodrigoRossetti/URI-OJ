#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, g, v, x, total = 0;
	char r;
	map<char, int> mapa;
	cin >> n >> g;
	while (n--) {
		cin >> r >> v;
		mapa[r] = v;
	}
	cin >> x;
	while (x--) {
		cin >> r;
		total += mapa[r];
	}
	cout << total << endl;
	total >= g ? cout << "You shall pass!\n" : cout << "My precioooous\n";
	return 0;
}