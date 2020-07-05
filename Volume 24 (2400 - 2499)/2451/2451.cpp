#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int> pq;
	int n, atual = 0;
	cin >> n;
	char arr[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 'o') atual++;
				if (arr[i][j] == 'A' || (i == n-1 && j == n-1)) {
					pq.push(atual);
					atual = 0;
				}
			}
		}
		else {
			for (int j = n-1; j >= 0; j--) {
				if (arr[i][j] == 'o') atual++;
				if (arr[i][j] == 'A' || (i == n-1 && j == 0)) {
					pq.push(atual);
					atual = 0;
				}
			}
		}
	}
	cout << pq.top() << endl;
	return 0;
}