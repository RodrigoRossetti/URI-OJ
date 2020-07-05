#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, favor = 0, contra = 0;
    while(scanf("%d", &n) != EOF) {
        while(n--) {
            scanf("%d", &i);
            if(i) favor++;
            else contra++;
        }
        if(favor >= 2*contra) printf("impeachment\n");
        else printf("acusacao arquivada\n");
        favor = contra = 0;
    }
}