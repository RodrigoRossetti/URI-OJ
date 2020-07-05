#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s1, s2;
	cin >> n;
	while (n--) {
		cin >> s1 >> s2;
		istringstream ss1(s1), ss2(s2);
		tm t1 = {}, t2 = {};
		ss1 >> get_time(&t1, "%y-%m-%d");
		ss2 >> get_time(&t2, "%y-%m-%d");
		cout << abs(difftime(mktime(&t1), mktime(&t2)))/(86400) << endl;
	}
	return 0;
}