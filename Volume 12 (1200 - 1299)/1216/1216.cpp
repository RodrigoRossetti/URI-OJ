#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0;
    double total = 0;
    string s;
    while (getline(cin, s)) {
        cin >> n;
        cin.ignore();
        i++;
        total += n;
    }
    printf("%.1lf\n", total/i);
    return 0;
}