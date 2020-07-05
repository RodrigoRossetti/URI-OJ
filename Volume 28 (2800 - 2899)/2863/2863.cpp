#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double min = 12, a;
    while(cin >> n) {
        while (n--) {
            cin >> a;
            if(a < min) min = a;
        }
        printf("%.2lf\n", min);
        min = 12;
    }
    return 0;
}