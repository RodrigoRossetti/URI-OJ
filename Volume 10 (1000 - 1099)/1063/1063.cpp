#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		vector<char> entrada(n), saida(n);
		stack<char> st;
		for (int i = 0; i < n; i++) cin >> entrada[i];
		for (int i = 0; i < n; i++) cin >> saida[i];
		int i = 0, t = 0;
		while (1) {
			while (st.empty() || st.top() != saida[t]) {
				if (i >= n) break;
				st.push(entrada[i]);
				cout << 'I';
				i++;
			}
			while (!st.empty() && st.top() == saida[t]) {
				st.pop();
				cout << 'R';
				t++;
			}
			if (t >= n) break;
			if (i >= n) {
				cout << " Impossible";
				break;
			}
		}
		cout << endl;
	}
	return 0;
}