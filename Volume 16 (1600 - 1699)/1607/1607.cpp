#include <bits/stdc++.h>
using namespace std;
 
int contador(char c1, char c2) {
    int total = 0;
    c1 -= 97;
    c2 -= 97;
    for(; c1 != c2; c1 = (c1+1)%26)
        total++;
    return total;
}

int main(int argc, const char * argv[]) {
    int n, soma;
    string a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        soma = 0;
        for (int i = 0; i < a.length(); i++)
            soma += contador(a[i], b[i]);
        cout << soma << endl;
    }
    return 0;
}