#include <stdio.h>

int main()
{
    int i;
    unsigned int N;
    scanf("%u", &N);
    for ( i = 1; i <= N; i++)
    {
        if( i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}