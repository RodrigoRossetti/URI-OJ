#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	vector<string> v; 
	while (cin >> s && !s.empty() && s.length() > 1) v.push_back(s);
	int tam = s.length();
	int f = (v[0][0]-'0')*1000+(v[1][0]-'0')*100+(v[2][0]-'0')*10+(v[3][0]-'0');
	int l = (v[0][tam-1]-'0')*1000+(v[1][tam-1]-'0')*100+(v[2][tam-1]-'0')*10+(v[3][tam-1]-'0');
	for (int j = 1; j < tam-1; j++) {
		int m = (v[0][j]-'0')*1000+(v[1][j]-'0')*100+(v[2][j]-'0')*10+(v[3][j]-'0');
		char c = (f*m+l)%257;
		cout << c;
	}
	cout << '\n';
	return 0;
}