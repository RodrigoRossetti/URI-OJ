#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	stack<bool> st;
	int total = 0;
	getline(cin, s);
	for (const auto &c : s) {
		if (c == ')' && !st.empty()) st.pop();
		else if (c == '(') st.push(1);
	}
	st.empty() ? cout << "Partiu RU!\n" : cout << "Ainda temos " << st.size() << " assunto(s) pendente(s)!\n";
	return 0;
}