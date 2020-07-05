#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double total = 0, arr[12][12];
    char c;
    int x, y, i, j, cond1 = 0, cond2 = 4;
    scanf(" %c", &c);
    for(x = 0; x <= 11; x++)
        for(y = 0; y <= 11; y++)
            scanf("%lf", &arr[x][y]);

    for(i = 1; i <= 10; i++) {
        if (i <= 5) {
            for (j = 0; j <= cond1; j++)
                total += arr[i][j];
            cond1++;
        } else {
            for (j = 0; j <= cond2; j++)
                total += arr[i][j];
            cond2--;
        }
    }
     
    if(c=='S') printf("%.1lf\n", total);
    else if(c=='M') printf("%.1lf\n", total/30);
}