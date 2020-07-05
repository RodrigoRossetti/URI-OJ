#include <bits/stdc++.h>
using namespace std;

int main() {
    int nc, n, array[3000000] = {0};
    scanf("%d", &nc);
    while (nc--) {
        scanf("%d",&n);
        for(int i = 0; i < n; i++) scanf("%d", &array[i]);
        sort(array, array+n);
        for(int i = 0; i < n-1; i++) printf("%d ", array[i]);
        printf("%d\n",array[n-1]);
    }
    return 0;
}
