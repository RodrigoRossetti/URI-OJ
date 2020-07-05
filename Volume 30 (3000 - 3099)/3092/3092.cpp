#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s1;
	cin >> n >> ws;
	while (n--) {
		getline(cin, s1);
		queue<int> q;
		for (int i = 0; i < s1.length(); i++) if (s1[i] == 'Q') q.push(i);
		bool a = 0, b = 0, c = 0;
		while (!q.empty()) {
			a = b = c = 0;
			int k = q.front();
			q.pop();
			for (int i = k; i < s1.length(); i++) {
				if (a && b && c) break;
				if (s1[i] == 'J' && !b && !c) a = 1;
				else if (s1[i] == 'K' && a && !c) b = 1;
				else if (s1[i] == 'A' && a && b) c = 1;
			}
			if (a && b && c) break;
		}
		if (a && b && c) cout << "Agora vai\n";
		else cout << "Agora apertou sem abracar\n";
	}
	return 0;
}