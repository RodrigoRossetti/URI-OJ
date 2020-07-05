#include <bits/stdc++.h> 
using namespace std; 

pair<int, int> espiral(int n, int s, int i, int j, vector<vector<bool>> &visitado, int atual, char o) {
	visitado[i][j] = 1;
	if (atual == s) return {i, j};
	else if (o == 'E') {
		if (j-1 >= 0 && !visitado[i][j-1]) return espiral(n, s, i, j-1, visitado, --atual, 'E');
		else if (i+1 < n && !visitado[i+1][j]) return espiral(n, s, i+1, j, visitado, --atual, 'B');
		else if (j+1 < n && !visitado[i][j+1]) return espiral(n, s, i, j+1, visitado, --atual, 'D');
		else if (i-1 >= 0 && !visitado[i-1][j]) return espiral(n, s, i-1, j, visitado, --atual, 'C');
	}
	else if (o == 'B') {
		if (i+1 < n && !visitado[i+1][j]) return espiral(n, s, i+1, j, visitado, --atual, 'B');
		else if (j+1 < n && !visitado[i][j+1]) return espiral(n, s, i, j+1, visitado, --atual, 'D');
		else if (i-1 >= 0 && !visitado[i-1][j]) return espiral(n, s, i-1, j, visitado, --atual, 'C');
		else if (j-1 >= 0 && !visitado[i][j-1]) return espiral(n, s, i, j-1, visitado, --atual, 'E');
	}
	else if (o == 'D') {
		if (j+1 < n && !visitado[i][j+1]) return espiral(n, s, i, j+1, visitado, --atual, 'D');
		else if (i-1 >= 0 && !visitado[i-1][j]) return espiral(n, s, i-1, j, visitado, --atual, 'C');
		else if (j-1 >= 0 && !visitado[i][j-1]) return espiral(n, s, i, j-1, visitado, --atual, 'E');
		else if (i+1 < n && !visitado[i+1][j]) return espiral(n, s, i+1, j, visitado, --atual, 'B');
	}
	else if (o == 'C') {
		if (i-1 >= 0 && !visitado[i-1][j]) return espiral(n, s, i-1, j, visitado, --atual, 'C');
		else if (j-1 >= 0 && !visitado[i][j-1]) return espiral(n, s, i, j-1, visitado, --atual, 'E');
		else if (i+1 < n && !visitado[i+1][j]) return espiral(n, s, i+1, j, visitado, --atual, 'B');
		else if (j+1 < n && !visitado[i][j+1]) return espiral(n, s, i, j+1, visitado, --atual, 'D');
	}
}

int main() { 
    int n, s;
	while (cin >> n >> s) {
		vector<vector<bool>> visitado(n, vector<bool>(n, 0));
		pair<int, int> p = espiral(n, s, 0, n-1, visitado, n*n, 'E');
		cout << p.first << " " << p.second << endl;
	}
    return 0; 
} 