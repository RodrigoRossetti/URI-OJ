#include <bits/stdc++.h>
using namespace std;

int find(vector<pair<int, int>> &subconj, int i) {  
    if (subconj[i].first != i) 
        subconj[i].first = find(subconj, subconj[i].first); 
    return subconj[i].first;
}  

void Union(vector<pair<int, int>> &subconj, int x, int y) {  
    int a = find(subconj, x);  
    int b = find(subconj, y);  
    if (subconj[a].second < subconj[b].second)
		subconj[a].first = b; 
    else if (subconj[a].second > subconj[b].second)
		subconj[b].first = a; 
    else 
		subconj[b].first = a; 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, p, q, a, b;
	while (cin >> n >> m && n && m) {
		int total = 0;
		vector<pair<int, int>> subconj(n);
		vector<int> pontos(n);
		for (int u = 0; u < n; u++) {
			cin >> p;
			subconj[u] = make_pair(u, 0);
			pontos[u] = p;
		}
		while (m--) {
			cin >> q >> a >> b;
			if (q == 1) {
				int x = find(subconj, a-1);
				int y = find(subconj, b-1);
				pontos[x] += pontos[y];
				Union(subconj, x, y);
			}
			else if (q == 2) {
				int x = find(subconj, a-1);
				int y = find(subconj, b-1);
				int k = find(subconj, 0);
				if (x == k && pontos[x] > pontos[y]) total++;
				else if (y == k && pontos[y] > pontos[x]) total++;
			}
		}
		cout << total << endl;
	}
	return 0;
}