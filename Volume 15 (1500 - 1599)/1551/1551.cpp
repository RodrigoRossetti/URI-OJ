#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, total;
	string s;
	cin >> n;
    cin.ignore();
	while(n--) {
        total = 0;
		getline(cin, s);
		int alf[26];
		memset(alf, 0, sizeof(alf));
		for (int i = 0; i < s.length(); ++i) {
			if(s[i] > 96 && s[i] < 123) {
				if(alf[(int)s[i] - 97] == 0) {
					alf[(int)s[i] - 97]++;
					total++;
				}
			}
		}
		if(total == 26) cout << "frase completa\n";
		else if (total >= 13) cout << "frase quase completa\n";
		else cout << "frase mal elaborada\n";
	}
	return 0;
}