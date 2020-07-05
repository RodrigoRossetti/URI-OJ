#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a; cin >> b; cin >> c;
    while(a != 0) {
        printf("%.0f\n", floor(sqrt(a * b * 100 / c)));
        cin >> a;
        if (a == 0) break;
        cin >> b; cin >> c;
    }
}