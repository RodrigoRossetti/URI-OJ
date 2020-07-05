#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, d;
	cin >> n;
	while (n--) {
		int maria = 0, joao = 0;
		for (int i = 0; i < 3; i++) {
			cin >> x >> d;
			joao += x*d;
		}
		for (int i = 0; i < 3; i++) {
			cin >> x >> d;
			maria += x*d;
		}
		if (maria > joao) cout << "MARIA\n";
		else cout << "JOAO\n";
	}
	return 0;
}