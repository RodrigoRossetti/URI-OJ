#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	char c;
	string s1, s2;
	while (cin >> n && n) {
		unordered_map<string, int> m;
		for (int i = 0; i < n; i++) {
			cin >> s1 >> a;
			m[s1] = a;
		}
		for (int i = 0; i < n/2; i++) {
			cin >> s1 >> a >> c >> b >> s2;
			m[s1] += 3*a, m[s2] += 3*b;
			if (a == b) m[s1]++, m[s2]++;
			else if (a > b) m[s1] += 5;
			else if (b > a) m[s2] += 5;
		}
		auto x = max_element(m.begin(), m.end(), [](const pair<string, int> &a, const pair<string, int> &b) { return a.second < b.second; } );
		if (x->first == "Sport") cout << "O Sport foi o campeao com " << x->second << " pontos :D\n\n";
		else cout << "O Sport nao foi o campeao. O time campeao foi o " << x->first << " com " << x->second << " pontos :(\n\n";
	}
	return 0;
}