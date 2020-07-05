#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) { return a > b; }

int proximo(vector<bool> v, int inicio) {
	for (int i = inicio; i < v.size(); i++)
		if (!v[i])
			return i;
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, x, y, t1, t2, total;
	int maior, meio, menor;
	while (cin >> a >> b >> c >> x >> y && a) {
		vector<bool> v(53, 0);
		v[a] = v[b] = v[c] = v[x] = v[y] = 1;
		menor = min({a, b, c});
		maior = max({a, b, c});
		meio = a+b+c-menor-maior;
		t1 = comp(x, a) + comp(x, b) + comp(x, c);
		t2 = comp(y, a) + comp(y, b) + comp(y, c);
		total = t1+t2;
		switch(total) {
			case 0: case 1: case 2: cout << -1 << endl; break;
			case 3: cout << (t1 == 3 || t2 == 3 ? proximo(v, maior) : -1) << endl; break;
			case 4: cout << ((t1 == 3 && t2) || (t2 == 3 && t1) ? proximo(v, maior) : proximo(v, meio)) << endl; break;
			case 5: cout << proximo(v, meio) << endl; break;
			case 6: cout << proximo(v, 1) << endl; break;
		}
	}
	return 0;
}