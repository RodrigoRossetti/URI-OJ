#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void expand(string str, int low, int high, vector<string> &palindromos) {
	while (low >= 0 && high < str.length() && str[low] == str[high]) {
		palindromos.push_back(str.substr(low, high - low + 1));
		low--, high++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	string s;
	while (cin >> n >> m >> ws) {
		getline(cin, s);
		vector<string> v(m);
		vector<string> palindromos;
		for (int i = 0; i < m; i++) getline(cin, v[i]);
		for (int i = 0; i < n; i++) {
			expand(s, i, i, palindromos);
			expand(s, i, i+1, palindromos);
		}
		int total = 0;
		bool flag;
		for (auto s2 : palindromos) {
			flag = 1;
			for (auto it = v.begin(); it != v.end() && flag; it++)
				if (s2.find(*it) != string::npos)
					flag = 0;
			if (flag) total++;
		}
		cout << total << endl;
	}
	return 0;
}