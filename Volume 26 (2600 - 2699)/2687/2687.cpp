#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

bool searchUp(int i, int j, int l) {
    if (i == 0 && v[i][j] == 0) return 0;
    else if (v[i][j] == 1) return 1;
    else return searchUp(i-1, j, l);
}

bool searchDown(int i, int j, int l) {
    if (i == l-1 && v[i][j] == 0) return 0;
    else if (v[i][j] == 1) return 1;
    else return searchDown(i+1, j, l);
}

bool searchLeft(int i, int j, int l) {
    if (j == 0 && v[i][j] == 0) return 0;
    else if (v[i][j] == 1) return 1;
    else return searchLeft(i, j-1, l);
}

bool searchRight(int i, int j, int l) {
    if (j == l-1 && v[i][j] == 0) return 0;
    else if (v[i][j] == 1) return 1;
    else return searchRight(i, j+1, l);
}

int main() {
    int q, l;
    cin >> q;
    while (q--) {
        v.clear();
        cin >> l;
        vector<int> aux;
        int x;
        for (int i = 0; i < l; i++) {
            aux.clear();
            for (int j = 0; j < l ; j++) {
                cin >> x;
                aux.push_back(x);
            }
            v.push_back(aux);
        }
        double total = 0;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l; j++) {
                if (v[i][j] == 1) total++;
                else {
                    bool f1 = searchUp(i, j, l);
                    bool f2 = searchDown(i, j, l);
                    bool f3 = searchLeft(i, j, l);
                    bool f4 = searchRight(i, j, l);
                    if (f1 && f2 && f3 && f4) total++;
                }
            }
        }
        printf("%.2lf\n", total/2);
    }
    return 0;
}