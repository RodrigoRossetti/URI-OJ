#include <bits/stdc++.h>
using namespace std;

bool comp(const string& a, const string& b) { return (a.length() > b.length());  }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, op;
	priority_queue<string, vector<string>, greater<string>> yes, no;
	map<string, bool> visitados;
	vector<string> nomes;
	while (cin >> s) {
		if (s == "FIM") break;
		cin >> op;
		if (op == "YES") {
			yes.push(s);
			nomes.push_back(s);
		}
		else if (op == "NO") no.push(s);
		visitados[s] = 0;
	}
	while (!yes.empty()) {
		if (!visitados[yes.top()]) cout << yes.top() << endl;
		visitados[yes.top()] = 1;
		yes.pop();
	}
	while (!no.empty()) {
		if (!visitados[no.top()]) cout << no.top() << endl;
		visitados[no.top()] = 1;
		no.pop();
	}
	stable_sort(nomes.begin(), nomes.end(), comp);
	cout << endl << "Amigo do Habay:\n";
	cout << nomes[0] << endl;
	return 0;
}