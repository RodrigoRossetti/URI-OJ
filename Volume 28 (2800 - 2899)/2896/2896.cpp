#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, k;
    cin >> n;
    while(n--) {
        cin >> t >> k;
        if(t >= k)
            cout << t / k + t % k << endl;
        else
            cout << t << endl;
    }
    return 0;
}