#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	while (cin >> n && n) {
		vector<int> entrada(n), saida(n);
		for (int i = 1; i <= n; i++) entrada[i-1] = i;
		while (cin >> k && k) {
			stack<int> st;
			saida[0] = k;
			for (int i = 1; i < n; i++) cin >> saida[i];
			int i = 0, t = 0;
			bool flag = 1;
			while (1) {
				while (st.empty() || st.top() != saida[t]) {
					if (i >= n) break;
					st.push(entrada[i]);
					i++;
				}
				while (!st.empty() && st.top() == saida[t]) {
					st.pop();
					t++;
				}
				if (t >= n) break;
				if (i >= n) {
					flag = 0;
					break;
				}
			}
			cout << (flag ? "Yes\n" : "No\n");
		}
		cout << endl;
	}
	return 0;
}