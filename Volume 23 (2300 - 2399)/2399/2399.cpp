#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, atual;
	vector<bool> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		atual = 0;
		if (v[i] == 1) atual++;
		if (i+1 < n && v[i+1] == 1) atual++;
		if (i-1 >= 0 && v[i-1] == 1) atual++;
		cout << atual << endl;
	}
	return 0;
}