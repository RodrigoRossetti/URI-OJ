#include <bits/stdc++.h>
using namespace std;

int main() {
    string d, s;
    while (cin >> d) {
        cin >> s;
        d.find(s) != string::npos ? cout << "Resistente\n" : cout << "Nao resistente\n";
    }
    return 0;
}