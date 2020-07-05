#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, total = 0;
    cin >> a >> b;
    total = (a+b)*(b-a+1)/2;
    cout << total << endl;
    return 0;
}