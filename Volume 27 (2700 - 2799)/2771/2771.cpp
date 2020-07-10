#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(1);
	int n, k;
	while (cin >> n >> k) {
		vector<int> v(n);
		for (auto &x : v) cin >> x;
		priority_queue<double> pq;
		for (int i = 0; i < n-2; i++)
			for (int j = i+1; j < n-1; j++)
				for (int k = j+1; k < n; k++)
					pq.push((double)(v[i]+v[j]+v[k])/3);
		while (k-- > 1) pq.pop();
		cout << pq.top() << endl;
	}
	return 0;
}