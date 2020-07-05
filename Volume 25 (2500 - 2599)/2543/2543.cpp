#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, k, total = 0;
    while (cin >> n >> i) {
        while (n--) {
            cin >> j >> k;
            if(j == i && k == 0)
                total++;
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}