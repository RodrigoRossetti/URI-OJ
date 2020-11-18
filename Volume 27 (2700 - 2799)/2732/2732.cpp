#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int h, l;
char arr[401][401];
bool vis[401][401];

bool test(int i, int j) {
	return i >= 0 && j >= 0 && i < h && j < l && !vis[i][j] && arr[i][j] == 'C';
}

void dfsR(int i, int j, int& atual) {
	if (arr[i][j] == 'C') atual++;
	vis[i][j] = 1;
	if (test(i-1, j)) dfsR(i-1, j, atual);
	if (test(i+1, j)) dfsR(i+1, j, atual);
	if (test(i, j-1)) dfsR(i, j-1, atual);
	if (test(i, j+1)) dfsR(i, j+1, atual);
}

int dfs() {
	memset(vis, 0, sizeof(vis));
	int atual, total = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			if (arr[i][j] == 'C') {
				atual = 0;
				dfsR(i, j, atual);
				total = max(total, atual);
			}
		}
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char c;
	cin >> h >> l;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < l; j++)
			cin >> arr[i][j];
	cout << dfs() << endl;
	return 0;
}