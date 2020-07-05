#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int  x, y;
        cin >> x >> y;
        x /= 3;
        y /= 3;
        cout << x * y << endl;
    }
	return 0;
}