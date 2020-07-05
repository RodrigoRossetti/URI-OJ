#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	vector<pair<int, int>> freq(101);
	for (int i = 0; i <= 100; i++)
		freq[i] = make_pair(0, i);
	cin >> n;
	while (n--) {
		cin >> k;
		freq[k].first++;
	}
	sort(freq.rbegin(), freq.rend());
	cout << freq[0].second << endl;
	return 0;
}