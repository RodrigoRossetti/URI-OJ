#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == 0) total++;
    }
    total > n/2 ? cout << "Y" << endl : cout << "N" << endl;
}