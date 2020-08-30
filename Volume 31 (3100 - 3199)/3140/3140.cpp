#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, aux;
	bool flag = 0;
	while (getline(cin, s)) {
		stringstream ss(s);
		ss >> aux;
		if (aux == "<body>") flag = 1;
		else if (aux == "</body>") flag = 0;
		else if (flag) cout << s << endl;
	}
	return 0;
}