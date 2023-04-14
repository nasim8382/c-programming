#include <stdio.h>

int main()
{
    unsigned int N;
    scanf("%d", &N);
    int arr[N];
    int rev_arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if ( i % 2 == 0)
        {
            rev_arr[i] = arr[i];
        }
    }
    if (N % 2 == 0)
    {
        for (int i = N-2; i >= 0; i-=2)
        {
            printf("%d ", rev_arr[i]);
        }
    }
    else
    {
        for (int i = N-1; i >= 0; i-=2)
        {
            printf("%d ", rev_arr[i]);
        }
    }
    return 0;
}