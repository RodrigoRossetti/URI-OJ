#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a;
	string s, aux;
	while (getline(cin, s)) {
		stringstream c(s);
		c >> aux;
		n = stoi(aux);
		c >> aux;
		a = stoi(aux);
		unordered_map<string, int> m;
		int total = 0;
		while (n--) {
			getline(cin, s);
			stringstream ss(s);
			s = "";
			while (ss >> aux) s += aux[0];
			m[s]++;
			if (m[s] > 1) total++;
		}
		cout << total << endl;
	}
	return 0;
}