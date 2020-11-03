#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first
#define s second

bool comp(	pair<int, pair<int, int>> a,
			pair<int, pair<int, int>> b) {
	return a.f > b.f;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	cin >> n;
	vector<pair<int, pair<int, int>>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v[i] = {a-b, {a, b}};
	}
	sort(v.begin(), v.end(), comp);
	int t = 0;
	for (int i = 3; i < n; i++)
		t += v[i].s.s;
	int x = v[0].s.f+v[1].s.f+v[2].s.f+t;
	cout << x << endl;
	return 0;
}