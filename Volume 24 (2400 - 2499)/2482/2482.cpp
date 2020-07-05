#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s1, s2;
    map<string, string> ma;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s1);
        getline(cin, s2);
        ma[s1] = s2;
    }
    cin >> m >> ws;
    while (m--) {
        getline(cin, s1);
        getline(cin, s2);
        cout << s1 << endl;
        cout << ma[s2] << endl << endl;
    }
    return 0;
}