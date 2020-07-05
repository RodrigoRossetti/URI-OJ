#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, t1 = 0, t2 = 0;
    cin >> n;
    while(n != 0) {
        while(n--) {
            cin >> a >> b;
            if (a > b) t1++;
            else if (b > a) t2++;
        }
        cout << t1 << " " << t2 << endl;
        t1 = t2 = 0;
        cin >> n;
    }
    return 0;
}