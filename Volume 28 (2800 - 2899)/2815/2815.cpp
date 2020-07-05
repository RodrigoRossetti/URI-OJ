#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ' ) 
            if (s[i+1] == s[i+3] && s[i+2] == s[i+4])
                s.erase(s.begin()+i+2, s.begin()+i+4);
    cout << s << endl;
    return 0;
}