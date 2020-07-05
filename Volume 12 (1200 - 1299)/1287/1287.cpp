#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, fim;
	while (getline(cin, s)) {
		fim = "";
		bool flag = 1, zero = 0, dif = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0' || s[i] == 'o' || s[i] == 'O') {
				zero = 1;
				if ((s[i] == '0' && !fim.empty()) || s[i] == 'o' || s[i] == 'O') fim += '0';
			}
			else if (isdigit(s[i])) fim += s[i], dif = 1;
			else if (s[i] == 'l') fim += '1', dif = 1;
			else if (s[i] == ' ' || s[i] == ',') continue;
			else flag = zero = dif = 0, i = s.length();
		}
		if (zero && !dif) cout << "0\n";
		else {
			if (fim.empty() || fim.length() > 10 || (fim.length() == 10 && fim > "2147483647")) flag = 0;
			if (flag) cout << stoi(fim) << endl;
			else cout << "error\n";
		}
	}
	return 0;
}