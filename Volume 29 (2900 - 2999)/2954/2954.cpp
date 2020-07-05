#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total, atual;
	string s;
	cin >> n >> ws;
	while (n--) {
		getline(cin, s);
		s += ".....";
		total = atual = 0;
		for (int i = 0; i < s.length(); i++) {
			if (tolower(s[i]) == 'j' && tolower(s[i+1]) == 'o' && tolower(s[i+2]) == 'g'&& tolower(s[i+3]) == 'o') {
				atual += 4;
				i += 4;
				if (atual > total) total = atual;
				atual = 0;
			}
			else if (tolower(s[i]) == 'p' && tolower(s[i+1]) == 'e' && tolower(s[i+2]) == 'r'&& tolower(s[i+3]) == 'd' && tolower(s[i+3]) == 'i') {
				atual += 5;
				i += 5;
				if (atual > total) total = atual;
				atual = 0;
			}
			else if (s[i] != '.' && s[i] != ',' && s[i] != ' ') atual++;
		}
		cout << total << endl;
	}
	return 0;
}