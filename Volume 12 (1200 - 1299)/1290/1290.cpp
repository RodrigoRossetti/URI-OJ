#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first
#define s second

void sort3(int& a, int& b, int& c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y, z, a, b, c, menor, d1, d2;
	while (cin >> n >> m && (n || m)) {
		cin >> x >> y >> z;
		sort3(x, y, z);
		map<pair<int, pair<int, int>>, int> count;
		while (m--) {
			cin >> a >> b >> c;
			sort3(a, b, c);
			count[{a, {b, c}}]++;
		}
		d1 = x*y*z;
		menor = INT_MAX;
		for (auto& k : count) {
			if (k.s >= n) {
				a = k.f.f;
				b = k.f.s.f;
				c = k.f.s.s;
				d2 = a*b*c;
				if (a >= x && b >= y && c >= z) menor = min(menor, d2-d1);
			}
		}
		if (menor == INT_MAX) cout << "impossible\n";
		else cout << menor << endl;
	}
	return 0;
}