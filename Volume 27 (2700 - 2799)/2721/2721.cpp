#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, i, total = 0;
    for (i = 0; i < 9; i++) {
        scanf("%lld", &a);
        total += a;
    }
    
    total %= 9;
    if (total != 0) total -= 1;
    else total = 8;

    if (total == 0) printf("Dasher\n");
    else if (total == 1) printf("Dancer\n");
    else if (total == 2) printf("Prancer\n");
    else if (total == 3) printf("Vixen\n");
    else if (total == 4) printf("Comet\n");
    else if (total == 5) printf("Cupid\n");
    else if (total == 6) printf("Donner\n");
    else if (total == 7) printf("Blitzen\n");
    else if (total == 8) printf("Rudolph\n");
    return 0;
}