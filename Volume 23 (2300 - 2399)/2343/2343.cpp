#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y;
	cin >> n;
	map<pair<int, int>, int> mapa;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		mapa[{x, y}]++;
	}
	bool flag = 0;
	for (auto it = mapa.begin(); it != mapa.end(); it++) {
		if (it->second > 1) {
			flag = 1;
			break;
		}
	}
	cout << flag << endl;
	return 0;
}