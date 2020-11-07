#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, n, p, q;
	char t;
	while (cin >> c >> n) {
		vector<int> v(c+1, 0);
		int total = 0;
		while (n--) {
			cin >> t;
			if (t == 'C') {
				cin >> p >> q;
				bool flag = 0;
				int pos = 0, qtd = 0;
				for (int i = 0; i < c; i++) {
					if (v[i] == 0) {
						if (qtd == 0) pos = i;
						qtd++;
					}
					else qtd = 0;
					if (qtd == q) {
						flag = 1;
						break;
					}
				}
				if (flag) {
					total += 10;
					for (int i = 0; i < q; i++)
						v[pos+i] = p;
				}
			}
			else if (t == 'S') {
				cin >> p;
				for (int i = 0; i < c; i++)
					if (v[i] == p)
						v[i] = 0;
			}
		}
		cout << total << endl;
	}
	return 0;
}