#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m, x;
    cin >> n;
    while(n--){
        cin >> m;
        vector<int> v;
        for(int i = 0; i < m; i++){
            cin >> x;
            if(x & 1) v.push_back(x);
        }
        sort(v.begin(), v.end());
        int p1 = 0, p2 = v.size()-1;
        for(int i = 0; i < v.size(); i++)
            cout << (i & 1 ? v[p1++] : v[p2--]) << (i < v.size()-1 ? ' ' : '\n');
        if(v.size() == 0) cout << endl;
    }
    return 0;
}