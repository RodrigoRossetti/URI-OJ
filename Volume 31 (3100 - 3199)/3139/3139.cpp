#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, total = 0;
	cin >> n >> m;
	m -= n;
	queue<int> q;
	for (int i = 0; i < 30; i++) {
		cin >> k;
		q.push(k);
	}
	while (m > 0) {
		int soma = 0;
		k = q.front();
		q.pop();
		soma += k;
		for (int i = 0; i < 29; i++) {
			k = q.front();
			q.pop();
			soma += k;
			q.push(k);
		}
		int media = ceil((double)soma/30);
		q.push(media);
		m -= media;
		total++;
	}
	cout << total << endl;
	return 0;
}