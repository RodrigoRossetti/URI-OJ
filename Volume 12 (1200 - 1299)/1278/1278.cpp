#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i = 0, max = 0;
    string s;
    queue<string> q;
    while (1) {
        cin >> n;
        cin.ignore();
        if (n == 0) break;
        if (i > 0) cout << endl;
        while (n--) {
            getline (cin, s);
            for(int j = s.length(); j >= 0; j--)
                if(s[j]==' ' && s[j] == s[j-1])
                    s.erase(s.begin()+j);
            if (s[0] == ' ') s = s.substr(1, s.length());
            if (s[s.length()-1] == ' ') s = s.substr(0, s.length() - 1);
            if (s.length() > max) max = s.length();
            q.push(s);
        }
        while (!q.empty()) {
            cout.width(max);
            cout << q.front() << endl;
            q.pop();
        }
        max = 0;
        i++;
    }
    return 0;
}