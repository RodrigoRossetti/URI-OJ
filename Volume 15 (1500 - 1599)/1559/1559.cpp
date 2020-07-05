#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>> v(4, vector<int>(4));
	int t;
	cin >> t;
	while (t--) {
		bool f1, f2, f3, f4, f5, f6;
		f1 = f2 = f3 = f4 = f5 = f6 = 0;
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				cin >> v[i][j];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				if (v[i][j] != 0 && (v[i][j] == v[i+1][j] || v[i+1][j] == 0)) {
					f2 = 1;
					break;
				}
			}
		}
		for (int i = 1; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (v[i][j] != 0 && (v[i][j] == v[i-1][j] || v[i-1][j] == 0)) {
					f3 = 1;
					break;
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 1; j < 4; j++) {
				if (v[i][j] != 0 && (v[i][j] == v[i][j-1] || v[i][j-1] == 0)) {
					f4 = 1;
					break;
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (v[i][j] != 0 && (v[i][j] == v[i][j+1] || v[i][j+1] == 0)) {
					f5 = 1;
					break;
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (v[i][j] == 2048) {
					f6 = 1;
					break;
				}
			}
		}
		if (f2+f3+f4+f5 == 0 || f6) cout << "NONE\n";
		else {
			if (f2) {
				cout << "DOWN";
				f1 = 1;
			}
			if (f4) {
				if (f1) cout << " ";
				cout << "LEFT";
				f1 = 1;
			}
			if (f5) {
				if (f1) cout << " ";
				cout << "RIGHT";
				f1 = 1;
			}
			if (f3) {
				if (f1) cout << " ";
				cout << "UP";
			}
			cout << endl;
		}
	}
	return 0;
}