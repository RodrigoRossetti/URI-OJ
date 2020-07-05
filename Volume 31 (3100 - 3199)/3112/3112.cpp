#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, bool> mapa;
	map<char, bool> flag;
	string e, m, aux;
	char d;
	int n;
	bool ambiguo = 0;
	cin >> n;
	while (n--) {
		cin >> e >> d;
		flag[d] = 0;
		for (int len = 1; len <= e.length(); len++) {
			for (int i = 0; i <= e.length() - len; i++) {
				aux = "";
				for (int k = i, j = i+len-1; k <= j; k++)
					aux += e[k];
				cout << aux << " " << mapa[aux] << endl;
				if (mapa[aux]) {
					flag[d] = 1;
					break;
				}
			}
		}
		mapa[e] = 1;
	}
	cin >> m;
	for (int i = 0; i < m.length(); i++) {
		if (flag[m[i]]) {
			ambiguo = 1;
			break;
		}
	}
	cout << (ambiguo ? "Yes" : "No") << endl;
	return 0;
}