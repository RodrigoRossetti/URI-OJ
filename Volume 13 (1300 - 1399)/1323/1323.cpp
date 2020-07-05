#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, total = 0;
    while(1) {
        cin >> n;
        if (n == 0) break;
        n += 1;
        while (n--) {
            total += n*n;
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}