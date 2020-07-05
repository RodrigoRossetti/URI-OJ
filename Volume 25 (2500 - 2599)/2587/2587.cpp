#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, p1, p2;
    string s1, s2, s3;
    cin >> c >> ws;
    while (c--) {
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);
        for (int i = 0; i < s3.length(); i++) {
            if (s3[i] == '_') {
                p1 = i;
                break;
            }
        }
        for (int i = p1+1; i < s3.length(); i++) {
            if (s3[i] == '_') {
                p2 = i;
                break;
            }
        }
        if (s1[p1] == s2[p2] || s1[p2] == s2[p1]) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
