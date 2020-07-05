#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, fim, aux;
	while (getline(cin, s)) {
		int i = 0;
		bool flag, um = 0;
		vector<string> v;
		fim = "";
		do {
			i++, flag = 1;
			aux = s.substr(s.length()-i, i);
			for (int j = s.length()-i-1, k = aux.length()-1; k >= 0; j--, k--) {
				if (s[j] != aux[k]) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				um = 1;
				v.push_back(s.substr(0, s.length()-i));
			}
		} while (i < s.length()-1);
		if (!um) cout << s << endl;
		else {
			reverse(v.begin(), v.end());
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << endl;
		}
	}
	return 0;
}