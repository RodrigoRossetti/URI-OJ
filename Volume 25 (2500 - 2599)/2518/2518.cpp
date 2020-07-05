#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, h, c, l;
    while (cin >> n) {
        cin >> h >> c >> l;
        h /= 100, c /= 100, l /= 100;
        double area = (sqrt(n*c*n*c+n*h*n*h)*l);
        printf("%.4lf\n", area);
    }
    return 0;
}