#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, la, lb, sa, sb;
    cin >> n;
    cin >> la >> lb;
    cin >> sa >> sb;
    if (n >= la && n <= lb && n >= sa && n <= sb) cout << "possivel\n";
    else cout << "impossivel\n";
    return 0;
}