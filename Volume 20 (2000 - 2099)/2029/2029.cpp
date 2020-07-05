#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double v, d, r, h, a;
    while (scanf("%lf%lf", &v, &d) != EOF) {
        printf("ALTURA = %.2lf\n", v / (3.14 * d * 0.5 * d * 0.5));
        printf("AREA = %.2lf\n", 3.14 * d * 0.5 * d * 0.5);
    }
}