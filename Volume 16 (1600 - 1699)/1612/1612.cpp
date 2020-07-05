#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        x % 2 == 0 ? cout << x/2 << endl : cout << x/2+1 << endl;
    }
    return 0;
}