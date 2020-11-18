#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set<string> c;
	string s;
	while (getline(cin, s)) c.insert(s);
	cout << c.size() << endl;
	return 0;
}