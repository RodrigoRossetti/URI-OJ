#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, total = 1;
    cin >> l;
    while (l >= 2) {
        l /= 2;
        total *= 4;
    }
    cout << total << endl;
    return 0;
}