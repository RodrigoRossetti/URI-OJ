#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, p;
    while (cin >> n >> r) {
        int arr[10001] = {0};
        for (int i = 0; i < r; i++) {
            cin >> p;
            arr[p] = 1;
        }
        if (n == r) {
            cout << "*\n";
            continue;
        }
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 0) cout << i << " ";
            if (arr[i] == 1) arr[i] = 0;
        }
        cout << endl;
    }
    return 0;
}