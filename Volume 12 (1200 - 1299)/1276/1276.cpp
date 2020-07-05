#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag1, flag2, arr[27];
    string s;
    while (getline(cin, s)) {
        flag1 = flag2 = 1;
        memset(arr, 0, sizeof(arr));
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.length(); i++)
            if (!isspace(s[i]))
                arr[s[i]-'a']++;
        for (int i = 0; i < 27; i++) {
            if (flag1 == 1 && arr[i] != 0) {
                flag1 = 0;
                if (flag2 == 0) cout << ", ";
                cout << char(i+'a') << ':';
                flag2 = 0;
            }
            if (flag1 == 0 && arr[i] == 0) {
                flag1 = 1;
                cout << char((i-1)+'a');
            }
        }
        cout << endl;
    }
    return 0;
}