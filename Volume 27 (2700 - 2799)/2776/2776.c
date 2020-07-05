#include <stdio.h>

int main() {
    int n, m, q, v, i, j, total[2001], prom[2001], flag[2001];
    while(scanf("%d %d", &n, &m) != EOF) {

        memset(total, 0, sizeof(total));
        memset(prom, 0, sizeof(prom));
        memset(flag, 0, sizeof(flag));
        flag[0] = 1;

        while(n--) {
            scanf("%d %d", &q, &v);
            if (v > prom[q]) prom[q] = v;
            flag[q] = 1;
        }

        for (i = 0; i < m + 1; i++)
            for(j = i; j > 0; j--)
                if(flag[i-j] && prom[j] != 0 && total[i-j] + prom[j] > total[i])
                    total[i] = total[i-j] + prom[j], flag[i] = 1;

        printf("%d\n", total[m]);
    }
    return 0;
}