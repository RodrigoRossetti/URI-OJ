#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        string str[n];
        for(int i = 0; i < n; i++)
            cin >> str[i];
        sort(str, str+n);
        for(int i = 0; i < n; i++)
            cout << str[i] << endl;
    }
    return 0;
}