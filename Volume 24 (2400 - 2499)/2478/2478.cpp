#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s, p1, p2, p3;
	multimap<string, string> mapa;
	cin >> n >> ws;
	for (int i = 0; i < n; i++) {
		cin >> s >> p1 >> p2 >> p3;
		mapa.insert(make_pair(s, p1));
		mapa.insert(make_pair(s, p2));
		mapa.insert(make_pair(s, p3));
	}
	while (cin >> s >> p1) {
		bool flag = true;
		for (multimap<string, string>::iterator it = mapa.begin(); it != mapa.end(); it++) {
			if (it->first == s && it->second == p1 && flag) {
				cout << "Uhul! Seu amigo secreto vai adorar o/\n";
				flag = false;
			}
		}
		if (flag) cout << "Tente Novamente!\n";
	}
	return 0;
}