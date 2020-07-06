#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    while (cin >> t && t) {
        long long total = 0;
        for (int i = 0; i < t; i++) {
            cin >> n >> ws;
            getline(cin, s);
            if (s == "suco de laranja") total += n*120;
            else if (s == "morango fresco" || s == "mamao") total += n*85;
            else if (s == "goiaba vermelha") total += n*70;
            else if (s == "manga") total += n*56;
            else if (s == "laranja") total += n*50;
            else if (s == "brocolis") total += n*34;
        }
        if (total < 110) printf("Mais %d mg\n", 110-total);
        else if (total > 130) printf("Menos %d mg\n", total-130);
        else printf("%d mg\n", total);
    }
    return 0;
}