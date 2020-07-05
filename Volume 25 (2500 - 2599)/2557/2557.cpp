#include<bits/stdc++.h>
using namespace std;

int main(){
    int eq, pls;
    string s, r, l, j;
    while (cin >> s) {
        pls = s.find('+');
        eq = s.find('=');
        r = s.substr(0, pls);
        l = s.substr(pls+1, eq-pls-1);
        j = s.substr(eq+1, s.length());
        if (r == "R") cout << stoi(j)-stoi(l) << endl;
        else if (l == "L") cout << stoi(j)-stoi(r) << endl;
        else if (j == "J") cout << stoi(r)+stoi(l) << endl;
    }
    return 0;
}