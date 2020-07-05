#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, a, r;
	string s, aluno;
	while (cin >> p >> a >> r >> ws && (p || a || r)) {
		int maior = 0, t = 0;
		unordered_set<string> set;
		map<string, int> m;
		for (int i = 0; i < p; i++) {
			getline(cin, s);
			set.insert(s);
		}
		for (int i = 0; i < a; i++) {
			getline(cin, aluno);
			int atual = 0;
			for (int i = 0; i < r; i++) {
				getline(cin, s);
				auto it = set.find(s);
				if (it != set.end()) atual++;
			}
			m[aluno] = max(m[aluno], atual);
			maior = max(maior, atual);
		}
		for (auto it = m.begin(); it != m.end(); it++) {
			if (maior == it->second) {
				if (t) cout << ", ";
				cout << it->first;
				t++;
			}
		}
		cout << endl;
	}
	return 0;
}