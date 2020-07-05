#include <stdio.h>

int main()
{
    int N, M, net, i, cndtn;
    int bill[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    while(1)
    {
        scanf("%d%d", &N, &M);
        if(N==0 && M==0) break;
        net = M - N;
        for(i=0, cndtn = 0; i<15; i++)
        {
            if(bill[i] == net)
            {
                cndtn = 1;
                break;
            }
        }
        if(cndtn) printf("possible\n");
        else printf("impossible\n");
    }
    return 0;
}
