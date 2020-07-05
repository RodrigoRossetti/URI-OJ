#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_map<char, char> oposto = {{'x', 'o'}, {'o', 'x'}};
	int n, q, k, m, pos, total;
	string s, aux;
	while (cin >> n >> q && (n || q)) {
		cin >> s;
		while (q--) {
			aux = s;
			cin >> k >> m;
			pos = total = 0;
			bool flag = 1;
			while (aux != s || flag) {
				aux[pos] = oposto[aux[pos]];
				pos = (pos+k)%n;
				total++;
				flag = 0;
			}
			m %= total;
			while (m--) {
				aux[pos] = oposto[aux[pos]];
				pos = (pos+k)%n;
			}
			cout << aux << endl;
		}
	}
	
	return 0;
}