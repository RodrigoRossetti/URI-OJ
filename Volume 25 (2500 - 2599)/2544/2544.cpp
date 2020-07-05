#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, i = 0;
    while (scanf("%d", &n) != EOF) {
        while(n != 1) {
            n /= 2;
            i++;
        }
        printf("%d\n", i);
        i = 0;
    }
}