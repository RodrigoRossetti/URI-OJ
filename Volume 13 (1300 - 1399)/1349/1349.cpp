#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &arr, int l) {
	for(int i = 0; i < l; i++)
		for(int j = i; j < l; j++)
			swap(arr[i][j], arr[j][i]);
	for(int i = 0; i < l; i++)
		for(int j = 0; j < l/2; j++)
			swap(arr[i][j], arr[i][l-j-1]);
}

int comp(vector<vector<int>> &original, vector<vector<int>> &arr, int l) {
	int total = 0;
	for (int i = 0; i < l; i++)
		for (int j = 0; j < l; j++)
			if (abs(original[i][j]-arr[i][j]) > 100)
				total++;
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, menor;
	cout << fixed << setprecision(2);
	while (cin >> l && l) {
		vector<vector<int>> original(l, vector<int>(l)), arr(l, vector<int>(l));
		for (int i = 0; i < l; i++)
			for (int j = 0; j < l; j++)
				cin >> original[i][j];
		for (int i = 0; i < l; i++)
			for (int j = 0; j < l; j++)
				cin >> arr[i][j];
		menor = INT_MAX;
		for (int i = 0; i < 4; i++) {
			menor = min(menor, comp(original, arr, l));
			rotate(arr, l);
		}
		reverse(arr.begin(), arr.end());
		for (int i = 0; i < 4; i++) {
			menor = min(menor, comp(original, arr, l));
			rotate(arr, l);
		}
		cout << (menor == 0 ? 100 : (double)(l*l-menor)/(l*l)*100) << endl;
	}
	return 0;
}