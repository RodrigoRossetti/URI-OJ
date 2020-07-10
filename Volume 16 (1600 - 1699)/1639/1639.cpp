#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	string s;
	while (cin >> a && a) {
		unordered_map<int, bool> mapa;
		while (!mapa[a]) {
			mapa[a] = 1;
			s = to_string(a*a);
			for (int i = s.length(); i < 8; i++) s = "0" + s;
			a = stoi(s.substr(s.length()/2-2, 4));
		}
		cout << mapa.size() << endl;
	}
	return 0;
}