#include<bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int total = 0;
    while(getline(cin, c)) {
        if (c == "--*") total += 1;
        if (c == "-*-") total += 2;
        if (c == "-**") total += 3;
        if (c == "*--") total += 4;
        if (c == "*-*") total += 5;
        if (c == "**-") total += 6;
        if (c == "***") total += 7;
        if (c == "caw caw") {
            cout << total << endl;
            total = 0;
        }
    }
    return 0;
}	