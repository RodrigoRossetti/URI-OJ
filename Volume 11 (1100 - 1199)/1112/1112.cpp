#include<bits/stdc++.h> 
using namespace std; 

class BIT {
	int m, n;
	vector<vector<int>> bit;

public:

	BIT(int m, int n) {
		this->m = n, this->n = n;
		bit = vector<vector<int>>(m+1, vector<int>(n+1, 0));
	}

	void atualiza(int x, int y, int k) {
		for (; x <= m; x += x & (-x))
			for(int z = y; z <= n; z += z & (-z))
				bit[x][z] += k;
	}

	int soma(int x, int y) {
		if (x <= 0 || y <= 0) return 0;
		int total = 0;
		for(; x; x -= x & (-x))
			for(int z = y; z; z -= z & (-z))
				total += bit[x][z];
		return total;
	}

	int soma(int x1, int y1, int x2, int y2) {
		if (x1 > x2) swap(x1, x2);
		if (y1 > y2) swap(y1, y2);
		return soma(x2, y2) - soma(x2, y1-1) - soma(x1-1, y2) + soma(x1-1, y1-1);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, z, w, p, q, n;
	char c;
	while (cin >> x >> y >> p && (x || y || p)) {
		BIT bit(max(x, y), max(x, y));
		cin >> q;
		while (q--) {
			cin >> c;
			if (c == 'A') {
				cin >> n >> x >> y;
				bit.atualiza(x+1, y+1, n);
			}
			else if (c == 'P') {
				cin >> x >> y >> z >> w;
				cout << bit.soma(x+1, y+1, z+1, w+1)*p << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
