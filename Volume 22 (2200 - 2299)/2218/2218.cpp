#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        cout << (x*(x+1)/2)+1 << endl;
    }
    return 0;
}