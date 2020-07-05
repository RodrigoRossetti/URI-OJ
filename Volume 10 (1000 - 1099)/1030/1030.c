#include <stdio.h>

int main() {
    int nc, n, k, pos, last, arr[10000];
    scanf("%d", &nc);
    for (int i = 1; i <= nc; i++) {
        memset(arr, 0, sizeof(arr));
        scanf("%d %d", &n, &k);
        for (int j = 0; j < n; j++) arr[j] = 1;
        pos = n-1;
        for (int j = 0; j < n-1; j++) {
            for (int z = 0; z < k;) {
                pos++;
                if (pos == n) pos = 0;
                if (arr[pos]) z++;
            }
            arr[pos] = 0;
        }
        for (int j = 0; j < n; j++) if (arr[j] == 1) last = j;
        printf("Case %d: %d\n", i, last+1);
    }
    return 0;
}