#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s = "Entao eh Natal!";
    cin >> n;
    s.insert(12, n-1, 'a');
    s.insert(10, n-1, 'a');
    s.insert(4, n-1, 'a');
    cout << s << endl;
    return 0;
}