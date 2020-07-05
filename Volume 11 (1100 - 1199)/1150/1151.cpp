#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int x, z, i;
    cin >> x;
    cin >> z;
    while (z <= x) {
        cin >> z;
    }
    int soma = x;
    for(i = 1; soma <= z; i++) {
        soma += x+i;
    }
    cout << i << "\n";
}