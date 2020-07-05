#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char c;
	int n, caso = 1;
	while (cin >> n && n) {
		cin >> c;
		int total = 0;
		vector<vector<bool>> v(8, vector<bool>(8, 0));

		if (c-'a'-1 >= 0 && 8-n-2 >= 0) v[8-n-2][c-'a'-1] = 1, total++;
		if (c-'a'+1 <= 7 && 8-n-2 >= 0) v[8-n-2][c-'a'+1] = 1, total++;
		if (c-'a'-1 >= 0 && 8-n+2 <= 7) v[8-n+2][c-'a'-1] = 1, total++;
		if (c-'a'+1 <= 7 && 8-n+2 <= 7) v[8-n+2][c-'a'+1] = 1, total++;

		if (c-'a'-2 >= 0 && 8-n-1 >= 0) v[8-n-1][c-'a'-2] = 1, total++;
		if (c-'a'+2 <= 7 && 8-n-1 >= 0) v[8-n-1][c-'a'+2] = 1, total++;
		if (c-'a'-2 >= 0 && 8-n+1 <= 7) v[8-n+1][c-'a'-2] = 1, total++;
		if (c-'a'+2 <= 7 && 8-n+1 <= 7) v[8-n+1][c-'a'+2] = 1, total++;
		
		for (int i = 0; i < 8; i++) {
			cin >> n >> c;
			if (c-'a'-1 >= 0 && 8-n+1 <= 7 && v[8-n+1][c-'a'-1]) v[8-n+1][c-'a'-1] = 0, total--;
			if (c-'a'+1 <= 7 && 8-n+1 <= 7 && v[8-n+1][c-'a'+1]) v[8-n+1][c-'a'+1] = 0, total--;
		}
		cout << "Caso de Teste #" << caso++ << ": " << total << " movimento(s).\n";
	}
	return 0;
}