#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int vis[10001];

int rev(int n) {
	int r = 0;
	while (n != 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	return r;
}

int bfs(int a, int b) {
	memset(vis, 0, sizeof(vis));
	queue<int> q;
	q.push(a);
	q.push(INT_MIN);
	vis[a] = 1;
	int soma, reverse, total = 0;
	while (!q.empty()) {
		a = q.front();
		q.pop();
		if (a == INT_MIN) {
			total++;
			q.push(INT_MIN);
			continue;
		}
		soma = a + 1;
		reverse = rev(a);
		if (soma >= 10000 || reverse >= 10000) continue;
		if (soma == b || reverse == b) return total+1;
		else {
			if (!vis[soma]) {
				vis[soma] = 1;
				q.push(soma);
			}
			if (!vis[reverse]) {
				vis[reverse] = 1;
				q.push(reverse);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << bfs(a, b) << endl;
	}
	return 0;
}