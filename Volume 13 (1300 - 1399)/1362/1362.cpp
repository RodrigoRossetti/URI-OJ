#include <bits/stdc++.h>
using namespace std;

bool bfsPai(vector<vector<int>> residual, int inicio, int fim, vector<int> &pai, int m, int n) {
	vector<bool> visitado(m+8, false);
	visitado[inicio] = true;
	queue<int> fila;
	fila.push(inicio);
	pai[inicio] = -1;

	while (!fila.empty()) {
		int u = fila.front();
		fila.pop();
		for (int w = 0; w < m+8; w++) {
			if (!visitado[w] && residual[u][w] > 0) {
				visitado[w] = true;
				fila.push(w);
				pai[w] = u;
			}
		}
	}
	return (visitado[fim] == true); 
}

int fordFulkerson(vector<vector<int>> residual, int inicio, int fim, int m, int n) { 
    vector<int> pai(m+8);
    int fluxo_max = 0;

    while (bfsPai(residual, inicio, fim, pai, m, n)) { 
        int fluxo_caminho = INT_MAX; 
        for (int u = fim; u != inicio; u = pai[u]) { 
            int w = pai[u]; 
            fluxo_caminho = min(fluxo_caminho, residual[w][u]); 
        } 
        for (int u = fim; u != inicio; u = pai[u]) { 
            int w = pai[u]; 
            residual[w][u] -= fluxo_caminho; 
            residual[u][w] += fluxo_caminho; 
        } 
        fluxo_max += fluxo_caminho; 
    } 
    return fluxo_max; 
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, x, y;
	string a, b;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		n /= 6;
		vector<vector<int>> residual(m+8, vector<int>(m+8, 0));
		residual[0][1] = residual[0][2] = residual[0][3] = residual[0][4] = residual[0][5] = residual[0][6] = n;
		for (int i = 1; i <= m; i++) {
			cin >> a >> b;
			residual[i+6][m+7] = 1;
			if (a == "XS") residual[1][i+6] = 1;
			else if (a == "S") residual[2][i+6] = 1;
			else if (a == "M") residual[3][i+6] = 1;
			else if (a == "L") residual[4][i+6] = 1;
			else if (a == "XL") residual[5][i+6] = 1;
			else if (a == "XXL") residual[6][i+6] = 1;
			if (b == "XS") residual[1][i+6] = 1;
			else if (b == "S") residual[2][i+6] = 1;
			else if (b == "M") residual[3][i+6] = 1;
			else if (b == "L") residual[4][i+6] = 1;
			else if (b == "XL") residual[5][i+6] = 1;
			else if (b == "XXL") residual[6][i+6] = 1;
		}
		int k = fordFulkerson(residual, 0, m+7, m, n);
		if (k == m) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}