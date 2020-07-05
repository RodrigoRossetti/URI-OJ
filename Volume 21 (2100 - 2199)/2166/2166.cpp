#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double n, total = 0;
    scanf("%lf", &n);
    while(n--) {
        total += 2;
        total = 1/total;
    }
    total += 1;
    printf("%.10lf\n", total);
}