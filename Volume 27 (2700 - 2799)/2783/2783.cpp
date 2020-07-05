#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c, m, k;
    cin >> n >> c >> m;
    int total = c;
    int xi[c];
    for(int i = 0; i < c; i++)
        cin >> xi[i];
    for(int j = 0; j < m; j++) {
        cin >> k;
        for(int i = 0; i < c; i++) {
            if(xi[i] == k && xi[i] != 0) {
                xi[i] = 0;
                total--;
            }
        }
    }
    cout << total << endl;
    return 0;
}