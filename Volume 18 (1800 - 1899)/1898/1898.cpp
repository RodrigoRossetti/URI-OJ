#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2;
	string a = "", b = "";
	getline(cin, s1);
	getline(cin, s2);
	cout << "cpf ";
	int total = 0;
	bool flag = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (isdigit(s1[i])) {
			if (flag && total == 2) break;
			if (!flag && total < 10) cout << s1[i];
			else if (!flag && total == 10) cout << s1[i] << endl;
			else a += s1[i];
			total++;
		}
		else if (s1[i] == '.') flag = 1, total = 0, a += '.';
	}
	flag = 0, total = 0;
	for (int i = 0; i < s2.length(); i++) {
		if (isdigit(s2[i])) {
			if (flag && total == 2) break;
			b += s2[i];
			total++;
		}
		else if (s2[i] == '.') flag = 1, total = 0, b += '.';
	}
	cout << fixed << setprecision(2);
	cout << stod(a)+stod(b) << endl;
	return 0;
}