#include <bits/stdc++.h>
using namespace std;

int c;

int fib(int x) {
    c++;
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fib(x-1) + fib(x-2);
}

int main() {
    int n, k;
    cin >> n;
    while (n--) {
        c = 0;
        cin >> k;
        printf("fib(%d) = %d calls = %d\n", k, c-1, fib(k));
    }
    return 0;
}