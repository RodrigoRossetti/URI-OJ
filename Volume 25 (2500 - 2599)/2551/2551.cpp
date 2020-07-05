#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double d, t, media = 0;
    while(cin >> n) {
        cin >> t >> d;
        media = d/t;
        cout << 1 << endl;
        for(int i = 2; i < n+1; i++) {
            cin >> t >> d;
            if(double(d)/double(t) > media) {
                media = d/t;
                cout << i << endl;
            }
        }
        media = 0;
    }
    return 0;
}