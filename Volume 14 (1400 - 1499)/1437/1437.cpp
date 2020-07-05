#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c, fim;
    while (cin >> n && n) {
        fim = 'N';
        while (n--) {
            cin >> c;
            if (fim == 'N') {
                if (c == 'D') fim = 'L';
                else fim = 'O';
            }
            else if (fim == 'L') {
                if (c == 'D') fim = 'S';
                else fim = 'N';
            }
            else if (fim == 'S') {
                if (c == 'D') fim = 'O';
                else fim = 'L';
            }
            else if (fim == 'O') {
                if (c == 'D') fim = 'N';
                else fim = 'S';
            }
        }
        cout << fim << endl;
    }
    return 0;
}