#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int m, l, k, cm, cl, a;
        cin >> m >> l;
        vector<int>M[m];
        vector<int>L[l];
        for(int i = 0;i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> k;
                M[i].push_back(k);
            }
        }
        for (int i = 0;i < l; i++) {
            for (int j = 0;j < n; j++) {
                cin >> k;
                L[i].push_back(k);
            }
        }
        cin >> cm >> cl >> a;
        long long x = M[cm-1][a-1], y = L[cl-1][a-1];
        if (x > y) cout << "Marcos\n";
        else if (x < y) cout << "Leonardo\n";
        else cout << "Empate\n";
    }
    return 0;
}