#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, f, total = 0;
    cin >> a >> n;
    while (n--) {
        cin >> f;
        if (a*f >= 40000000) total++;
    }
    cout << total << endl;
    return 0;
}