#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, linha = "";
	while (cin >> s) {
		if (s == "<hr>") {
			if (linha.length()) cout << linha.substr(0, linha.length()-1) << endl;
			linha = "";
			cout << "--------------------------------------------------------------------------------\n";
		}
		else if (s == "<br>")  {
			if (linha.length()) cout << linha.substr(0, linha.length()-1);
			linha = "";
			cout << endl;
		}
		else if (linha.length()+s.length() <= 80) linha += s + ' ';
		else {
			cout << linha.substr(0, linha.length()-1) << endl;
			linha = s + ' ';
		}
	}
	if (linha.length()) cout << linha.substr(0, linha.length()-1) << endl;
	return 0;
}