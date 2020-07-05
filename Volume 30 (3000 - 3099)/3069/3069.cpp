#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, s, t = 1;
	while (cin >> p >> s && p) {
		cout << "Teste " << t++ << endl;
		vector<pair<int, int>> v(s);
		for (int i = 0; i < s; i++) cin >> v[i].first >> v[i].second;
		sort(v.begin(), v.end());
		int inicio = v[0].first, fim = v[0].second;
		for (int i = 1; i < s; i++) {
			if (v[i].first > fim) {
				cout << inicio << " " << fim << endl;
				inicio = v[i].first;
				fim = v[i].second;
			}
			else if (v[i].second > fim)
				fim = v[i].second;
		}
		cout << inicio << " " << fim << endl << endl;
	}
	return(0);
}
