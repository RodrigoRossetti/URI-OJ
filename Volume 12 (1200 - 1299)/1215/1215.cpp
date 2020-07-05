#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "";
	char c;
	set<string> set;
	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') s += c;
		else if (c >= 'A' && c <= 'Z') s += tolower(c);
		else {
			set.insert(s);
			s = "";
		}
	}
	set.insert(s);
	for (auto str : set) if (str != "") cout << str << endl;
	return 0;
}