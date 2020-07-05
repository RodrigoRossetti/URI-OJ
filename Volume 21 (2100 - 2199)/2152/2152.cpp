#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, h, m, a;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d %d", &h, &m, &a);
        a ? printf("%02d:%02d - A porta abriu!\n", h, m) : printf("%02d:%02d - A porta fechou!\n", h, m);;
    }
}