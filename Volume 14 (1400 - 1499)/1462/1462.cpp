#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll n;
ll v[100002];
ll h[100002];

bool erdosGallai() {
	h[1] = v[1];
	for (ll i = 2; i <= n; i++)
		h[i] = h[i-1] + v[i];
	if (h[n] % 2 != 0) return 0;
	ll w = n;
	for (ll i = 1; i <= n; i++) {
		while (w > 0 && v[w] < i) w--;
		ll y = max(i, w);
		if (h[i] > i*(y-1) + h[n] - h[y]) return 0;
	}
	return 1;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> n) {
		for (ll i = 1; i <= n; i++) cin >> v[i];
		sort(v+1, v+n+1, greater<ll>());
		cout << (erdosGallai() ? "possivel" : "impossivel") << endl;
	}
	return 0;
}