#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, w;
	cin >> n >> w >> ws;
	while (n--) {
		int k;
		string s, aux, fim = "";
		getline(cin, s);
		stringstream ss(s);
		while (ss >> aux) {
			if (aux[0] >= '0' && aux[0] <= '9')
				k = stoi(aux);
			else fim += aux + " ";
		}
		if (k > w) cout << fim.substr(0, fim.length()-1) << endl;
	}
	return 0;
}