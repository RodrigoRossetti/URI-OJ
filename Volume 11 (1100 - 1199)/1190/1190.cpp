#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double total = 0, arr[12][12];
    char c;
    int x, y, i, j, cond1 = 6, cond2 = 5;
    scanf(" %c", &c);
    for(x = 0; x <= 11; x++)
        for(y = 0; y <= 11; y++)
            scanf("%lf", &arr[x][y]);

    for(i = 7; i <= 11; i++) {
        for(j = cond2; j <= cond1; j++)
            total += arr[j][i];
        cond1++;
        cond2--;
    }
     
    if(c=='S') printf("%.1lf\n", total);
    else if(c=='M') printf("%.1lf\n", total/30);
}