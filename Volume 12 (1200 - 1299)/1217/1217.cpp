#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0, c;
    double v, total = 0, kg = 0;
    string s;
    cin >> n;
    while (n--) {
        c = 1;
        cin >> v;
        cin.ignore();
        getline(cin, s);
        total += v;
        i++;
        c += count(s.begin(), s.end(), ' ');
        kg += c;
        printf("day %d: %d kg\n", i, c);
    }
    printf("%.2lf kg by day\n", kg/i);
    printf("R$ %.2lf by day\n", total/i);
    return 0;
}