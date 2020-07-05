#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n;
    char c;
    cin >> n;
    while (n--) {
        cin >> a >> c >> b;
        if (a == b) cout << a*b << endl;
        else if (isupper(c)) cout << b-a << endl;
        else if (islower(c)) cout << a+b << endl;
    }
    return 0;
}