#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 1, flag = 1;
    string a, b;
    while (getline(cin, a) && a != "0") {
        if (flag == 1) flag = 0;
        else cout << endl;
        getline(cin, b);
        size_t flag = b.find(a);
        printf("Instancia %d\n", i);
        if (flag != string::npos)
            cout << "verdadeira\n";
        else
            cout << "falsa\n";
        i++;
    }
    return 0;
}