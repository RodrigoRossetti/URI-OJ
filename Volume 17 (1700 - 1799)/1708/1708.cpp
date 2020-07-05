#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, i = 0, total = 0;
    cin >> n1 >> n2;
    while (total < n2) {
        total += n2-n1;
        i++;
    }
    cout << i << endl;
    return 0;
}