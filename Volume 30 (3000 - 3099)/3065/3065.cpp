#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n = 1;
	while (cin >> m && m) {
		string str, s = "";
		cin >> str;
		vector<int> v(m);
		for (int i = 0, j = 0; i <= str.length(); i++) {
			if (str[i] == '+' || str[i] == '-' || i == str.length()) v[j] = stoi(s), s = "", j++;
			s += str[i];
		}
		cout << "Teste " << n << endl << accumulate(v.begin(), v.end(), 0) << endl << endl;
		n++;
	}
	return 0;
}