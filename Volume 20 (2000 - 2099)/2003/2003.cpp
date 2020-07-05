#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int h, m, total = 0;
    while(scanf("%d:%d", &h, &m) != EOF) {
        m += h*60;
        if (m > 420) total = m - 480 + 60;
        printf("Atraso maximo: %d\n", total);
        total = 0;
    }
}