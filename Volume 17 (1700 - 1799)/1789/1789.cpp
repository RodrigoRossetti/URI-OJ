#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, p, max = 0;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &p);
            if (p > max) max = p;
        }
        if (max < 10) printf("1\n");
        else if (max < 20) printf("2\n");
        else printf("3\n");
        max = 0;
    }
}