#include<bits/stdc++.h> 
using namespace std; 

class BIT2D {
	int m, n;
	vector<vector<int>> bit;

public:

	BIT2D(vector<vector<int>> arr, int m, int n) {
		this->m = m, this->n = n;
		bit = vector<vector<int>>(m+1, vector<int>(n+1, 0));
		for (int j = 1; j <= n; j++)
			for (int i = 1; i <= m; i++)
				atualiza(i, j, arr[i-1][j-1]-(soma(i, j)-soma(i, j-1)-soma(i-1, j)+soma(i-1, j-1)));
	}

	void atualiza(int x, int y, int k) {
		for (; x <= m; x += x & (-x))
			for(int z = y; z <= n; z += z & (-z))
				bit[x][z] += k;
	}

	int soma(int x, int y) {
		int total = 0;
		for(; x > 0; x -= x & (-x))
			for(int z = y; z > 0; z -= z & (-z))
				total += bit[x][z];
		return total;
	}

	int soma(int x1, int y1, int x2, int y2) {
		if (x1 > x2) swap(x1, x2);
		if (y1 > y2) swap(y1, y2);
		return soma(x2, y2)-soma(x2, y1-1)-soma(x1-1, y2)+soma(x1-1, y1-1);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, q, r, i1, i2, j1, j2;
	while (cin >> n >> m) {
		vector<vector<int>> arr(n, vector<int>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> arr[i][j];
		BIT2D bit(arr, n, m);
		cin >> q;
		while (q--) {
			cin >> r >> i1 >> j1 >> i2 >> j2;
			if (r == 0) {
				bit.atualiza(i1, j1, -1);
				bit.atualiza(i2, j2, 1);
			}
			else if (r == 1) {
				cout << bit.soma(i1, j1, i2, j2) << endl;
			}
		}
	}
	return 0;
}
