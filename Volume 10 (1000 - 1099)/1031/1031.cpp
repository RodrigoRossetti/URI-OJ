#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int m) {
    if (n == 1) return 1;
    return (josephus(n-1, m) + m-1) % n+1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m;
    while (cin >> n && n) {
        for (m = 1; josephus(n-1, m) != 12; m++) { }
        cout << m << endl;
    }
    return 0;
}