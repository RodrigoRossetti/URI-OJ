#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, k;
	while (cin >> n && n) {
		unordered_map<long long, bool> mapa;
		while (n--) {
			cin >> k;
			if (mapa[k]) mapa.erase(k);
			else mapa[k] = 1;
		}
		for (auto it : mapa) cout << it.first << endl;
	}
	return 0;
}