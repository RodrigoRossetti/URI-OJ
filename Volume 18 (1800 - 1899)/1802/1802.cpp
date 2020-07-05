#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d, e, k;
	priority_queue<int> pq;
	cin >> a;
	vector<int> p(a);
	for (int i = 0; i < a; i++) cin >> p[i];
	cin >> b;
	vector<int> m(b);
	for (int i = 0; i < b; i++) cin >> m[i];
	cin >> c;
	vector<int> f(c);
	for (int i = 0; i < c; i++) cin >> f[i];
	cin >> d;
	vector<int> q(d);
	for (int i = 0; i < d; i++) cin >> q[i];
	cin >> e;
	vector<int> y(e);
	for (int i = 0; i < e; i++) cin >> y[i];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			for (int k = 0; k < c; k++)
				for (int l = 0; l < d; l++)
					for (int t = 0; t < e; t++)
						pq.push(p[i] + m[j] + f[k] + q[l] + y[t]);
	int total = 0;
	cin >> k;
	while (k--) {
		total += pq.top();
		pq.pop();
	}
	cout << total << endl;
	return 0;
}