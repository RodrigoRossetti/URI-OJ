#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k, n, x;
	cin >> k >> n;
	map<int, int> mapa;
	for (int i = 1; i <= k; i++) mapa[i] = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		mapa[x]++;
	}
	vector<pair<int, int>> v;
	for (auto it : mapa) v.push_back({it.second, it.first});
	sort(v.begin(), v.end());
	if (n < 3) cout << "*\n";
	else {
		pair<int, int> maior = v[v.size()-1], menor = v[0], meio = v[1], meio2 = v[v.size()-2];
		if (meio.first != meio2.first || maior.first-meio.first > 1 || meio.first-menor.first > 1)
			cout << "*\n";
		else if (meio.first == menor.first) cout << '-' << maior.second << endl;
		else if (meio.first == maior.first) cout << '+' << menor.second << endl;
		else cout << '-' << maior.second << " " << '+' << menor.second << endl;
	}
	return 0;
}