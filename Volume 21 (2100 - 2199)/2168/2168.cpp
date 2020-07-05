#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int v[n+1][n+1];

    for(i = 0; i <= n; i++)
        for(j = 0; j <= n; j++)
            cin >> v[i][j];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(v[i][j] + v[i][j+1] + v[i+1][j] + v[i+1][j+1] < 2)
                cout << "U";
            else 
                cout << "S";
        }
        cout << "\n";
    }
    return 0;
}