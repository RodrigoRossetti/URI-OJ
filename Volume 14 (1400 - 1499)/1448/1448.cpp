#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, d1 = 0, d2 = 0, t = 0;
    string o, s1, s2;
    cin >> n;
    cin.ignore();
    for (int j = 1; j <= n; j++) {
        getline(cin, o);
        getline(cin, s1);
        getline(cin, s2);
        for (int i = 0; i < o.length(); ++i) {
            if (s1[i] != o[i]) ++d1;
            if (s2[i] != o[i]) ++d2;
            if (s1[i] == o[i] && s2[i] != o[i] && t == 0) t = 1;
            if (s2[i] == o[i] && s1[i] != o[i] && t == 0) t = 2;
        }
        printf("Instancia %d\n", j);
        if (d1 < d2 || (d1 == d2 && t == 1))
            printf("time 1\n\n");
        else if (d2 < d1 || (d1 == d2 && t == 2))
            printf("time 2\n\n");
        else
            printf("empate\n\n");
        d1 = d2 = t = 0;
    }
    return 0;
}