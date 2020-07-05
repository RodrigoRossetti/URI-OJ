#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d, total = 0;
	vector<int> arr(26, 0);
	cin >> n >> d >> ws;
	string s;
	while (n--) {
		getline(cin, s);
		int atual = 0, k = tolower(s[0])-'a';
		for (int i = 0; i < s.length(); i++)
			if (s[i] != ' ') atual++;
		if (atual > arr[k]) arr[k] = atual;
	}
	sort(arr.rbegin(), arr.rend());
	for (int i = 0; d-- && i < 26; i++)
		total += arr[i];
	cout << total << '\n';
	return 0;
}