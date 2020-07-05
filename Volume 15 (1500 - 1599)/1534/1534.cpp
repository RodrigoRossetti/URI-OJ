#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int v[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j) v[i][j] = 1;
                else if (i + j == n-1) v[i][j] = 2;
                else v[i][j] = 3;
            }
        }
        if (n % 2 != 0) v[n/2][n/2] = 2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << v[i][j];
            cout << endl;
        }
    }
    return 0;
}