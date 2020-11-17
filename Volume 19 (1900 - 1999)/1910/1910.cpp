#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void test(int x, queue<int>& q, vector<bool>& visitado) {
	if (x >= 0 && x <= 100000 && !visitado[x]) {
		visitado[x] = 1;
		q.push(x);
	}
}

int bfs(int o, int d, int k) {
	int x;
	vector<bool> visitado(100001, 0);
	while (k--) {
		cin >> x;
		visitado[x] = 1;
	}
	queue<int> q;
	q.push(o);
	q.push(-1);
	bool flag = 1;
	int total = 0;
	visitado[o] = 1;
	while (q.size() > 1) {
		x = q.front();
		q.pop();
		if (x == d) {
			flag = 0;
			break;
		}
		if (x == -1) {
			q.push(-1);
			total++;
			continue;
		}
		test(x-1, q, visitado);
		test(x+1, q, visitado);
		test(x*2, q, visitado);
		test(x*3, q, visitado);
		if (x % 2 == 0) test(x/2, q, visitado);
	}
	if (flag) total = -1;
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int o, d, k;
	while (cin >> o >> d >> k && (o || d || k))
		cout << bfs(o, d, k) << endl;
	return 0;
}