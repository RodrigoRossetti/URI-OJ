#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, carga, nota;
    double s1, s2;
    while(cin >> n) {
        for (int i = 0; i < n; i++) {
            cin  >> nota >> carga;
            s1 += nota * carga;
            s2 += carga;
        }
        printf("%.4lf\n", s1/(s2*100));
        s1 = s2 = 0;
    }
    return 0;
}