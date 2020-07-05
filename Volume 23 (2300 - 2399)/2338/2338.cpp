#include <bits/stdc++.h>
using namespace std;

void morse(string s) {
	if (s == ".-") cout << 'a';
	if (s == "-...") cout << 'b';
	if (s == "-.-.") cout << 'c';
	if (s == "-..") cout << 'd';
	if (s == ".") cout << 'e';
	if (s == "..-.") cout << 'f';
	if (s == "--.") cout << 'g';
	if (s == "....") cout << 'h';
	if (s == "..") cout << 'i';
	if (s == ".---") cout << 'j';
	if (s == "-.-") cout << 'k';
	if (s == ".-..") cout << 'l';
	if (s == "--") cout << 'm';
	if (s == "-.") cout << 'n';
	if (s == "---") cout << 'o';
	if (s == ".--.") cout << 'p';
	if (s == "--.-") cout << 'q';
	if (s == ".-.") cout << 'r';
	if (s == "...") cout << 's';
	if (s == "-") cout << 't';
	if (s == "..-") cout << 'u';
	if (s == "...-") cout << 'v';
	if (s == ".--") cout << 'w';
	if (s == "-..-") cout << 'x';
	if (s == "-.--") cout << 'y';
	if (s == "--..") cout << 'z';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ponto = 0, traco = 0;
	string s, str;
	cin >> n >> ws;
	while (n--) {
		getline(cin, s);
		s += "...";
		str = "";
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '=' && s[i+1] == '.') str += '.';
			else if (s[i] == '=' && s[i+1] == '=' && s[i+2] == '=' && s[i+3] == '.') str += '-', i += 2;
			else if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.' && s[i+3] == '.' && s[i+4] == '.' && s[i+5] == '.' && s[i+6] == '.') {
				i += 5;
				morse(str);
				cout << ' ';
				traco = ponto = 0;
				str = "";
			}
			else if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
				i++;
				morse(str);
				traco = ponto = 0;
				str = "";
			}
		}
		cout << endl;
	}
	return 0;
}