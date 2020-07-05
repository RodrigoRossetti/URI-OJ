#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int bit, x;
	while (cin >> bit && bit) {
		cin.ignore();
		vector<int> v;
		while (cin >> s && s != "0") {
			cin >> x;
			cin.ignore();
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
			printf("Package %03d\n", v[i]);
		puts("");
	}
	return 0;
}