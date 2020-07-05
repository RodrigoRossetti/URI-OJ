#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, aux, aux2, sub;
	while (getline(cin, s) && s != ".") {
		stringstream ss(s);
		vector<unordered_map<string, int>> v(26);
		while (ss >> aux) {
			if (aux.length() > 2) v[aux[0]-'a'][aux]++;
		}
		int total = 0;
		vector<pair<bool, pair<string, string>>> abr(26, {0, {"0", "0"}});
		for (int i = 0; i < 26; i++) {
			sub = "";
			int maior = 0;
			for (auto it = v[i].begin(); it != v[i].end(); it++) {
				if ((it->first.length()-2)*it->second > maior) {
					maior = (it->first.length()-2)*it->second;
					sub = it->first;
				}
			}
			if (sub != "") {
				aux = sub[0];
				aux += ".";
				int pos = 0;
				stringstream ss2(s);
				s = "";
				bool f = 0;
				while (ss2 >> aux2) {
					if (f) s += " ";
					if (sub == aux2) s += aux;
					else s += aux2;
					f = 1;
				}
				total++;
				abr[i] = {1, {sub, aux}};
			}
		}
		cout << s << endl;
		cout << total << endl;
		for (int i = 0; i < 26; i++) {
			if (abr[i].first)
				cout << abr[i].second.second << " = " << abr[i].second.first << endl;
		}
	}
	return 0;
}