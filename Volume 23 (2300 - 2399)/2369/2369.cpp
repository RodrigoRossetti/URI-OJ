#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, total = 7;
    cin >> n;
    while (n >= 101) {
        total += 5;
        n--;
    }
    while (n >= 31) {
        total += 2;
        n--;
    }
    while (n >= 11) {
        total += 1;
        n--;
    }
    cout << total << endl;
}