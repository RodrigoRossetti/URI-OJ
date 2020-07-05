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
		subconj[b].first = a, subconj[a].second++; 
}  

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, q, x, y;
	bool f = 0;
	while (cin >> n >> m >> q) {
		if (f) cout << endl;
		vector<pair<int, int>> subconj(n);
		for (int u = 0; u < n; u++)
			subconj[u] = make_pair(u, 0);
		while (m--) {
			cin >> x >> y;
			int a = find(subconj, x-1);
			int b = find(subconj, y-1);
			Union(subconj, a, b);
		}
		while (q--) {
			cin >> x >> y;
			if (find(subconj, x-1) == find(subconj, y-1)) cout << "S\n";
			else cout << "N\n";
		}
		f = 1;
	}
	return 0;
}