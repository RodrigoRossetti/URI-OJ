#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, total;
	string s;
	while (cin >> n && n) {
		total = n;
		unordered_map<string, bool> m;
		unordered_map<string, int> ordem;
		for (int i = 0; i < n; i++) {
			cin >> s;
			m[s] = 1, ordem[s] = i;
		}
		queue<int> q;
		for (int i = 0; i < 52; i++) {
			cin >> k;
			q.push(k);
		}
		bool flag = 1;
		while (flag) {
			int menor = q.front();
			vector<int> menores;
		}
	}
	return 0;
}