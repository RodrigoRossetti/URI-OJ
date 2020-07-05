#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

vector<bool> primo(40001, 1);
vector<int> primos;

ll totiente(ll n) {   
	ll p, q;
	for (int i = 0; i < primos.size(); i++) {
		if (n % primos[i] == 0) {
			p = primos[i];
			break;
		}
	} 
    q = n/p;        
	return (p-1)*(q-1);
}

ll gcdExtended(ll a, ll b, ll &x, ll &y) {
    if (a == 0) {
        x = 0, y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b%a, a, x1, y1);
	x = y1 - (b/a) * x1;
    y = x1;
    return gcd;
}

ll modInverse(ll n, ll e) {
    ll x, y, tot = totiente(n);
	gcdExtended(e, tot, x, y);
    return ((x%tot + tot) % tot);
}

ll exponenciacao(ll c, ll d, ll m) {
    ll t = 1;
    while (d > 0) {
        if (d % 2 != 0) t = (t*c) % m;
        c = (c*c) % m;
        d /= 2;
    }
    return t % m;
}

ll decript(ll n, ll e, ll c) {
    ll d = modInverse(n, e);
	return exponenciacao(c, d, n);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int i = 2; i < 40000; i++) {
		if (primo[i]) {
			primos.push_back(i);
			for (int j = i*i; j <= 40000; j += i) {
				primo[j] = 0;
			}
		}
	}
    ll n, e, c;
	cin >> n >> e >> c;
	cout << decript(n, e, c) << endl;
    return 0;
}