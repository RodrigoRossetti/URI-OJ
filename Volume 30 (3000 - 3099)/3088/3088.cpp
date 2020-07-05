#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		s += "f";
		for (int i = 0; i < s.length()-1; i++) {
			if (s[i] == ' ' && (s[i+1] == '.' || s[i+1] == ',')) i++;
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}