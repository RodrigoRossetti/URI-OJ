#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		stack<char> st;
		int total = 0;
		for (int i = s.length()-1; i >= 0; i--) {
			if (!st.empty()) {
				int k = st.top();
				if (k == 'S' && s[i] == 'B' || k == 'B' && s[i] == 'S' || k == 'C' && s[i] == 'F' ||
					k == 'F' && s[i] == 'C') total++, st.pop();
				else st.push(s[i]);
			}
			else st.push(s[i]);
		}
		cout << total << endl;
	}
	return 0;
}