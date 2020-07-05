#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s1, s2, s3;
    cin >> n;
    while (n--) {
        cin >> s1 >> s2;
        s3 = "";
        if (s1.length() <= s2.length()) {
            for (int i = 0; i < s1.length(); i++) {
                s3 += s1[i];
                s3 += s2[i];
            }
            s3 += s2.substr(s1.length(),s2.length());
            cout << s3 << endl;
        }
        else {
            for (int i = 0; i < s2.length(); i++) {
                s3 += s1[i];
                s3 += s2[i];
            }
            s3 += s1.substr(s2.length(),s1.length());
            cout << s3 << endl;
        }
    }
    return 0;
}