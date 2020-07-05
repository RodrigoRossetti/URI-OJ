#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set<string> conj;
	int n;
	cin >> n;
	while (n--) {
		bool flag = 1;
		string s = "", aux;
		char c;
		do {
			cin >> c;
			if (flag && c != '.' && c != '+' && c != '@' && flag) s += c;
			else if (c == '+') flag = 0;
		} while (c != '@');
		s += '@';
		cin >> aux;
		s += aux;
		conj.insert(s);
	}
	cout << conj.size() << endl;
	return 0;
}