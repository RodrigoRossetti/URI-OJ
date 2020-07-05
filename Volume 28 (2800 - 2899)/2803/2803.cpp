#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if (s == "roraima" ||
        s == "acre" ||
        s == "amapa" ||
        s == "amazonas" ||
        s == "para" ||
        s == "rondonia" ||
        s == "tocantins") cout << "Regiao Norte" << endl;
    else cout << "Outra regiao" << endl;
    return 0;
}