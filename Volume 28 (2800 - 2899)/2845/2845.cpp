#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, max = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x > max)
            max = x;
    }
    cout << max+1 << endl;
    return 0;
}