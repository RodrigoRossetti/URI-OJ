#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, flag;
    cin >> n;
    while (n--) {
        flag = 0;
        cin >> x;
        if (x == 2) flag = 0;
        else if (x % 2 == 0) flag = 1;
        for (int i = 3; i < sqrt(x); i += 2)
            if (x % i == 0) flag = 1;
        flag ? cout << "Not Prime\n" : cout << "Prime\n";
    }
    return 0;
}