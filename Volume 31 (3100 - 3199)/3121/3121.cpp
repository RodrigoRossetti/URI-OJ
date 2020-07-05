#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, d, c, k, maior = 0;
	string s, maiorS;
	cin >> n >> c >> d;
	while (n--) {
		cin >> s;
		ll total = 0, ultimo = LLONG_MAX;
		bool flag = 1;
		for (ll i = 0; i < c; i++) {
			cin >> k;
			if (flag && k > ultimo) {
				total -= 500*ultimo+d;
				flag = 0;
			}
			else if (!flag && k < ultimo) {
				total += 500*ultimo-d;
				flag = 1;
			}
			ultimo = k;
		}
		if (!flag) total += 500*k-d;
		if (total > maior) maiorS = s, maior = total;
	}
	if (maior == 0) cout << "None 0\n";
	else cout << maiorS << " " << maior << endl;
	return 0;
}