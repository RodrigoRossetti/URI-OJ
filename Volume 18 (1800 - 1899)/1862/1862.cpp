#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int n;

void compare(vector<string>& v) {
	int total = 0;
	vector<bool> visitado(n, 0);
	vector<int> out;
	for (int i = 0; i < n; i++) {
		if (!visitado[i]) {
			int qtd = 0;
			for (int j = 0; j < n; j++) {
				if (v[i][j] == 'S') {
					if (visitado[j] || v[i] != v[j]) {
						cout << -1 << endl;
						return;
					}
					visitado[j] = 1;
					qtd++;
				}
			}
			out.push_back(qtd);
			total++;
		}
	}
	sort(out.rbegin(), out.rend());
	cout << total << endl;
	for (int i = 0; i < out.size(); i++) {
		if (i != 0) cout << " ";
		cout << out[i];
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> ws;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
		getline(cin, v[i]);
	compare(v);
	return 0;
}