#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(2);
	int n, x, y, i = 0;
	while (cin >> n && n) {
		map<int, int> mapa;
		int total = 0, soma = 0;
		while (n--) {
			cin >> x >> y;
			total += x, soma += y;
			mapa[floor((double)y/x)] += x;
		}
		if (i) cout << endl;
		cout << "Cidade# " << ++i << ":\n";
		bool flag = 0;
		for (auto &p : mapa) {
			if (flag) cout << " ";
			cout << p.second << "-" << p.first;
			flag = 1;
		}
		cout << endl;
		cout << "Consumo medio: " << soma/total << "." << setw(2) << setfill('0')
             <<  100*(soma%total)/total << " m3.\n";
	}
	return 0;
}