#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int ouro = 0, prata = 0, bronze = 0;
} medalhas;

bool comp(pair<string, medalhas> &a, pair<string, medalhas> &b) {
	return (a.second.ouro > b.second.ouro || (a.second.ouro == b.second.ouro && a.second.prata > b.second.prata) ||
			(a.second.ouro == b.second.ouro && a.second.prata == b.second.prata && a.second.bronze > b.second.bronze) ||
			(a.second.ouro == b.second.ouro & a.second.prata == b.second.prata && a.second.bronze == b.second.bronze &&
			a.first < b.first));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	unordered_map<string, medalhas> m;
	while (getline(cin, s)) {
		getline(cin, s);
		if (m.find(s) == m.end()) m[s].ouro = m[s].prata = m[s].bronze = 0;
		m[s].ouro++;
		getline(cin, s);
		if (m.find(s) == m.end()) m[s].ouro = m[s].prata = m[s].bronze = 0;
		m[s].prata++;
		getline(cin, s);
		if (m.find(s) == m.end()) m[s].ouro = m[s].prata = m[s].bronze = 0;
		m[s].bronze++;
	}
	vector<pair<string, medalhas>> v;
	for (unordered_map<string, medalhas>::iterator it = m.begin(); it != m.end(); it++)
		v.push_back({it->first, it->second});
	sort(v.begin(), v.end(), comp);
	cout << "Quadro de Medalhas\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second.ouro << " " << v[i].second.prata << " " << v[i].second.bronze << endl;
	return 0;
}