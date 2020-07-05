#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 1, max = 0;
    while (n != 0) {
        cin >> n;
        if (n > max)
            max = n;
    }
    cout << max << endl;
    return 0;
}