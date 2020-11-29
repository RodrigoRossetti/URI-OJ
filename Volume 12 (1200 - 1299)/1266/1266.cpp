#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		int inicial = -1;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] == 1) inicial = i;
		}
		int total = 0;
		if (inicial == -1) total = ceil((double)n/2);
		else {
			int pos = (inicial+1)%n, d = 0;
			while (pos != inicial) {
				if (v[pos] == 0) {
					d += 2;
					if (d == 4) d = 0, total++;
				}
				else d = 0;
				pos = (pos+1)%n;
			}
		}
		cout << total << endl;
	}
	return 0;
}