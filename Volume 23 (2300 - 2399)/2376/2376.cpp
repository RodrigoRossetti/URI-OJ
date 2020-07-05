#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[16];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 16; i += 2) {
        int n, m;
        cin >> n >> m;
        if (n < m) arr[i] = 1;
        else arr[i+1] = 1;
    }
    for (int i = 0; i < 16; i += 4) {
        int n, m;
        cin >> n >> m;
        if (n < m) arr[i] = arr[i+1] = 1;
        else arr[i+2] = arr[i+3] = 1;
    }
    for (int i = 0; i < 16; i += 8) {
        int n, m;
        cin >> n >> m;
        if (n < m) arr[i] = arr[i+1] = arr[i+2] = arr[i+3] = 1;
        else arr[i+4] = arr[i+5] = arr[i+6] = arr[i+7] = 1;
    }
    for (int i = 0; i < 16; i += 16) {
        int n, m;
        cin >> n >> m;
        if (n < m) arr[i] = arr[i+1] = arr[i+2] = arr[i+3] = arr[i+4] = arr[i+5] = arr[i+6] = arr[i+7] = 1;
        else arr[i+8] = arr[i+9] = arr[i+10] = arr[i+11] = arr[i+12] = arr[i+13] = arr[i+14] = arr[i+15] = 1;
    }
    int pos;
    for (int i = 0; i < 16; i++)
        if (arr[i] == 0) pos = i;
    cout << char(pos+65) << endl;
    return 0;
}