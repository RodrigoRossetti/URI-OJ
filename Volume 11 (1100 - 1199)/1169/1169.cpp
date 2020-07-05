#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        x = pow(2, x) / 12000;
        cout << x << " kg\n";
    }
    return 0;
}