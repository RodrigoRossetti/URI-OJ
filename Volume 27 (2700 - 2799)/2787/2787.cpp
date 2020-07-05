#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    scanf("%d%d", &i, &j);
    if((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) printf("1\n");
    else printf("0\n");
}