#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int a, b, flag, dig, op;
	char c;
	while (getline(cin, s)) {
		dig = 0, op = 0;
		flag = 2;
		stack<int> st;
		for (int i = s.length()-1; i >= 0; i--) {
			c = s[i];
			if (c == ' ') continue;
			else if (isdigit(c)) {
				dig++;
				st.push(c-'0');
			}
			else {
				op++;
				if (st.size() < 2) {
					flag = 0;
					break;
				}
				a = st.top();
				st.pop();
				b = st.top();
				st.pop();
				if (c == '+') st.push(b+a);
				else if (c == '-') st.push(b-a);
				else if (c == '*') st.push(b*a);
				else if (c == '/') {
					if (a == 0) {
						flag = 1;
						st.push(1);
						continue;
					}
					st.push(b/a);
				}
			}
		}
		if (dig != op+1 || st.empty() || flag == 0) cout << "Invalid expression.\n";
		else if (flag == 1) cout << "Division by zero.\n";
		else cout << "The answer is " << st.top() << ".\n";
	}
	return 0;
}