#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double n;
    scanf("%lf", &n);
    printf("%.1lf %.1lf\n", n/log(n), 1.25506 * n/log(n));
}