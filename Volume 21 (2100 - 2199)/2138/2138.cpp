#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int arr[10];
    while (cin >> s) {
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < s.length(); i++) {
            arr[s[i]-'0']++;
        }
        int k = *max_element(arr , arr + 10);
        for (int i = 9; i >= 0; i--) {
            if (arr[i] == k) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}