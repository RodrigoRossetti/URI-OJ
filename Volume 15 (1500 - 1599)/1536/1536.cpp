#include <bits/stdc++.h>
using namespace std;

int main() {
    int v1, v2, s1, s2, c1, c2, a, b, n;
    char c;
    cin >> n;
    while (n--) {
        v1 = v2 = s1 = s2 = c1 = c2 = a = b = 0;
        cin >> a >> c >> b;
        if (a > b) v1++;
        else if (a < b) v2++;
        c2 += b;
        s1 += a;
        s2 += b;
        cin >> a >> c >> b;
        if (a > b) v2++;
        else if (a < b) v1++;
        c1 += b;
        s2 += a;
        s1 += b;
        if (v1 > v2) cout << "Time 1\n";
        else if (v2 > v1) cout << "Time 2\n";
        else if (s1-s2 > s2-s1) cout << "Time 1\n";
        else if (s1-s2 < s2-s1) cout << "Time 2\n";
        else if (c1 > c2) cout << "Time 1\n";
        else if (c1 < c2) cout << "Time 2\n";
        else cout << "Penaltis\n";
    }
    return 0;
}