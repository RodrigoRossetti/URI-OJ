#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, total = 0;
    cin >> n;
    while(n--) {
        cin >> k;
        if(k != 1) total++;
    }
    cout << total << endl;
    return 0;
}