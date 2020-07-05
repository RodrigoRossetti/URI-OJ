#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0, possivel = 1, pontos = 0, tracos = 0;
	vector<string> v;
	string s;
	cin >> n >> ws;
	while (n--) {
		getline(cin, s);
		v.push_back(s);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i][0] == '-' && i == v.size()-1 && pontos > 0) tracos++, pontos = 0, total++;
		else if (v[i][0] == '-' && pontos > 0) tracos++, pontos = 0, total++;
		else if (v[i][0] == '-') tracos++, pontos = 0;
		if (v[i][0] == '.') pontos++, tracos = 0;
		if (pontos > 2) {
			possivel = 0;
			break;
		}
		if (v[i][0] == '.' && i == v.size()-1) total++;
	}
	if (possivel == 0) cout << "N\n";
	else cout << total << endl;
	return 0;
}