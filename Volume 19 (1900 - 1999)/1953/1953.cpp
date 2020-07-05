#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, ehd = 0, epr = 0, outros = 0;
    string s;
    while (cin >> n) {
        while (n--) {
            cin >> k >> s;
            if (s.compare("EPR") == 0) epr++;
            else if (s.compare("EHD") == 0) ehd++;
            else outros++;
        }
        printf("EPR: %d\n", epr);
        printf("EHD: %d\n", ehd);
        printf("INTRUSOS: %d\n", outros);
        ehd = epr = outros = 0;
    }
    return 0;
}