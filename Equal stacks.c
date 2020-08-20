#include <stdio.h>
#include <string.h>

int idx[3], h[3], block[3][100005];

int main()
{
    int a, b, c, i, t;
    while(scanf("%d%d%d", &a, &b, &c) == 3)
    {
        memset(h, 0, sizeof(h));
        for (i=0; i<a; i++)
        {
            scanf("%d", &t);
            block[0][i] = t;
            h[0] += t;
        }
        for (i=0; i<b; i++)
        {
            scanf("%d", &t);
            block[1][i] = t;
            h[1] += t;
        }
        for (i=0; i<c; i++)
        {
            scanf("%d", &t);
            block[2][i] = t;
            h[2] += t;
        }
        memset(idx, 0, sizeof(idx));
        while (h[0] > 0 || h[1] > 0 || h[2] > 0)
        {
            if (h[0] == h[1] && h[0] == h[2])
            {
                break;
            }
            if (h[0] >= h[1] && h[0] >= h[2] && idx[0] < a)
            {
                h[0] -= block[0][idx[0]++];
            }
            else if (h[1] >= h[0] && h[1] >= h[2] && idx[1] < b)
            {
                h[1] -= block[1][idx[1]++];
            }
            else if (h[2] >= h[1] && h[2] >= h[0] && idx[2] < c)
            {
                h[2] -= block[2][idx[2]++];
            }
        }
        printf("%d\n", h[0]);
    }
    return 0;
}
