#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, k, atual = -1, maior = 0, total = 0;
	cin >> n >> x;
	while (n--) {
		cin >> k;
		if (atual == -1) {
			atual = k;
			total++;
		}
		else if (abs(atual-k) <= x) {
			atual = k;
			total++;
		}
		else {
			atual = k;
			if (total > maior) maior = total;
			total = 1;
		}
	}
	if (total > maior) maior = total;
	cout << maior << endl;
	return 0;
}