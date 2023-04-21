#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int ar_1[x];
    for (int i=0; i<x; i++)
    {
        scanf("%d", &ar_1[i]);
    }

    int y;
    scanf("%d", &y);
    int ar_2[y];
    for (int i=0; i<y; i++)
    {
        scanf("%d", &ar_2[i]);
    }

    int ans[x+y];
    for (int i=0; i<x; i++)
    {
        ans[i] = ar_1[i];
    }
    int i = x;
    for (int j=0; j<y; j++)
    {
        ans[i] = ar_2[j];
        i++;
    }
    for (int i=0; i<x+y; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}