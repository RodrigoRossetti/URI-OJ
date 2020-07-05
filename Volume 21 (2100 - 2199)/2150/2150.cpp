#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int total;
	string alfabeto, s;
	while (getline(cin, alfabeto) && !alfabeto.empty()) {
		total = 0;
		getline(cin, s);
		if (s.empty()) break;
		for (int i = 0; i < s.length(); i++)
			for (int j = 0; j < alfabeto.length(); j++)
				if (alfabeto[j] == s[i]) total++;
		cout << total << endl;
	}
	return 0;
}