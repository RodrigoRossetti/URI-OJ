#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, total = 0;
    string str;
    cin >> n;
    while (n--) {
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '1') total += 2;
            if (str[i] == '7') total += 3;
            if (str[i] == '4') total += 4;
            if (str[i] == '2' || str[i] == '3' || str[i] == '5') total += 5;
            if (str[i] == '6' || str[i] == '9' || str[i] == '0') total += 6;
            if (str[i] == '8') total += 7;
        }
        cout << total << " leds" << endl;
        total = 0;
    }
    return 0;
}