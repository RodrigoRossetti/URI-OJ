#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, r, total1 = 0, total2 = 0;
    cin >> n;
    while (n != 0) {
        while (n--) {
            cin >> r;
            if (r == 1) total2++;
            if (r == 0) total1++;
        }
        printf("Mary won %d times and John won %d times\n", total1, total2);
        total1 = total2 = 0;
        cin >> n;
    }
    return 0;
}