#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c1, c2;
    char c;
    cin >> n;
    while (n--) {
        cin >> c1 >> c >> c2;
        for (int i = 5; i <= 10; i++) {
            if (c1 != c2)
                printf("%d x %d = %d && %d x %d = %d\n", c1, i, c1*i, c2, i, c2*i);
            else 
                printf("%d x %d = %d\n", c1, i, c1*i);
        }
    }
    return 0;
}