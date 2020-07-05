#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i = 0, max = 0;
    string s;
    queue<string> q;
    while (1) {
        cin >> n;
        if (n == 0) break;
        if (i > 0) cout << endl;
        while (n--) {
            cin >> s;
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