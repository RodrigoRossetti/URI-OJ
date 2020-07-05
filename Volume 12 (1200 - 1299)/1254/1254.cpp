#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string original, sub, s;
	while (getline(cin, original)) {
		getline(cin, sub), getline(cin, s);
		bool flag = 0;
		string fim = "";
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '<') flag = 1;
			if (s[i] == '>') flag = 0;
			if (flag && tolower(s[i]) == tolower(original[0])) {
				bool subs = 1;
				for (int j = 0; j < original.length() && j < s.length(); j++) {
					if (tolower(s[i+j]) != tolower(original[j])) {
						subs = 0;
						break;
					}
				}
				if (subs) {
					fim += sub;
					i += original.length()-1;
				}
				else fim += s[i];
			}
			else fim += s[i];
		}
		cout << fim << endl;
	}
	return 0;
}