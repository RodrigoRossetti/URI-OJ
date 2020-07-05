#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, maior = "";
	while (getline(cin, s) && s != "0") {
		stringstream ss(s);
		bool flag = 0;
		while (ss >> s) {
			if (flag) cout << '-';
			if (s.length() >= maior.length()) maior = s;
			flag = 1;
			cout << s.length();
		}
		cout << endl;
	}
	cout << endl;
	cout << "The biggest word: " << maior << endl;
	return 0;
}