#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k, n, total = 0;
	string a, b;
	cin >> k >> ws;
	getline(cin, a);
	cin >> n >> ws;
	vector<vector<int>> count(k, vector<int>(26, 0));
	while (n--) {
		getline(cin, b);
		for (int i = 0; i < k; i++)
			if (a[i] != b[i])
				count[i][b[i]-'A']++;
	}
	for (int i = 0; i < k; i++)
		total += *max_element(count[i].begin(), count[i].end());
	cout << total << endl;
	return 0;
}