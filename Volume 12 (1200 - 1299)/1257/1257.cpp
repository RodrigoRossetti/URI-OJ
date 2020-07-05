#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, l, total = 0;
    string str;
    cin >> n;
    while (n--) {
        cin >> l;
        for (int i = 0; i < l; i++) {
            cin >> str;
            for (int j = 0; j < str.length(); j++)
                total += int(str[j]) - 65 + i + j;
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}