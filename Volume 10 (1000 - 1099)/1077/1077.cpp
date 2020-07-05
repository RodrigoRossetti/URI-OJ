#include<bits/stdc++.h>
using namespace std;

string InPos(string s, unordered_map<char,int> prec) {
	stack<char> st;
	string s2 = "";
	for (int i = 0; i < s.length(); i++) {
		if (isalnum(s[i])) s2 += s[i];
		else if (s[i] == '^' || s[i] == '*'|| s[i] == '/' || s[i] == '+'|| s[i] == '-') {
			if (!st.empty()) {
				while (prec[st.top()] >= prec[s[i]]) {
					s2 += st.top();
					st.pop();
					if (st.empty()) break;
				}
			}
			st.push(s[i]);
		}
		else if (s[i] == '(') st.push('(');
		else if (s[i] == ')') {
			while (st.top() != '(') {
				s2 += st.top();
				st.pop();
			}
			st.pop();
		}
	}
	while (!st.empty()) {
		s2 += st.top();
		st.pop();
	}
	return s2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n >> ws;
	unordered_map<char, int> prec = {{'+', 1}, {'-', 1}, {'/', 2}, {'*', 2}, {'^', 3}};
	string s;
	while(n--) {
		cin >> s;
		cout << InPos(s, prec) << endl;
	}
	return 0;
}