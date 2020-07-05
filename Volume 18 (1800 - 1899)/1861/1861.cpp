#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2;
	map<string, int> total;
	unordered_map<string, bool> morto;
	while (cin >> s1 >> s2) {
		total[s1]++;
		morto[s2] = 1;
	}
	cout << "HALL OF MURDERERS\n";
	for (auto it = total.begin(); it != total.end(); it++)
		if (!morto[it->first])
			cout << it->first << " " << it->second << endl;
	return 0;
}