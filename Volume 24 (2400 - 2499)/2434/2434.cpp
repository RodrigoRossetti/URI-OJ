#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, saldo, min, x;
    cin >> n >> saldo;
    min = saldo;
    while (n--) {
        cin >> x;
        saldo += x;
        if (saldo < min)
            min = saldo;
    }
    cout << min << endl;
    return 0;
}