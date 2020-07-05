#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, a, a1, a2, i = 0;
    while(scanf("%d %d %d", &n, &a1, &a2) != EOF) {
        while (n--) {
            scanf("%d", &a);
            if(a >= a1 && a <= a2) {
                i++;
            }
        }
        printf("%d\n", i);
        i = 0;
    }
}