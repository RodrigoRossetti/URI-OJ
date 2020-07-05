#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(2);
	int n, x, y, i = 0;
	while (cin >> n) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		int total = 0, soma = 0;
		while (n--) {
			cin >> x >> y;
			total += x, soma += y;
			pq.push({floor((double)y/x), x});
		}
		if (i) cout << endl;
		cout << "Cidade# " << ++i << ":\n";
		while (!pq.empty()) {
			pair<int, int> p = pq.top();
			pq.pop();
			while (!pq.empty() && pq.top().first == p.first) {
				p.second += pq.top().second;
				pq.pop();
			}
			cout << p.second << "-" << p.first;
			if (!pq.empty()) cout << " ";
		}
		cout << endl;
		cout << "Consumo medio: " << (double)(soma*100/total)/100 << " m3.\n";
	}
	return 0;
}