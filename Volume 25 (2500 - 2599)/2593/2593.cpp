#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, atual = 0;
	string texto, s;
	getline(cin, texto);
	stringstream ss(texto);
	multimap<string, int> pos;
	typedef multimap<string, int>::iterator POSit;
	while (ss >> s) {
		pos.insert({s, atual});
		atual += s.length()+1;
	}
	cin >> n;
	while (n--) {
		cin >> s;
		pair<POSit, POSit> r = pos.equal_range(s);
		int t = 0;
		if (r.first == r.second) cout << -1;
		for (POSit it = r.first; it != r.second; it++, t++) {
			if (t) cout << " ";
			cout << it->second;
		}
		cout << endl;
	}
	return 0;
}