#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, anterior = -1, atual = 1, total = 0;
	cin >> n;
	map<int, int> m;
	while (n--) {
		cin >> k;
		if (anterior != -1 && k == anterior) atual++;
		else if (k != anterior) atual = 1;
		if (atual > total) total = atual;
		anterior = k;
	}
	cout << total << endl;
	return 0;
}