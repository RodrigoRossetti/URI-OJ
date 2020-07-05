#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string n, cutoff, aux;
	int num;
	while (getline(cin, n)) {
		getline(cin, cutoff);
		aux = "0";
		bool flag = 1;
		for (int i = 0; i < n.length(); i++) {
			if (n[i] == '.') {
				num = stoi(aux);
				aux = "";
				flag = 0;
			}
			else aux += n[i];
		}
		if (flag) {
			num = stoi(aux);
			aux = "0";
		}
		cutoff = cutoff.substr(2, cutoff.length()-2);
		for (int i = 0; i < aux.length(); i++) {
			if (aux[i] > cutoff[i]) {
				num++;
				break;
			}
			else if (aux[i] < cutoff[i]) break;
		}
		cout << num << endl;
	}
	return 0;
}