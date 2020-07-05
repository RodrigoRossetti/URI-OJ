#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s1;
	cin >> n;
	while (n--) {
		cin >> s1;
		vector<bool> visitado(s1.length(), 0);
		bool a = 0, b = 0, c = 0, d = 0;
		int ia, ib, ic, id;
		for (int j = 0; j < s1.length(); j++) {
			a = b = c = d = 0;
			if (s1[j] == '7') {
				for (int i = j; i < s1.length(); i++) {
					if (!visitado[i] && s1[i] == 'Q' && !a && !b && !c && !d) a = 1, ia = i;
					else if (!visitado[i] && s1[i] == 'J' && a && !b && !c && !d) b = 1, ib = i;
					else if (!visitado[i] && s1[i] == 'K' && a && b && !c && !d) c = 1, ic = i;
					else if (!visitado[i] && s1[i] == 'A' && a && b && c && !d) d = 1, id = i;
					if (a && b && c && d) {
						visitado[j] = visitado[ia] = visitado[ib] = visitado[ic] = visitado[id] = 1;
						i = s1.length();
					}
				}
			}
		}
		int total = 0;
		for (int i = 0; i < s1.length(); i++)
			if (!visitado[i]) total++;
		cout << total << endl;
	}
	return 0;
}