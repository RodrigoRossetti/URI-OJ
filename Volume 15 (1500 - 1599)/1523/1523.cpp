#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, inicio, fim;
	while (cin >> n >> k && n && k) {
		bool flag = 1;
		stack<pair<int, int>> st;
		while (n--) {
			cin >> inicio >> fim;
			if (st.empty()) st.push(make_pair(inicio, fim));
			else {
				if (inicio < st.top().second && (fim > st.top().second || st.size() == k)) flag = 0;
				else {
					while (!st.empty() && st.top().second <= inicio) st.pop();
					if (!st.empty() && inicio < st.top().second && (fim > st.top().second || st.size() == k)) flag = 0;
					st.push(make_pair(inicio, fim));
				}
			}
		}
		cout << (flag ? "Sim\n" : "Nao\n");
	}
	return 0;
}