#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, v;
    cin >> n;
    while (n--) {
        cin >> k;
        while (k--) {
            cin >> v;
            if (v == 1) cout << "Rolien\n";
            if (v == 2) cout << "Naej\n";
            if (v == 3) cout << "Elehcim\n";
            if (v == 4) cout << "Odranoel\n";
        }
    }
    return 0;
}