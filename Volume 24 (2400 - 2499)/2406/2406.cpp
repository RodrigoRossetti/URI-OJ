#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t >> ws;
	while (t--) {
		string s;
		cin >> s;
		bool flag = 1;
		stack<char> st;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
			else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
				if (st.empty()) {
					flag = 0;
					break;
				}
				char c = st.top();
				st.pop();
				if ((c == '(' && s[i] != ')') || (c == '{' && s[i] != '}') || (c == '[' && s[i] != ']')) {
					flag = 0;
					break;
				}
			}
		}
		if (!st.empty()) flag = 0;
		cout << (flag ? "S\n" : "N\n");
	}
	return 0;
}