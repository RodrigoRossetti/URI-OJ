#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, i, x, k = 0, total = 0, ataques = 0;
    cin >> n ;
    long long int l[n], s[n];
    for(i = 0; i < n; i++) {
        cin >> l[i];
        total += l[i];
    }
    while(1) {
        x = k;
        if (k < 0 || k > n-1)
            break;
        if (l[x] % 2 == 0)
            k--;
        else
            k++;
        if (l[x] > 0) {
            l[x]--;
            total--;
            s[x] = 1;
        }
    }
    for(i = 0; i < n; i++)
        if (s[i] == 1)
            ataques++;
    cout << ataques << " " << total << endl;
    return 0;
}