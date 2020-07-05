#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == b && a != c) cout << "C\n";
        else if (a == c && a != b) cout << "B\n";
        else if (b == c && b != a) cout << "A\n";
        else cout << "*\n";
    }
    return 0;
}