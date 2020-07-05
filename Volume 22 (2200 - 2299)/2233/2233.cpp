#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long r, g, b, x, y, total = 1;
    cin >> hex >> r >> g >> b;
    if (r >= g && g >= b) {
        x = r/g, y = g/b;
        total = (y*y)*(x*x)+(x*x)+1;
    }
    else if (r >= g && g < b) {
        x = r/g;
        total = (x*x)+1;
    }
    cout << hex << total << endl;
    return 0;
}