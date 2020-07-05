#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s1, s2;
    cin >> n;
    while (n--) {
        cin >> s1 >> s2;
        if (s1.compare(s2) == 0)
            cout << "empate\n";
        else if ((s1.compare("tesoura") == 0 && s2.compare("papel") == 0) ||
        (s1.compare("papel") == 0 && s2.compare("pedra") == 0) ||
        (s1.compare("pedra") == 0 && s2.compare("lagarto") == 0) ||
        (s1.compare("lagarto") == 0 && s2.compare("spock") == 0) ||
        (s1.compare("spock") == 0 && s2.compare("tesoura") == 0) ||
        (s1.compare("tesoura") == 0 && s2.compare("lagarto") == 0) || 
        (s1.compare("lagarto") == 0 && s2.compare("papel") == 0) || 
        (s1.compare("papel") == 0 && s2.compare("spock") == 0) || 
        (s1.compare("spock") == 0 && s2.compare("pedra") == 0) || 
        (s1.compare("pedra") == 0 && s2.compare("tesoura") == 0))
            cout << "rajesh\n";
        else
            cout << "sheldon\n";
    }
    return 0;
}