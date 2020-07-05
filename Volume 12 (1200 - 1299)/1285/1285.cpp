#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, d, x, total, num[4];
    while (cin >> a >> b) {
        total = 0;
        for(int i = a; i <= b; i++) {
            d = x = 0;
            n = i;
            while (n != 0) {
                num[d] = n % 10;
                n /= 10;
                d++;
            }
            for (int j = 0; j < d; j++)
                for (int k = j+1; k < d; k++)
                    if (num[j] == num[k])
                        x = 1;
            if (!x) total++;
        }
        cout << total << endl;
    }
    return 0;
}