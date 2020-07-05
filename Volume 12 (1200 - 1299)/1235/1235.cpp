#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s, s1, s2;
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        s1 = s.substr(0, s.length()/2);
        s2 = s.substr(s.length()/2, s.length()/2);
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        cout << s1 << s2 << endl;
    }
    return 0;
}