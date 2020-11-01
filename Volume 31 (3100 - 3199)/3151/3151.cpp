#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(2);
	int t, n, x;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		vector<int> wt(n), val(n);
		priority_queue<pair<double, int>> pq;
		for (int i = 0 ; i < n; i++) {
			cin >> val[i] >> wt[i];
			pq.push({(double)val[i]/wt[i], i});
		}
		double total = 0;
		while (!pq.empty()) {
			double k = pq.top().first;
			int i = pq.top().second;
			pq.pop();
			if (wt[i] <= x) x -= wt[i], total += val[i];
			else {
				total += k*x, x = 0;
				break;
			}
		}
		cout << total << endl;
	}
	return 0;
}