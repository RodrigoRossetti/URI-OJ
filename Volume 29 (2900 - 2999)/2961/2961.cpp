#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	vector<string> v(4);
	vector<int> count(4, 0);
	cin >> n >> ws;
	while (n--) {
		getline(cin, s);
		for (int i = 0; i <4; i++)
			getline(cin, v[i]);
		getline(cin, s);
		for (int i = 0; i <4; i++) {
			getline(cin, s);
			if (s != v[i])
				count[i]++;
		}
	}
	bool flag = 0;
	int maior = *max_element(count.begin(), count.end());
	for (int i = 0; i < 4; i++) {
		if (count[i] == maior) {
			if (flag) cout << " ";
			cout << i+1;
			flag = 1;
		}
	}
	cout << endl;
	return 0;
}