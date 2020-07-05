#include<bits/stdc++.h>
using namespace std;

int main() {
    char alfabeto[26];
    int n, i;
    while(scanf("%s", alfabeto) != EOF) {
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &i);
            printf("%c", alfabeto[i-1]);
        }
        printf("\n");
    }
}