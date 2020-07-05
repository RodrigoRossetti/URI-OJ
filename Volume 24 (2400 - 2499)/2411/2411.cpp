#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x = 4, y = 3, total = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        switch(arr[i]) {
            case 1: x++, y += 2; break;
            case 2: x += 2, y++; break;
            case 3: x += 2, y--; break;
            case 4: x++, y -= 2; break;
            case 5: x--, y -= 2; break;
            case 6: x -= 2, y--; break;
            case 7: x -= 2, y++; break;
            case 8: x--, y += 2; break;
        }
        if ((x == 1 && y == 3) || (x == 2 && y == 3) || (x == 2 && y == 5) || (x == 5 && y == 4)) {
            total++;
            break;
        }
        else total++;
    }
    cout << total << endl;
    return 0;
}