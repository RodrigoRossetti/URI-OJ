#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, str = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        str += tolower(s[i]);
    str.find("zelda") == string::npos ? cout << "Link Tranquilo\n" : cout << "Link Bolado\n";
	return 0;
}