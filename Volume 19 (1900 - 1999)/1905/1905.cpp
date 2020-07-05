#include <bits/stdc++.h>
using namespace std;

bool arr[10][10];
bool visitados[5][5];

bool backtracking(int i, int j) {
	if (visitados[i][j] == 1) return false;
	visitados[i][j] = 1;
	if (i == 4 && j == 4 && arr[i][j] == 0) return true;
	if (arr[i][j] == 1) return false;
	if (i == 0 && j == 0) return backtracking(i+1, j) || backtracking(i, j+1);
	if (i == 0) return backtracking(i+1, j) || backtracking(i, j+1) || backtracking(i, j-1);
	if (j == 0) return backtracking(i+1, j) || backtracking(i, j+1) || backtracking(i-1, j);
	if (i == 4) return backtracking(i, j+1) || backtracking(i-1, j) || backtracking(i, j-1);
	if (j == 4) return backtracking(i+1, j) || backtracking(i-1, j) || backtracking(i, j-1);
	return backtracking(i+1, j) || backtracking(i, j+1) || backtracking(i-1, j) || backtracking(i, j-1);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(visitados, 0, sizeof(visitados));
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
				arr[i][j] = 1;
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				scanf("%d", &arr[i][j]);
		backtracking(0, 0) ? cout << "COPS\n" : cout << "ROBBERS\n";
	}
	return 0;
}