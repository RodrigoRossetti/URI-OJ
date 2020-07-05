#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    while (cin >> n && n != 0) {
        int ultimo = -1, total = 0;
        while (n--) {
            cin >> c;
            if (ultimo == -1) {
                ultimo = c;
                continue;
            }
            if (c >= ultimo+10) total += 10;
            else total += abs(c-ultimo);
            ultimo = c;
        }
        cout << total+10 << endl;
    }
}