#include <bits/stdc++.h>
using namespace std;

int main() {
    int cresc = 1, desc = 1, arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (i >= 1) {
            if (arr[i-1] >= arr[i]) cresc = 0;
            if (arr[i-1] <= arr[i]) desc = 0;
        }
    }
    if (cresc) cout << "C\n";
    else if (desc) cout << "D\n";
    else cout << "N\n";
	return 0;
}