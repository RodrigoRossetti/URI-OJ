#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, v, a, x, y, k, l;
    cin >> t;
    while (t--) {
        cin >> n >> v >> a;
        int arr[a][2];
        for (int i = 0; i < a; i++) {
            cin >> x >> y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        int p = a;
        for (int i = 0; i < p; i++) {
            k = arr[i][0];
            l = arr[i][1];
            for (int j = i+1; j < p; j++) {
                if ((arr[j][0] == l && arr[j][1] == k) || (arr[j][0] == k && arr[j][1] == l)) {
                    a--;
                    break;
                }
            }
        }
        cout << a*2 << endl;
    }
    return 0;
}