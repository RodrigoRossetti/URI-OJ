#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, p = 0, ip = 0, caso = 1;
	string in, prog, lixo;
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, lixo);
		getline(cin, in);
		getline(cin, prog);
		vector<char> v(30001, 0);
		stack<int> brack;
		cout << "Instancia " << caso++ << endl;
		for (int i = 0; i < prog.length(); i++) {
			switch (prog[i]) {
				case '>': p++; break;
				case '<': p--; break;
				case '+': v[p]++; break;
				case '-': v[p]--; break;
				case '.': cout << v[p]; break;
				case ',': v[p] = (ip < in.length() ? in[ip++] : 0); break;
				case '#':
					for (int j = 0; j < 10; j++)
						cout << v[j];
					break;
				case '[':
					if (v[p]) brack.push(i);
					else {
						int total = 1; i++;
						for (; i < prog.length(); i++) {
							if (prog[i] == '[') total++;
							else if (prog[i] == ']') total--;
							if (total == 0) break;
						}
					}
					break;
				case ']':
					if (v[p]) i = brack.top();
					else brack.pop();
					break;
			}
		}
		cout << endl << endl;
	}
	return 0;
}