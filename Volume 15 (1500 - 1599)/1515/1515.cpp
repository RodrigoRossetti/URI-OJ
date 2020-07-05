#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, amax = 5000;
    string s, smax;
    while (1) {
        cin >> n;
        if (n == 0) break;
        while (n--) {
            cin >> s >> a >> b;
            if (amax > a-b) {
                amax = a-b;
                smax = s;
            }
        }
        cout << smax << endl;
        amax = 5000;
    }
    return 0;
}